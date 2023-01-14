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
		REvent::manager().tick();
		}, 2);
	Event::MobDieEvent::subscribe([](Event::MobDieEvent const& ev) {
		auto mob = ev.mMob;
		REvent::manager().onmobdie(mob->getUniqueID());
		return true;
		});
	//RemoteCall::exportAs("raidboss","raidboss",)
}