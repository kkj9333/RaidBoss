/**
 * @file  DimensionTransitionSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionTransitionSystem.
 *
 */
class DimensionTransitionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONTRANSITIONSYSTEM
public:
    class DimensionTransitionSystem& operator=(class DimensionTransitionSystem const &) = delete;
    DimensionTransitionSystem(class DimensionTransitionSystem const &) = delete;
    DimensionTransitionSystem() = delete;
#endif

public:
    /**
     * @symbol ?create@DimensionTransitionSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1994719482
     */
    MCAPI static struct TickingSystemWithInfo create();

};