#include "pch.h"
#include "CustomRaidmanager.hpp"
#include <mc/Level.hpp>
#include <mc/CommandRegistry.hpp>
#include <mc/Player.hpp>
#include <ScheduleAPI.h>
namespace REvent {
	bool REventManager::trylockwrite()
	{
		return writemutex.try_lock();
	}
	void REventManager::unlockwrite()
	{
		//this->writemutex.lock();
		//avoid warning c26110
		this->writemutex.unlock();
		return;
	}
	bool REventManager::playsoundsforplayers(mUniqueID bossid, std::string const& soundname)
	{
		if (hasRaidBossinreal(bossid)) {
			auto list = mlist[bossid].getRegisteredPlayerList();
			for (auto &acid : list) {
				auto PL = (Player*)Global<Level>->fetchEntity(acid, 0);
				if (PL)
				{
					PL->sendPlaySoundPacket(soundname, PL->getPos(), 1, 1);
				}
			}
			return true;

		}
		return false;
	}
	void REventManager::tick()
	{
		//write
		//std::lock_guard(this->writemutex);
		//if failed to lock skip this time right
		if (trylockwrite()) {
			try {
				checkdeadlocktime = 0;
				//writesome checksafebeforecache
				while (!this->cachelist.empty()) {
					auto& ks = this->cachelist.front();
					switch (ks.type)
					{
					case cacheinfo::cachetype::add:
						REventManager::registry->addSoftEnumValues(REventManager::eventsofttagname, { ks.nameorupdatestr });
						this->mlist.try_emplace(ks.bid, CustomRaidUnit(ks.bid, ks.roundmax, ks.centerpos, ks.dimid, ks.area, ks.percentage, ks.title));
						break;
					case cacheinfo::cachetype::remove:
						REventManager::registry->removeSoftEnumValues(REventManager::eventsofttagname, { ks.nameorupdatestr });
						this->mTraceEntityManager.removetraceunit(ks.bid);
						this->mlist.erase(ks.bid);
						break;
					case cacheinfo::cachetype::updatetitle:
						if (hasRaidBossinreal(ks.bid))
						this->mlist[ks.bid].settitle(ks.title);
						break;
					case cacheinfo::cachetype::updatepercertage:
						if (hasRaidBossinreal(ks.bid))
						this->mlist[ks.bid].sethealthPercentage(ks.percentage);
						break;
					case cacheinfo::cachetype::updatecolor:
						if (hasRaidBossinreal(ks.bid))
						this->mlist[ks.bid].setcolor(ks.color);
						break;
					case cacheinfo::cachetype::registerplayer:
						if (hasRaidBossinreal(ks.bid))
						mlist[ks.bid].recordinfos(ks.playeruid, BossEvent::RegisterPlayer);
						break;
					case cacheinfo::cachetype::unregisterplayer:
						if (hasRaidBossinreal(ks.bid))
						mlist[ks.bid].recordinfos(ks.playeruid, BossEvent::UnregisterPlayer);
						break;
					case cacheinfo::cachetype::updatenowround:
						if (hasRaidBossinreal(ks.bid))
						mlist[ks.bid].setroundnow(ks.round);
						break;
					case cacheinfo::cachetype::bindentities:
						if (this->mTraceEntityManager.hastraceunit(ks.bid)) {
							this->mTraceEntityManager.removetraceunit(ks.bid);
						}
						this->mTraceEntityManager.addnewtraceunit(ks.bid, ks.round, ks.entites, ks.enablesoundtrace);
						break;
					case cacheinfo::cachetype::removebindentities:
							this->mTraceEntityManager.removetraceunit(ks.bid);
						break;
					case cacheinfo::cachetype::updatebindentities:
						this->mTraceEntityManager.updateentity(ks.bid, ks.playeruid);
						break;
					case cacheinfo::cachetype::ondiebindentities:
						this->mTraceEntityManager.updateentitywithdeath(ks.bid, ks.playeruid);
						break;
					case cacheinfo::cachetype::playsoundforplayers:
						playsoundsforplayers(ks.bid, ks.soundname);
						break;
					default:
						break;
					}
					this->cachelist.pop();
				}
			}
			catch (std::runtime_error const& e) {
				logger.error("error at REventManager::tick write for{},try to release lock...", e.what());
				
			}
			catch (...) {
				logger.error("unkown error at REventManager::tick write,try to release lock...");
			}
			this->unlockwrite();
		}
		else {
			++checkdeadlocktime;
			if (checkdeadlocktime > 0) {
				logger.error("maybe deadlock in{}", __FUNCTION__);
			}
			return;
		}
		//tick
		//only create one, so I guess thread pool is not need
		auto& mmlist = mlist;
		std::thread t([this,&mmlist] {
			if (this->trylockwrite()) {//if failed to lock , skip this time tick
				try {
					for (auto& ii : mmlist) {
						//dont kown work or not
						if (ll::getServerStatus() == ll::ServerStatus::Stopping)
							break;
						auto bossid = ii.first;
						if (this->mTraceEntityManager.hastraceunit(bossid)) {
							//checkshouldremove?
							auto traceunit = this->mTraceEntityManager.gettrackunitptr(bossid);
							if (ii.second.getroundnow() != traceunit->bindround)
							{
								this->removebindentities(bossid);//cache
							}
							else {//should not change right away
								//delay to play startsound
								if (traceunit->juststart) {
									this->addplaysoundsforplayers(bossid, traceunit->starttracesound);
									traceunit->juststart = false;
								}
								//delay to update percentage
								if (traceunit->ischanged) {
									this->updatepercentage(bossid, traceunit->getshowpercentage());
									traceunit->ischanged = false;
								}
								//delay to play endsound
								if (traceunit->getshowpercentage()<=0|| traceunit->nowhealth<=0) {
									this->addplaysoundsforplayers(bossid, traceunit->endtracesound);
								}
							}

						}
						//tick
						ii.second.tick();
					}
					//others
				}
				catch (std::runtime_error const& e) {
					logger.error("error at REventManager::tick for{},try to release lock...", e.what());
				}
				catch (...) {
					logger.error("unkown error at REventManager::tick,try to release lock...");
				}
				//end
				this->unlockwrite();
			}
			else
				;//skip this time tick
			});
		t.detach();
	}

	void REventManager::onleft(Player* pl)
	{
		//for (auto& it : mlist) {
		//	it.second.onLeft(pl);
		//}
		//not need
	}

	void REventManager::recordhandle(BossEventPacket* bep)
	{
		auto aData = BEextradata::fromBossEventPacketptr(bep);
		if (uidtoname.find(aData->bossUniqueEntityId) == uidtoname.end())
			return;//the event has been removed then not care
		if (mlist.find(aData->bossUniqueEntityId)!=mlist.end()) {
			cacheinfo info(cacheinfo::cachetype::none);
			info.bid = aData->bossUniqueEntityId; info.playeruid = aData->playerUniqueEntityId;
			switch (aData->action)
			{
			case BossEvent::RegisterPlayer:
				info.type = cacheinfo::cachetype::registerplayer;
				this->cachelist.emplace(info);
				break;
			case BossEvent::UnregisterPlayer:
				info.type = cacheinfo::cachetype::unregisterplayer;
				this->cachelist.emplace(info);
				break;
			default:
				logger.error("error at{},unkown action handle:{}", __FUNCTION__, (int)aData->action);
				break;
			}
		}
	}

	bool REventManager::createNewRaidBoss(std::string const& name, BlockPos const& centerpos, int dim, AABB const& ab, float percentage, std::string const& title, int roundmax)
	{
		if (nametouid.find(name) != nametouid.end())
			return false;
		auto bid = Global<Level>->getNewUniqueID();
		while (uidtoname.find({ bid }) != uidtoname.end())
			bid = Global<Level>->getNewUniqueID();
		//record
		cacheinfo info(cacheinfo::cachetype::add);
		info.bid = bid; info.nameorupdatestr = name; info.title = title;
		info.roundmax = roundmax; info.centerpos = centerpos; info.area = ab; info.dimid = dim; info.percentage = percentage;
		this->cachelist.emplace(info);
		//this->mlist.try_emplace(bid, CustomRaidUnit(bid, roundmax, centerpos, dim, ab, percentage, title));
		//index update first
		nametouid.emplace(name, bid);
		uidtoname.emplace(bid, name);
		return true;
	}

	bool REventManager::removeRaidBoss(std::string const& name)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		return this->removeRaidBoss(bid);
	}

	bool REventManager::removeRaidBoss(mUniqueID bid)
	{
		if (uidtoname.find(bid) == uidtoname.end())
			return false;
		std::string name = uidtoname[bid];
		//record
		cacheinfo info(cacheinfo::cachetype::remove);
		info.bid = bid; info.nameorupdatestr = name;
		this->cachelist.emplace(info);
		//index update first
		nametouid.erase(name);
		uidtoname.erase(bid);
		return true;
	}

	bool REventManager::hasRaidBossinreal(mUniqueID id)
	{
		return mlist.find(id) != mlist.end();
	}

	bool REventManager::updatetitle(std::string const& name, std::string const& title)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		//record
		cacheinfo info(cacheinfo::cachetype::updatetitle);
		info.bid = bid; info.nameorupdatestr = name;
		info.title = title;
		this->cachelist.emplace(info);
		return true;
	}

	bool REventManager::updatepercentage(std::string const& name, float percentage)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		return this->updatepercentage(bid, percentage);
	}
	bool REventManager::updatepercentage(mUniqueID bid, float percentage)
	{
		if (uidtoname.find(bid) == uidtoname.end())
			return false;
		std::string name = uidtoname[bid];
		//record
		cacheinfo info(cacheinfo::cachetype::updatepercertage);
		info.bid = bid; info.nameorupdatestr = name;
		info.percentage = percentage;
		this->cachelist.emplace(info);
		return true;
	}
	bool REventManager::updatecolor(std::string const& name, BossEventColour color)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		//record
		cacheinfo info(cacheinfo::cachetype::updatecolor);
		info.bid = bid; info.nameorupdatestr = name;
		info.color = color; 
		this->cachelist.emplace(info);

		return true;
	}

	bool REventManager::updateround(std::string const& name, int round)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		//record
		cacheinfo info(cacheinfo::cachetype::updatenowround);
		info.bid = bid; info.nameorupdatestr = name;
		info.round = round;
		this->cachelist.emplace(info);
		return true;
	}


	std::string REventManager::getlist()
	{
		std::string ret;
		ret += "runtimesize:"+std::to_string(this->mlist.size());
		for (auto& th : this->mlist) {
			auto traceunit = this->mTraceEntityManager.gettrackunitptr(th.first);
			ret += "==============\n" + std::to_string(th.first) + ":" + th.second.getshowtitle() +",color:"+std::to_string((int)th.second.getcolor()) ;
			ret += +"\nfrom " + th.second.getAABB().min.toBlockPos().toString() + " to " + th.second.getAABB().max.toBlockPos().toString();
			if (traceunit) {
				ret += "\nbindround:" + std::to_string(traceunit->bindround) + ",shouldowper:" + std::to_string(traceunit->getshowpercentage())+",entites:\n[";
				for (auto& acid : traceunit->mytracedentity) {
					auto ac = Global<Level>->fetchEntity(acid.id, 0);
					if (ac) {
						ret += ac->getNameTag() + "(" + ac->getTypeName() + ")";
					}
					else
						ret += std::to_string(acid.id);
					ret += ",";
				}
				ret += "]";
			}
		}
		return ret;
	}

	bool REventManager::bindentities(std::string const& name, std::vector<ActorUniqueID> const& vec, bool enablesoundtrace,int round)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		if (!hasRaidBossinreal(bid))
			return false;
		//record
		if(round==-1)
			round = this->mlist[bid].getroundnow();
		//record
		cacheinfo info(cacheinfo::cachetype::bindentities);
		info.bid = bid; info.nameorupdatestr = name;
		info.round = round;
		info.entites = vec;
		info.enablesoundtrace = enablesoundtrace;
		this->cachelist.emplace(info);
		return true;
	}

	bool REventManager::removebindentities(std::string const& name)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		if (this->mTraceEntityManager.hastraceunit(bid)) {
			//record
			cacheinfo info(cacheinfo::cachetype::removebindentities);
			info.bid = bid;
			this->cachelist.emplace(info);
			return true;
		}
		return false;
	}

	bool REventManager::removebindentities(mUniqueID bid)
	{
		if (this->mTraceEntityManager.hastraceunit(bid)) {
			//record
			cacheinfo info(cacheinfo::cachetype::removebindentities);
			info.bid = bid;
			this->cachelist.emplace(info);
			return true;
		}
		return false;
	}

	void REventManager::onmobhurt(mUniqueID id)
	{
		auto bossid = this->mTraceEntityManager.getbossidfromactorid(id);
		if (bossid!=-1) {
			//record
			cacheinfo info(cacheinfo::cachetype::updatebindentities);
			info.bid = bossid; 
			info.playeruid = id;
			this->cachelist.emplace(info);
		}
	}
	void REventManager::onmobdie(mUniqueID id) {
		auto bossid = this->mTraceEntityManager.getbossidfromactorid(id);
		if (bossid != -1) {
			//record
			cacheinfo info(cacheinfo::cachetype::ondiebindentities);
			info.bid = bossid;
			info.playeruid = id;
			this->cachelist.emplace(info);
		}
	}
	void REventManager::onactordeswpawn(mUniqueID id) {
		auto bossid = this->mTraceEntityManager.getbossidfromactorid(id);
		if (bossid != -1) {
			//record
			cacheinfo info(cacheinfo::cachetype::ondiebindentities);
			info.bid = bossid;
			info.playeruid = id;
			this->cachelist.emplace(info);
		}
	}
	bool REventManager::addplaysoundsforplayers(mUniqueID bossid, std::string const& soundname){
		if (uidtoname.find(bossid) == uidtoname.end())
			return false;
		//record
		cacheinfo info(cacheinfo::cachetype::playsoundforplayers);
		info.bid = bossid;
		info.soundname = soundname;
		this->cachelist.emplace(info);
		return true;
	}
	REventManager& manager()
	{
		static REventManager mymanager;
		//init
		return mymanager;
	}
	//for CRentitytracehelper
	bool CRentitytracehelper::trackunit::addentity(mUniqueID id)
	{
		if (this->mytracedentity.find(id) != this->mytracedentity.end())
			return false;
		auto ac=Global<Level>->fetchEntity(id, 0);
		if (!ac)
			return false;
		this->nowhealth+=ac->getHealth();
		this->maxhealth += ac->getMaxHealth();
		this->mytracedentity.emplace(id, ac->getHealth(),ac->getMaxHealth());
		ischanged = true;
		return true;
	}

	bool CRentitytracehelper::trackunit::removeentity(mUniqueID id)
	{
		if (this->mytracedentity.find(id) == this->mytracedentity.end())
			return false;
		auto ac = Global<Level>->fetchEntity(id, 0);
		if (!ac)
			return false;
		this->nowhealth -= ac->getHealth();
		this->maxhealth -= ac->getMaxHealth();
		this->mytracedentity.erase(id);
		ischanged = true;
		return true;
	}

	bool CRentitytracehelper::trackunit::setentities(std::vector<ActorUniqueID> const& vec)
	{
		this->resetentitiesdata();
		for (auto &sd : vec) {
			auto ac = Global<Level>->fetchEntity(sd, 0);
			if (!ac)
				continue;
			this->mytracedentity.emplace(sd, ac->getHealth(), ac->getMaxHealth());
			this->nowhealth += ac->getHealth();
			this->maxhealth += ac->getMaxHealth();
		}
		ischanged = true;
		return true;
	}

	float CRentitytracehelper::trackunit::getshowpercentage()
	{
		return this->nowhealth/this->maxhealth;
	}

	void CRentitytracehelper::trackunit::resetentitiesdata()
	{
		this->nowhealth = this->maxhealth = 0;
		this->mytracedentity.clear();
	}

	void CRentitytracehelper::trackunit::init(mUniqueID bossid,int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack)
	{
		isinited = true;
		this->mbinduid = bossid;
		this->bindround = bindround;
		this->enablehelpsoundtrack = enabelhelpsoundtrack;
		this->setentities(vec);
		ischanged = true;
	}
	CRentitytracehelper::trackunit* CRentitytracehelper::gettrackunitptr(mUniqueID bossid)
	{
		if (hastraceunit(bossid))
			return &this->mbossidlist[bossid];
		return NULL;
	}
	mUniqueID CRentitytracehelper::getbossidfromactorid(mUniqueID actoruid)
	{
		if (hasentity(actoruid))
			return this->ActorUidtoBossUid[actoruid];
		return -1;
	}
	bool CRentitytracehelper::hasentity(mUniqueID actoruid)
	{
		return (this->ActorUidtoBossUid.find(actoruid) != this->ActorUidtoBossUid.end());
	}
	bool CRentitytracehelper::hastraceunit(mUniqueID bossid)
	{
		//checkunit
		return (this->mbossidlist.find(bossid) != this->mbossidlist.end());
	}
	bool CRentitytracehelper::addnewentity(mUniqueID bossid, mUniqueID actoruid)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) != this->mbossidlist.end())
			return false;
		//checkindex
		if (this->ActorUidtoBossUid.find(actoruid) != this->ActorUidtoBossUid.end())
			return false;
		auto ac = Global<Level>->fetchEntity(actoruid, 0);
		if (!ac)
			return false;
		auto& refunit = this->mbossidlist[bossid];
		//it should not be here so wo dont check
		refunit.nowhealth += ac->getHealth();
		refunit.maxhealth += ac->getMaxHealth();
		refunit.mytracedentity.emplace(actoruid, ac->getHealth(), ac->getMaxHealth());
		this->ActorUidtoBossUid.emplace(actoruid, bossid);
		return true;
	}
	bool CRentitytracehelper::removeoldentity(mUniqueID bossid, mUniqueID actoruid)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) == this->mbossidlist.end())
			return false;
		//checkindex
		if (this->ActorUidtoBossUid.find(actoruid) == this->ActorUidtoBossUid.end())
			return false;
		auto ac = Global<Level>->fetchEntity(actoruid, 0);
		if (!ac)
			return false;
		auto& refunit = this->mbossidlist[bossid];
		//it should be here so wo dont check
		refunit.nowhealth -= ac->getHealth();
		refunit.maxhealth -= ac->getMaxHealth();
		refunit.mytracedentity.erase(actoruid);
		this->ActorUidtoBossUid.erase(actoruid);

		return true;
	}
	bool CRentitytracehelper::updateentity(mUniqueID bossid, mUniqueID actoruid)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) == this->mbossidlist.end())
			return false;
		//checkindex
		if (this->ActorUidtoBossUid.find(actoruid) == this->ActorUidtoBossUid.end())
			return false;
		auto ac = Global<Level>->fetchEntity(actoruid, 0);
		if (!ac)
			return false;
		auto& refunit = this->mbossidlist[bossid];
		auto& refactor = const_cast<mtentity&>(* refunit.mytracedentity.find(actoruid));
		//it should be here so wo dont check
		auto rawhl = refactor.nowhealth;
		auto rawmaxhl = refactor.maxhealth;
		//del raw
		refunit.nowhealth -= rawhl;
		refunit.maxhealth -= rawmaxhl;
		//update
		refactor.nowhealth = ac->getHealth();
		refactor.maxhealth = ac->getMaxHealth();
		//add
		refunit.nowhealth += refactor.nowhealth;
		refunit.maxhealth += refactor.maxhealth;
		refunit.ischanged = true;
		return true;
	}
	bool CRentitytracehelper::updateentitywithdeath(mUniqueID bossid, mUniqueID actoruid)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) == this->mbossidlist.end())
			return false;
		//checkindex
		if (this->ActorUidtoBossUid.find(actoruid) == this->ActorUidtoBossUid.end())
			return false;
		auto& refunit = this->mbossidlist[bossid];
		auto& refactor = const_cast<mtentity&>(*refunit.mytracedentity.find(actoruid));
		//it should be here so wo dont check
		//del raw
		refunit.nowhealth -= refactor.nowhealth;
		//update
		refactor.nowhealth = 0;
		refunit.ischanged = true;
		return true;
	}
	bool CRentitytracehelper::setentities(mUniqueID bossid, std::vector<ActorUniqueID> const& vec)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) == this->mbossidlist.end())
			return false;
		auto& refunit = this->mbossidlist[bossid];
		//clearindexs
		for (auto& oldid : refunit.mytracedentity) {
			this->ActorUidtoBossUid.erase(oldid.id);
		}
		//cleardata
		refunit.resetentitiesdata();
		//add start
		for (mUniqueID it : vec) {
			auto ac = Global<Level>->fetchEntity(it, 0);
			if (!ac)
				continue;
			this->ActorUidtoBossUid.emplace(it, bossid);
			refunit.mytracedentity.emplace(it, ac->getHealth(), ac->getMaxHealth());
			refunit.nowhealth += ac->getHealth();
			refunit.maxhealth += ac->getMaxHealth();
		}
		return true;
	}
	bool CRentitytracehelper::addnewtraceunit(mUniqueID bossid, int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) != this->mbossidlist.end())//makesureonly
			return false;
		//checkindex
		for (auto& it : vec) {// makesure only
			if (this->ActorUidtoBossUid.find(it) != this->ActorUidtoBossUid.end())
				return false;
		}
		//add start
		for (mUniqueID it : vec) {
			this->ActorUidtoBossUid.emplace(it,bossid);
		}
		CRentitytracehelper::trackunit munit; 
		munit.init(bossid, bindround, vec, enabelhelpsoundtrack);
		this->mbossidlist.emplace(bossid, std::move(munit));
		return true;
	}

	bool CRentitytracehelper::removetraceunit(mUniqueID bossid)
	{
		//checkunit
		if (this->mbossidlist.find(bossid) == this->mbossidlist.end())
			return false;
		//clearindex
		for (auto& it : this->mbossidlist[bossid].mytracedentity) {
			this->ActorUidtoBossUid.erase(it.id);
		}
		this->mbossidlist.erase(bossid);
		return true;
	}




}
