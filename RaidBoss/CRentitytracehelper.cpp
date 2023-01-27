#include "pch.h"
#include "CRentitytracehelper.h"
#include <mc/Level.hpp>

namespace REvent {
	//for CRentitytracehelper
	bool CRentitytracehelper::trackunit::addentity(mUniqueID id)
	{
		if (this->mytracedentity.find(id) != this->mytracedentity.end())
			return false;
		auto ac = Global<Level>->fetchEntity(id, 0);
		if (!ac)
			return false;
		this->nowhealth += ac->getHealth();
		this->maxhealth += ac->getMaxHealth();
		this->mytracedentity.emplace(id, ac->getHealth(), ac->getMaxHealth());
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
		for (auto& sd : vec) {
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
		return this->nowhealth / this->maxhealth;
	}

	void CRentitytracehelper::trackunit::resetentitiesdata()
	{
		this->nowhealth = this->maxhealth = 0;
		this->mytracedentity.clear();
	}

	void CRentitytracehelper::trackunit::init(mUniqueID bossid, int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack)
	{
		isinited = true;
		this->mbinduid = bossid;
		this->bindround = bindround;
		this->enablehelpsoundtrack = enabelhelpsoundtrack;
		this->setentities(vec);
		//this->traceevent =[](Mob* mob) {
		//	//mob->setBlockTarget();
		//	return;
		//};
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
		auto& refactor = const_cast<mtentity&>(*refunit.mytracedentity.find(actoruid));
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
			this->ActorUidtoBossUid.emplace(it, bossid);
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