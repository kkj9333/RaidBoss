/**
 * @file  LevelEventCoordinator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelEventCoordinator.
 *
 */
class LevelEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTCOORDINATOR
public:
    class LevelEventCoordinator& operator=(class LevelEventCoordinator const &) = delete;
    LevelEventCoordinator(class LevelEventCoordinator const &) = delete;
#endif

public:
    /**
     * @symbol ??0LevelEventCoordinator@@QEAA@XZ
     * @hash   -2061780602
     */
    MCAPI LevelEventCoordinator();
    /**
     * @symbol ?registerLevelGameplayHandler@LevelEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VLevelGameplayHandler@@U?$default_delete@VLevelGameplayHandler@@@std@@@std@@@Z
     * @hash   -1320385504
     */
    MCAPI void registerLevelGameplayHandler(std::unique_ptr<class LevelGameplayHandler> &&);
    /**
     * @symbol ?sendEvent@LevelEventCoordinator@@QEAAXAEBV?$EventRef@U?$LevelGameplayEvent@X@@@@@Z
     * @hash   882331238
     */
    MCAPI void sendEvent(class EventRef<struct LevelGameplayEvent<void>> const &);
    /**
     * @symbol ?sendLevelBiomesRegistered@LevelEventCoordinator@@QEAAXAEAVIWorldRegistriesProvider@@@Z
     * @hash   -826490554
     */
    MCAPI void sendLevelBiomesRegistered(class IWorldRegistriesProvider &);
    /**
     * @symbol ?sendLevelInitialized@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     * @hash   -395886722
     */
    MCAPI void sendLevelInitialized(class Level &);
    /**
     * @symbol ?sendLevelRemovedActor@LevelEventCoordinator@@QEAAXAEAVLevel@@AEAVActor@@@Z
     * @hash   -1199081459
     */
    MCAPI void sendLevelRemovedActor(class Level &, class Actor &);
    /**
     * @symbol ?sendLevelScriptTick@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     * @hash   1429538484
     */
    MCAPI void sendLevelScriptTick(class Level &);
    /**
     * @symbol ?sendLevelTick@LevelEventCoordinator@@QEAAXAEAVLevel@@@Z
     * @hash   2085831930
     */
    MCAPI void sendLevelTick(class Level &);
    /**
     * @symbol ?sendLevelWeatherChanged@LevelEventCoordinator@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     * @hash   -1880689418
     */
    MCAPI void sendLevelWeatherChanged(std::string const &, bool, bool);

};