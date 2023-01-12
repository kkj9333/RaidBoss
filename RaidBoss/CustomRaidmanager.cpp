#include "pch.h"
#include "CustomRaidmanager.hpp"
#include <mc/Level.hpp>
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
	void REventManager::tick()
	{
		//write
		//std::lock_guard(this->writemutex);
		if (trylockwrite()) {
			checkdeadlocktime = 0;
			//writesome
			while (!this->cachelist.empty()) {
				auto& ks = this->cachelist.front();
				switch (ks.type)	
				{
				case cacheinfo::cachetype::add:
					this->mlist.try_emplace(ks.bid, CustomRaidUnit(ks.bid,ks.roundmax,ks.centerpos,ks.dimid,ks.area,ks.percentage,ks.title));
					break;
				case cacheinfo::cachetype::remove:
					this->mlist.erase(ks.bid);
					break;
				case cacheinfo::cachetype::updatetitle:
					this->mlist[ks.bid].settitle(ks.title);
					break;
				case cacheinfo::cachetype::updatepercertage:
					this->mlist[ks.bid].sethealthPercentage(ks.percentage);
					break;
				case cacheinfo::cachetype::updatecolor:
					this->mlist[ks.bid].setcolor(ks.color);
					break;
				default:
						break;
				}
				this->cachelist.pop();
			}
		}
		else {
			++checkdeadlocktime;
			if (checkdeadlocktime > 0) {
				logger.error("maybe deadlock in{}", __FUNCTION__);
			}
			return;
		}
		this->unlockwrite();
		//tick
		auto& mmlist = mlist;
		std::thread t([this,&mmlist] {
			try {
				if (this->trylockwrite()) {//if failed to lock , skip this time tick
					this->lockedbytick = true;
					for (auto& ii : mmlist) {
						ii.second.tick();
					}
				}
				else
					;//skip
				//end
				this->lockedbytick = false;
				this->unlockwrite();
			}
			catch (std::runtime_error const& e) {
				logger.error("error at REventManager::tick for{},islockedbyself:{},try to release lock...", e.what(), this->lockedbytick);
				if (this->lockedbytick)
				{
					this->lockedbytick = false;
					this->unlockwrite();
				}
			}
			catch (...) {
				logger.error("unkown error at REventManager::tick,islockedbyself:{},try to release lock...", this->lockedbytick);
				if (this->lockedbytick)
				{
					this->lockedbytick = false;
					this->unlockwrite();
				}
			}
			});
		t.detach();
	}

	void REventManager::onleft(Player* pl)
	{
		for (auto& it : mlist) {
			it.second.onLeft(pl);
		}
	}

	void REventManager::recordhandle(BossEventPacket* bep)
	{
		if (mlist.find(BEextradata::fromBossEventPacketptr(bep)->bossUniqueEntityId)!=mlist.end()) {
			mlist[BEextradata::fromBossEventPacketptr(bep)->bossUniqueEntityId].recordhandle(bep);
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
		//record
		cacheinfo info(cacheinfo::cachetype::remove);
		info.bid = bid; info.nameorupdatestr = name;
		this->cachelist.emplace(info);
		//index update first
		nametouid.erase(name);
		uidtoname.erase(bid);
		return true;
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
		info.color = color; std::cout << "updatecolor:" << std::to_string((int)color)<<std::endl;
		this->cachelist.emplace(info);

		return true;
	}

	std::string REventManager::getlist()
	{
		std::string ret;
		ret += "runtimesize:"+std::to_string(this->mlist.size());
		for (auto& th : this->mlist) {
			ret += "\n" + std::to_string(th.first) + ":" + th.second.getshowtitle() + ",percentage,from "+th.second.getAABB().min.toString()+" to "+th.second.getAABB().max.toString()+",color:"+std::to_string((int)th.second.getcolor()) + ",now:" + std::to_string(th.second.gethealthPercentage());
		}
		return ret;
	}

	REventManager& manager()
	{
		static REventManager mymanager;
		//init
		return mymanager;
	}

}
