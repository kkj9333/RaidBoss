/**
 * @file  ReplayStateSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ReplayStateSystem.
 *
 */
class ReplayStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATESYSTEM
public:
    class ReplayStateSystem& operator=(class ReplayStateSystem const &) = delete;
    ReplayStateSystem(class ReplayStateSystem const &) = delete;
    ReplayStateSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAddReplayStateComponentSystem@ReplayStateSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1356264170
     */
    MCAPI static struct TickingSystemWithInfo createAddReplayStateComponentSystem();
    /**
     * @symbol ?createReplayStateSystem@ReplayStateSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   320033530
     */
    MCAPI static struct TickingSystemWithInfo createReplayStateSystem();

};