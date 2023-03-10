/**
 * @file  SideBySideMoveSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideMoveSystem.
 *
 */
class SideBySideMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEMOVESYSTEM
public:
    class SideBySideMoveSystem& operator=(class SideBySideMoveSystem const &) = delete;
    SideBySideMoveSystem(class SideBySideMoveSystem const &) = delete;
    SideBySideMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@SideBySideMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1677024728
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};