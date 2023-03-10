/**
 * @file  BatPostNormalTickSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BatPostNormalTickSystem.
 *
 */
class BatPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATPOSTNORMALTICKSYSTEM
public:
    class BatPostNormalTickSystem& operator=(class BatPostNormalTickSystem const &) = delete;
    BatPostNormalTickSystem(class BatPostNormalTickSystem const &) = delete;
    BatPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@BatPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1909803198
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};