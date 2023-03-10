/**
 * @file  SculkShriekerVibrationConfig.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerVibrationConfig.
 *
 */
class SculkShriekerVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERVIBRATIONCONFIG
public:
    class SculkShriekerVibrationConfig& operator=(class SculkShriekerVibrationConfig const &) = delete;
    SculkShriekerVibrationConfig(class SculkShriekerVibrationConfig const &) = delete;
    SculkShriekerVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1782969829
     */
    virtual ~SculkShriekerVibrationConfig();
    /**
     * @vftbl  1
     * @symbol ?onSignalReceive@SculkShriekerVibrationConfig@@UEAAXAEAVBlockSource@@VBlockPos@@AEBVGameEvent@@PEAVActor@@M3@Z
     * @hash   1933076925
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /**
     * @vftbl  2
     * @symbol ?isValidVibration@SculkShriekerVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
     * @hash   320150521
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @vftbl  3
     * @symbol ?shouldListen@SculkShriekerVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
     * @hash   -1384133288
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};