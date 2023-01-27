#include "pch.h"
#include "CustomRaidmanager.hpp"
#include <mc/Level.hpp>
#include <mc/CommandRegistry.hpp>
#include <ScheduleAPI.h>
#include <mc/Dimension.hpp>
#include <mc/PlaySoundPacket.hpp>
#include <mc/Spawner.hpp>
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
	bool REventManager::playsoundsforplayers(mUniqueID bossid, std::string const& soundname, Vec3 const& v)
	{
		if (hasRaidBossinreal(bossid)) {
			auto list = mlist[bossid].getRegisteredPlayerList();
			for (auto &acid : list) {
				auto PL = (Player*)Global<Level>->fetchEntity(acid, 0);
				if (PL)
				{
					if(v==Vec3::ZERO)
						PL->sendPlaySoundPacket(soundname, PL->getPos(), 1, 1);
					else
						PL->sendPlaySoundPacket(soundname, v, 1, 1);
				}
			}
			return true;

		}
		return false;
	}
	bool REventManager::broadcastsoundsatvec(mUniqueID bossid, std::string const& soundname, std::vector<Vec3> const& locations)
	{
		if (hasRaidBossinreal(bossid)) {
			auto list = mlist[bossid].getRegisteredPlayerList();
			for (auto& acid : list) {
				auto PL = (Player*)Global<Level>->fetchEntity(acid, 0);
				if (PL)
				{
					float distance = 99999999;const Vec3* best = NULL; auto pos = PL->getPos();
					for (auto& ivc : locations) {
						if (ivc.distanceTo(pos) < distance) {
							distance = ivc.distanceTo(pos);
							best = &ivc;
						}
					}
					if (best)
					{
						//std::cout << "distance:" << distance<< std::endl;
						if (distance < 3)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 2.0, 1);
						else if (distance < 5)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 1.5, 1);
						else if (distance < 16)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 1.0, 1);
						else if (distance < 25)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.8, 1);
						else if (distance < 36)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.6, 1);
						else if (distance < 49)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.3, 1);
						else if (distance < 64)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.15, 1);
						else if (distance < 81)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.05, 1);
						else if (distance < 256)
							PL->sendPlaySoundPacket(soundname, PL->getPos(), 0.01, 1);
					}
				}
			}
			return true;

		}
		return false;
	}
	bool REventManager::try_createandbindfromfile(mUniqueID bossid, std::string const& filename, bool enablesoundtrace, Vec3 const& spawnpos, int round)
	{

		if (hasRaidBossinreal(bossid)) {

			if (this->mTraceEntityManager.hastraceunit(bossid)) {
				this->mTraceEntityManager.removetraceunit(bossid);
			}
			int dimid = this->mlist[bossid].getdimid();
			BlockPos centerpos = this->mlist[bossid].getcenterpos();
			bool issplit = true; bool aboutkilledentity = false;
			//gen in mainthread
			auto uidset = Global<Level>->getSpawner().spawnMobGroup(*Global<Level>->getBlockSource(dimid), filename, spawnpos, issplit, aboutkilledentity, [filename, centerpos](Mob& s) {
				s.setNameTag(filename);//HardcodedSpawningArea
				//mydefined::setmoveto(&s, centerpos.toVec3(), 1);
				mydefined::sethometo(&s, centerpos.toVec3(), 1);
				return;
				});
			if (round == -1)
				round = this->mlist[bossid].getroundnow();
			this->mTraceEntityManager.addnewtraceunit(bossid, round,std::vector<ActorUniqueID>(uidset.begin(), uidset.end()), enablesoundtrace);
			if (this->mTraceEntityManager.hastraceunit(bossid)) {
				auto ptr = this->mTraceEntityManager.gettrackunitptr(bossid);
				ptr->enabletraceevent = true;
				ptr->traceevent = [this, bossid](Mob* s) {//use center outside it will be not changable
					BlockPos centerpos;
					if (this->hasRaidBossinreal(bossid))
					{
						centerpos = this->mlist[bossid].getcenterpos();
						mydefined::sethometo(s, centerpos.toVec3(), 1);
					}
					//std::cout << "willsetedcenterpos:" << centerpos.toString() << std::endl;
					//mydefined::setmoveto(s, centerpos.toVec3(), 1);
				};
			}
			return true;
		}
		return false;
	}
	bool REventManager::try_tracedmobexecute(mUniqueID bossid, std::function<void(Mob*)> const& func)
	{
		if (hasRaidBossinreal(bossid)&& this->mTraceEntityManager.hastraceunit(bossid)) {
			auto ptr=this->mTraceEntityManager.gettrackunitptr(bossid);
			for (auto& enti : ptr->mytracedentity) {
				if (enti.nowhealth <= 0)
					continue;
				//query only
				auto ac = Global<Level>->fetchEntity(enti.id, 0);
				if (!ac)
					continue;
				func((Mob*)ac);
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
						if (hasRaidBossinreal(ks.bid)) {
							if (this->mTraceEntityManager.hastraceunit(ks.bid)) {
								this->mTraceEntityManager.removetraceunit(ks.bid);
							}
							if (ks.round == -1)
								ks.round = this->mlist[ks.bid].getroundnow();
							this->mTraceEntityManager.addnewtraceunit(ks.bid, ks.round, ks.entites, ks.enablesoundtrace);
						}
						break;
					case cacheinfo::cachetype::removebindentities://remove not check
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
					case cacheinfo::cachetype::broadcastsoundatlocations:
						broadcastsoundsatvec(ks.bid, ks.soundname, ks.locations);
						break;
					case cacheinfo::cachetype::createbindfromfile:
						try_createandbindfromfile(std::get<mUniqueID>(ks.params["bid"]), std::get<std::string>(ks.params["filename"]), std::get<bool>(ks.params["enablesoundtrace"]), std::get<Vec3>(ks.params["spawnpos"]), std::get<int>(ks.params["round"]));
						break;
					case cacheinfo::cachetype::foreachtracedmob:
						try_tracedmobexecute(std::get<mUniqueID>(ks.params["bid"]), std::get<std::function<void(Mob*)>>(ks.params["foreachmob"]));
						break;
					case cacheinfo::cachetype::updatecenterpos:
						if (hasRaidBossinreal(std::get<mUniqueID>(ks.params["bid"])))
							this->mlist[std::get<mUniqueID>(ks.params["bid"])].setcenterpos(std::get<BlockPos>(ks.params["centerpos"]));
						break;
					default:
						break;
					}
					this->cachelist.pop();
				}
			}

			catch (const std::bad_variant_access& e) { // in case a wrong type/index is used
				logger.error("error at REventManager::tick write for{},try to release lock...", e.what());
			}
			catch (std::runtime_error const& e) {
				logger.error("error at REventManager::tick write for{},try to remove top task and release lock...", e.what());
				this->cachelist.pop();
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
								if (traceunit->ticks<=0) {
									//delay to play tracesound
									if (traceunit->enablehelpsoundtrack) {
										std::vector<Vec3> loc;
										for (auto& kt : traceunit->mytracedentity) {
											if (kt.nowhealth <= 0)
												continue;
											//query only
											auto ac = Global<Level>->fetchEntity(kt.id, 0);
											if (!ac)
												continue;
											loc.push_back(ac->getPos());
										}
										this->addplaysoundatlocations(bossid, traceunit->helptracesound, loc);
									}
									if (traceunit->enabletraceevent) {
										this->addtracedmobexecute(bossid, traceunit->traceevent);
									}
									traceunit->ticks = 300;
								}
								//delay to play endsound
								if (ii.second.gethealthPercentage()==0) {
									this->addplaysoundsforplayers(bossid, traceunit->endtracesound);
								}
							}
							traceunit->ticks-=1;
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
	bool REventManager::updatecenterpos(std::string const& name, BlockPos const& centerpos)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		//record
		cacheinfo info(cacheinfo::cachetype::updatecenterpos);
		info.params["centerpos"] = centerpos;
		info.params["bid"] = bid;
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
					if (acid.nowhealth == 0) {
						ret += "[DEAD]";
					}
					else {
						auto ac = Global<Level>->fetchEntity(acid.id, 0);
						if (ac) {
							ret += ac->getNameTag() + "(" + ac->getTypeName() + ")";
						}
						else
							ret += std::to_string(acid.id);
					}
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
		cacheinfo info(cacheinfo::cachetype::bindentities);
		info.bid = bid; info.nameorupdatestr = name;
		info.round = round;
		info.entites = vec;
		info.enablesoundtrace = enablesoundtrace;
		this->cachelist.emplace(info);
		return true;
	}

	bool REventManager::addcreatebindfromfile(std::string const& name, std::string const& filename, bool enablesoundtrace, Vec3 const& spawnpos, int round)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		if (!hasRaidBossinreal(bid))
			return false;
		//record
		cacheinfo info(cacheinfo::cachetype::createbindfromfile);
		info.params["bid"] = bid;
		info.params["filename"] = filename;
		info.params["enablesoundtrace"] = enablesoundtrace;
		info.params["spawnpos"] = spawnpos;
		info.params["round"] = round;
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
	void REventManager::onreloadcomponent(mUniqueID id)
	{
		auto bossid = this->mTraceEntityManager.getbossidfromactorid(id);
		if (bossid != -1) {
			//record
			auto mob = (Mob*)Global<Level>->fetchEntity(id, 0);
			if(mob)
			this->mTraceEntityManager.gettrackunitptr(bossid)->traceevent(mob);
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
	bool REventManager::addplaysoundatlocations(mUniqueID bossid, std::string const& soundname, std::vector<Vec3> const& vecs) {
		if (uidtoname.find(bossid) == uidtoname.end())
			return false;
		//record
		cacheinfo info(cacheinfo::cachetype::broadcastsoundatlocations);
		info.bid = bossid;
		info.soundname = soundname;
		info.locations = vecs;
		this->cachelist.emplace(info);
		return true;
	}
	bool REventManager::addtracedmobexecute(mUniqueID bid, std::function<void(Mob*)> const& func)
	{
		if (uidtoname.find(bid) == uidtoname.end())
			return false;
		if (this->mTraceEntityManager.hastraceunit(bid)) {
			//record
			cacheinfo info(cacheinfo::cachetype::foreachtracedmob);
			info.params["bid"] = bid;
			info.params["foreachmob"] = func;
			this->cachelist.emplace(info);
			return true;
		}
		return false;
	}
	bool REventManager::addtracedmobexecute(std::string const& name, std::function<void(Mob*)> const& func)
	{
		if (nametouid.find(name) == nametouid.end())
			return false;
		mUniqueID bid = nametouid[name];
		return addtracedmobexecute(bid,func);
	}
	REventManager& manager()
	{
		static REventManager mymanager;
		//init
		return mymanager;
	}
}
