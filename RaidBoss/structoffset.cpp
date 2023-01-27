#include "pch.h"
#include "structoffset.hpp"
#include <mc/GoalSelectorComponent.hpp>
#include <mc/Goal.hpp>
#include <mc/ActorGoalFactory.hpp>
#include <mc/MoveTowardsHomeRestrictionDefinition.hpp>
#include <mc/HomeComponent.hpp>
BEextradata* BEextradata::fromBossEventPacketptr(BossEventPacket* a1)
{
	return (BEextradata*)((__int64)a1 + 56);
}

BEextradata* BEextradata::fromBossEventPacketptr(Packet* a1)
{
	return (BEextradata*)((__int64)a1 + 56);
}

namespace mydefined
{
	void sethometo(Mob* ss, Vec3 const& pos, int speed) {//byAI
		//std::shared_ptr<> (*mksptr)(void*)
		using ActorGoalDefinition_VMoveTowardsHomeRestrictionDefinition = __int64;
		std::shared_ptr<ActorGoalDefinition_VMoveTowardsHomeRestrictionDefinition>(*mk)()=NULL;
		void (*_create)(ActorGoalDefinition_VMoveTowardsHomeRestrictionDefinition*, EntityContext*) = NULL;
		void (*_init)(ActorGoalDefinition_VMoveTowardsHomeRestrictionDefinition*, EntityContext*) = NULL;
		unsigned short (*getruntimeid)() = NULL;
		*((void**)&mk) = SYM("??$make_shared@V?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@$$V@std@@YA?AV?$shared_ptr@V?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@@0@XZ");
		*((void**)&_create) = SYM("?_create@?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@UEAAXAEAVEntityContext@@@Z");
		*((void**)&_init) = SYM("?_initialize@?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@UEAAXAEAVEntityContext@@@Z");
		*((void**)&getruntimeid) = SYM("?getRuntimeTypeId@?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@UEBAGXZ");

		Mob& s = *ss;
		using entt_$basic_registry = void;
		entt_$basic_registry* mybase = (entt_$basic_registry*)*((__int64*)&s + 1);
		int type = *((DWORD*)&s + 4);
		//??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z
		GoalSelectorComponent* (*rv)(entt_$basic_registry*, int*) = NULL;
		*((void**)&rv) = SYM("??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z");
		auto goalc = (*rv)(mybase, &type);
		auto rid = getruntimeid();
		auto finded = goalc->_findGoalByKey(rid);
		auto end = goalc->getGoalMap().end();
#ifdef debugmode
		std::cout << finded._Ptr << "," << end._Ptr << std::endl;
#endif
		//auto end = *(__int64*)((__int64)goalc + 8);
		if (finded != end) {
#ifdef debugmode
			std::cout << "find:" << finded->first << "pri:" << (finded->second).getPriority()<<",trurepri" << *(DWORD*)((__int64)finded._Ptr + 16) << std::endl;
#endif
		}
		else {//create
			auto basemk = mk();
			_create(basemk.get(), getEntityContext(ss));
			_init(basemk.get(), getEntityContext(ss));
		}
		finded = goalc->_findGoalByKey(rid);
		end = goalc->getGoalMap().end();
		//setspeed
		if (finded != end) {
			*(DWORD*)((__int64)finded._Ptr + 16) = 6;//pri
			auto priorisedgoal = (PrioritizedGoal*)((__int64)finded._Ptr + 8);
			auto goal = *(Goal**)((__int64)finded._Ptr + 8);
			//*(BYTE*)((__int64)finded._Ptr + 20) = 0;//setused
			//*(BYTE*)((__int64)finded._Ptr + 21) = 0;//settostart
			*((float*)goal + 16) = speed;//from MoveTowardsRestrictionGoal::start
			*(int*)((__int64)goal + 8) = 15;//controlflag
			goalc->stopNonTargetedGoals();
#ifdef debugmode
			std::cout << "createpri:"<<priorisedgoal->getPriority()<<"used:"<< *(BYTE*)((__int64)finded._Ptr + 20)<<"tostart:"<< *(BYTE*)((__int64)finded._Ptr + 21) << std::endl;
#endif // debugmode
		}
		using EntityComponentDefinition_HomeDefinition_HomeComponent = __int64;
		std::shared_ptr<EntityComponentDefinition_HomeDefinition_HomeComponent>(*mkhb)() = NULL;
		void (*_createhb)(EntityComponentDefinition_HomeDefinition_HomeComponent*, EntityContext*) = NULL;
		void (*_inithb)(EntityComponentDefinition_HomeDefinition_HomeComponent*, EntityContext*) = NULL;
		bool (*hascompl)(EntityContext*) = NULL;//EntityContextBase
		HomeComponent* (*trygethompl)(Actor*) = NULL;//EntityContextBase
		*((void**)&mkhb) = SYM("??$make_shared@V?$EntityComponentDefinition@VHomeDefinition@@VHomeComponent@@@@$$V@std@@YA?AV?$shared_ptr@V?$EntityComponentDefinition@VHomeDefinition@@VHomeComponent@@@@@0@XZ");
		*((void**)&_createhb) = SYM("?_create@?$EntityComponentDefinition@VHomeDefinition@@VHomeComponent@@@@UEAAXAEAVEntityContext@@@Z");
		*((void**)&_inithb) = SYM("?_initialize@?$EntityComponentDefinition@VHomeDefinition@@VHomeComponent@@@@UEAAXAEAVEntityContext@@@Z");
		*((void**)&hascompl) = SYM("??$hasComponent@VHomeComponent@@@EntityContextBase@@QEBA_NXZ");
		*((void**)&trygethompl) = SYM("??$tryGetComponent@VHomeComponent@@@Actor@@QEAAPEAVHomeComponent@@XZ");
		if (!hascompl(getEntityContext(ss))) {
			auto basemkhb = mkhb();
			_createhb(basemkhb.get(), getEntityContext(ss));
			_inithb(basemkhb.get(), getEntityContext(ss));
		}
		else {
#ifdef debugmode
			std::cout << "now homepos:" << trygethompl(ss)->getHomePos().toString() << "radius:" << trygethompl(ss)->getRestrictionRadius() << std::endl;
#endif
		}

		auto homecompl = trygethompl(ss);
		homecompl->setHome(pos, ss->getDimensionId());
		*((int*)homecompl) = 8;
		*((int*)homecompl + 1) = 64;
		//MoveTowardsHomeRestriction
	}
	EntityContext* getEntityContext(Actor* ac)
	{

		return (EntityContext*)((char*)ac + 8);
	}
	int getEntitytypeId(Actor* ac)
	{
		return *((DWORD*)ac + 4);
	}
	void setmovetowater(Mob* ss, Vec3 const& pos, int speed) {

		Mob& s = *ss;
		using entt_$basic_registry = void;
		entt_$basic_registry* mybase = (entt_$basic_registry*)*((__int64*)&s + 1);
		int type = *((DWORD*)&s + 4);
		//??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z
		GoalSelectorComponent* (*rv)(entt_$basic_registry*, int*) = NULL;
		*((void**)&rv) = SYM("??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z");
		auto goalc = (*rv)(mybase, &type);
		bool hasdefgoal = false;
		auto ktid = *(short*)dlsym_real("?id@?1???$type_id@VGoal@@VMoveToWaterGoal@@@@YA?AV?$typeid_t@VGoal@@@@XZ@4V1@A");
		auto tssidinited= *(int*)dlsym_real("?$TSS0@?1???$type_id@VGoal@@VMoveToWaterGoal@@@@YA?AV?$typeid_t@VGoal@@@@XZ@4HA");
		if (tssidinited!=0)
		{
			auto finded = goalc->_findGoalByKey(ktid);
			auto end = goalc->getGoalMap().end();
			std::cout << finded._Ptr << "," << end._Ptr << std::endl;
			//auto end = *(__int64*)((__int64)goalc + 8);
			if (finded != end) {
				std::cout << "find:" << finded->first << "pri:" << (finded->second).getPriority() << std::endl;
				hasdefgoal = true;
			}
		}
		if(!hasdefgoal) {
			char* newmen = new char[2752i64];
			GoalDefinition* tr = new(newmen) GoalDefinition();
			*(std::string*)((__int64)tr + 0) = "minecraft:behavior.move_to_water";
			std::shared_ptr<GoalDefinition> fakeptr(tr);
			Json::Value q; q["priority"] = 1; 
			q["goal_radius"] = 1.50; 
			q["search_height"] = 65; 
			q["search_count"] = 0;
			q["search_range"] = 300; Json::Value* qptr = &q;
			ConstDeserializeDataParams* cdptr = (ConstDeserializeDataParams*)&qptr;
			std::cout << fakeptr->parse(*cdptr, 0) << std::endl;
			auto goals = fakeptr->CreateGoal(s, *fakeptr);

			*((bool*)ss + 2016) = 1;
			goalc->stopNonTargetedGoals();
			//goalc->clearNonTargetedGoals();

			goalc->addGoal(4, std::move(goals));
			*((bool*)&s + 2016) = 0;
		}
	}

	void setmoveto(Mob* s, Vec3 const& pos, int speed)
	{
		if (!s)
			return;
		int type = *((int*)s + 4);
		using entt_$basic_registry = void;
		//from PathNavigation::moveTo(__int64 a1, ResourcePackRepository *a2, Actor *a3, void **a4, float a5)
		//NavigationComponent::setSpeed(a2, a5);
		//NavigationComponent::updateLastStuckCheck(a2, a3);
		//NavigationComponent::setHasEndPathRadius(a2, 0);
		//to learn PathNavigation_vtbl better https://redbeanw44602.github.io/mcstructure/1.16.201/structure/P.html#pathnavigation-vtbl

		void* mybase = (void*)*(__int64*)((char*)s + 8);
		//??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z
		GoalSelectorComponent* (*rv)(void*,int*) = NULL;
		*((void**)&rv) = SYM("??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z");
		auto goalc = (*rv)(mybase ,&type);
		goalc->stopAllGoals();
		//goalc->_findGoalByKey();
		entt_$basic_registry* mydeepba = (entt_$basic_registry*)**(__int64**)((char*)s + 8);
		NavigationComponent* (*rv2)(entt_$basic_registry*, int*) = NULL;
		*((void**)&rv2) = SYM("??$try_get@VNavigationComponent@@@?$basic_registry@VEntityId@@V?$allocator@VEntityId@@@std@@@entt@@QEBA?A_PVEntityId@@@Z");
		auto nagc = (*rv2)(mydeepba, &type);
		//MoveControlComponent* (*rv3)(Actor*) = NULL;
		//*((void**)&rv3) = SYM("??$tryGetComponent@VMoveControlComponent@@@Actor@@QEAAPEAVMoveControlComponent@@XZ");
		//auto movtc = (*rv3)(s);
		//if (movtc) {
		//	movtc->setWantedPosition(*s, pos, speed);
		//}

		if (!nagc) {
			std::cout << "cant find nagc" << std::endl;
		}
		else {
			nagc->stop(*s);
			//nagc->setPath(std::move(nagc->createPath(s, PL->getPos())));
			nagc->moveTo(*s, pos, speed);//inputspeed
			//nagc->getMaxDistance()
			//nagc->update(s);
		}
	}

}
/* can creat AI from define .. waitting to apply..
	Event::PlayerUseItemOnEvent::subscribe([](Event::PlayerUseItemOnEvent const& ev) {
		auto PL = ev.mPlayer;
		if (ev.mItemStack->isNull())
			return true;
		auto uidset=Global<Level>->getSpawner().spawnMobGroup(*PL->getBlockSource(), "minecraft:raid_group_6", PL->getPos(), true, false, [PL](Mob& s) {
			s.setNameTag("hahaha");
			//char* def[2752i64];

			char* newmen = new char[2752i64];
			GoalDefinition* tr = new(newmen) GoalDefinition();
			*(std::string*)((__int64)tr + 0) = "minecraft:behavior.move_to_water";
			std::shared_ptr<GoalDefinition> fakeptr(tr);
			Json::Value q; q["priority"] = 1; q["goal_radius"] = 1.50; q["search_height"] = 5; q["search_range"] = 20; Json::Value* qptr = &q;
			ConstDeserializeDataParams* cdptr = (ConstDeserializeDataParams*) & qptr;
			std::cout << fakeptr->parse(*cdptr, 0) << std::endl;
			auto goals = fakeptr->CreateGoal(s, *fakeptr);
			EntityRegistryBase* mybase = (EntityRegistryBase*) * ((__int64*)&s + 1);
			int type = *((DWORD*)&s + 4);
			//??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z
			GoalSelectorComponent* (EntityRegistryBase:: * rv)(int* ) = NULL;
			*((void**)&rv) = SYM("??$_getOrAddComponent@VGoalSelectorComponent@@@EntityRegistryBase@@IEAAAEAVGoalSelectorComponent@@VEntityId@@@Z");
			auto goalc = (mybase->*rv)(&type);
			goalc->stopAllGoals();
			//goalc->clearAllGoals();
			* ((bool*)&s + 2016) = 0;
			//goalc->addGoal(4,std::move(goals));

			//sometimes may make actorsystem delay
			EntityRegistryBase* mydeepba = (EntityRegistryBase*)**(__int64**)((char*)&s + 8);
			NavigationComponent* (EntityRegistryBase:: * rv2)(int*) = NULL;
			*((void**)&rv2) = SYM("??$try_get@VNavigationComponent@@@?$basic_registry@VEntityId@@V?$allocator@VEntityId@@@std@@@entt@@QEBA?A_PVEntityId@@@Z");
			auto nagc = (mydeepba->*rv2)(&type);
			if (!nagc) {
				std::cout << "cant find nagc" << std::endl;
			}
			else {
				//nagc->stop(s);
				//nagc->setPath(std::move(nagc->createPath(s, PL->getPos())));
				nagc->moveTo(s, PL->getPos(),1 );//inputspeed
				//nagc->update(s);
			}
			//not add
			return;
			});
		return true;
		});
	Event::PlayerAttackEvent::subscribe([](Event::PlayerAttackEvent const& ev) {
		auto m = ev.mTarget;
		std::cout << CompoundTag::fromActor(m)->toSNBT() << std::endl;
		return true;
	});
*/
/*
  if ( __TSS0__1____type_id_VGoal__VMoveToWaterGoal____YA_AV__typeid_t_VGoal____XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 840i64) )
{
  Init_thread_header(&__TSS0__1____type_id_VGoal__VMoveToWaterGoal____YA_AV__typeid_t_VGoal____XZ_4HA);
  if ( __TSS0__1____type_id_VGoal__VMoveToWaterGoal____YA_AV__typeid_t_VGoal____XZ_4HA == -1 )
  {
	`type_id<Goal,MoveToWaterGoal>'::`2'::id = typeid_t<Goal>::count++;
	Init_thread_footer(&__TSS0__1____type_id_VGoal__VMoveToWaterGoal____YA_AV__typeid_t_VGoal____XZ_4HA);
  }
}
	  */