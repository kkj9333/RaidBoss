#include "pch.h"
#include <EventAPI.h>
#include <LoggerAPI.h>
#include "Version.h"
#include <I18nAPI.h>
#include <ScheduleAPI.h>
#include <mc/Level.hpp>
#include <mc/Player.hpp>
#include "CustomRaidEvent.h"
#include <mc/PlayerListEntry.hpp>
#include "commands.hpp"
#include <mc/Mob.hpp>
#include <RemoteCallAPI.h>
#include <mc/GoalDefinition.hpp>
#include <mc/Goal.hpp>
#include <mc/Json.hpp>
#include <mc/ConstDeserializeDataParams.hpp>
#include <mc/GoalSelectorComponent.hpp>
#include <mc/EntityRegistryBase.hpp>
#include <mc/ItemStack.hpp>
#include <mc/Path.hpp>
Logger logger("CustomRaidlogger");
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z",ServerNetworkHandler* _this, NetworkIdentifier* a2, BossEventPacket* a3) {
	REvent::manager().recordhandle(a3);
	return original(_this, a2, a3);
}

THook(float,"?change@HealthAttributeDelegate@@UEAAMMMAEBVAttributeBuff@@@Z", void* _this, float a2, float a3,void* a4) {
	auto ac = *((Actor**)_this + 4);
	if (ac) {
		REvent::manager().onmobhurt(ac->getUniqueID());
	}
	return original(_this, a2, a3,a4);
}
THook(void, "?despawn@Actor@@UEAAXXZ", Actor* _this) {
	REvent::manager().onactordeswpawn(_this->getUniqueID());
	return original(_this);
}

THook(void, "?_updateComposition@Actor@@AEAAX_N@Z", Actor* _this,bool a2) {
#ifdef debugmode
	std::cout << _this->getTypeName() << " is trying to _updateComposition" << std::endl;
#endif
	original(_this,a2);
	REvent::manager().onreloadcomponent(_this->getUniqueID());
	return;
}

#ifdef debugmode
//THook(void*, "?initializeComponents@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z", Mob* _this, char InitializationMethod, void* VariantParameterList) {
//
//}
THook(bool, "?createAIGoals@Mob@@UEAA_NXZ", Mob* _this) {
#ifdef debugmode
	std::cout << _this->getTypeName() << " is trying to createAIGoals" << std::endl;
#endif
	auto kg = original(_this);
	return kg;
}
THook(void*, "?addGoal@GoalSelectorComponent@@QEAAXHV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@@Z", void* _this, int a2, Goal** a3) {
	//for (auto& t : *a3)
	//	std::cout << t.first << std::endl;
	auto goal = (Goal*) * a3;
	//*(float*)((__int64)goal + 100) = 64;
	//*(bool*)((__int64)goal + 66) = false;
	//*(bool*)((__int64)goal + 65) = false;
	//*(int*)((__int64)goal + 168) = 99;
	//std::cout << "this_thread_info:" << std::this_thread::get_id() << std::endl;

	std::cout << "addGoal for mob " << ":prioty" << a2 << ",requireflag:" << goal->getRequiredControlFlags() << ",typeid:" << goal->getTypeId() << ",findbyKEY:" << *(short*)((__int64)goal + 48) << ",goalname:" << *(std::string*)((__int64)goal + 16) << std::endl;
	return original(_this, a2, a3);
}
THook(void*, "?CreateGoal@GoalDefinition@@SA?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBU1@@Z",void* ret,Mob* a2, GoalDefinition* a3) {
	std::cout << "createGoal:" << *(std::string*)((__int64)a3 + 0) << " for " << a2->getTypeName() << ":" << a2->getNameTag() << std::endl;

	return original(ret, a2, a3);
}

THook(bool, "?parse@GoalDefinition@@QEAA_NAEBUConstDeserializeDataParams@@H@Z", GoalDefinition* _this,Json::Value** params,int pri ) {
	std::cout << "GoalDefinition:" << *(std::string*)((__int64)_this + 0) << ",pri:" << pri << "\n" << (* params)->toStyledString() << std::endl;
	return original(_this, params, pri);
}
THook(bool, "?canUseInSystem@GoalSelectorUtility@@YA_NAEAVPrioritizedGoal@@AEAV?$vector@U?$pair@GVPrioritizedGoal@@@std@@V?$allocator@U?$pair@GVPrioritizedGoal@@@std@@@2@@std@@@Z", PrioritizedGoal* _this,void* goalset) {
	auto goal = *(Goal**)_this;
	unsigned short (*getruntimeid)() = NULL;
	*((void**)&getruntimeid) = SYM("?getRuntimeTypeId@?$ActorGoalDefinition@VMoveTowardsHomeRestrictionDefinition@@VMoveTowardsHomeRestrictionGoal@@@@UEBAGXZ");
	auto w = original(_this, goalset);
	if (goal->getTypeId() == getruntimeid()) {
		std::cout << "canUseInSystem:" << w << std::endl;
		std::cout << "pri:" << _this->getPriority() << ",Tostart:" << _this->getToStart() << ",Used:" << _this->getUsed() << std::endl;
	}
	return w;
}


#endif
#include <mc/Spawner.hpp>
void PluginInit()
{
	logger.info("欢迎使用RaidBoss插件！本插件唯一作者starkc");
	logger.info("Plugin Version: {}", VERSION.toString());
	Event::PlayerLeftEvent::subscribe([](Event::PlayerLeftEvent const& ev) {
		auto PL = ev.mPlayer;
		REvent::manager().onleft(PL);
		return true;
		});
	RegisterCommands();
	Schedule::repeat([] {
		static int ticktime = 0; static double clocktime = 0; static bool registerraidgroup = false;
		clock_t start = clock();
		REvent::manager().tick();
		clock_t end = clock();
		clocktime += (double)(end - start) / CLOCKS_PER_SEC;
		++ticktime;
		if (ticktime >= 50) {
#ifdef debugmode
			logger.info("totalticktime:{} s for {} ticks", clocktime, ticktime);
#endif
			//forspawngroup
			if (!registerraidgroup) {
				std::unordered_map<std::string, char[104]>* mmap = (std::unordered_map<std::string, char[104]>*)((__int64)Global<Level>->getSpawnGroupRegistry() + 96);
				for (auto& tss : *mmap) {
					std::string ts = tss.first;
					REvent::REventManager::registry->addSoftEnumValues(REvent::REventManager::raidgroupsofttagname, { ts });
#ifdef debugmode
					std::cout << ts << std::endl;
#endif
				}
				registerraidgroup = true;
			}
			//std::cout << "Level::tick:this_thread_info:" << std::this_thread::get_id() << std::endl;
			clocktime = 0;
			ticktime = 0;
		}

		}, 2);
	Event::MobDieEvent::subscribe([](Event::MobDieEvent const& ev) {
		auto mob = ev.mMob;
		REvent::manager().onmobdie(mob->getUniqueID());
		return true;
		});
#ifdef debugmode
	Event::PlayerUseItemOnEvent::subscribe([](Event::PlayerUseItemOnEvent const& ev) {
		if (!const_cast<BlockInstance*>(&ev.mBlockInstance)->isNull())
		{
			std::cout << const_cast<BlockInstance*>(&ev.mBlockInstance)->getBlock()->getNbt()->toSNBT() << std::endl;
		}
		return true;
		});
	Event::PlayerAttackEvent::subscribe([](Event::PlayerAttackEvent const& ev) {
		if (ev.mTarget) {
			std::cout << CompoundTag::fromActor(ev.mTarget)->toSNBT() << std::endl;
		}
		if (!ev.mPlayer->getSelectedItem().isNull()) {
			//this->mAuxValue | (Item::getId(v1) << 16);
			std::cout << ev.mPlayer->getSelectedItem().getIdAux() << std::endl;
			std::cout << ev.mPlayer->getSelectedItem().save()->toSNBT() << std::endl;
		}
		return true;
		});
#endif
	//RemoteCall::exportAs("raidboss","raidboss",)
}