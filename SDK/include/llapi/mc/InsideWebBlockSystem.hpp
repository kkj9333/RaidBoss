/**
 * @file  InsideWebBlockSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideWebBlockSystem.
 *
 */
class InsideWebBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEWEBBLOCKSYSTEM
public:
    class InsideWebBlockSystem& operator=(class InsideWebBlockSystem const &) = delete;
    InsideWebBlockSystem(class InsideWebBlockSystem const &) = delete;
    InsideWebBlockSystem() = delete;
#endif

public:
    /**
     * @symbol ?SLOWDOWN_MULTIPLIER@InsideWebBlockSystem@@2VVec3@@B
     * @hash   -407567087
     */
    MCAPI static class Vec3 const SLOWDOWN_MULTIPLIER;
    /**
     * @symbol ?_applySlowdown@InsideWebBlockSystem@@SAXAEAVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UBlockMovementSlowdownAppliedComponent@@@@@Z
     * @hash   2019054815
     */
    MCAPI static void _applySlowdown(class StrictEntityContext &, struct BlockMovementSlowdownMultiplierComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?createSlowdownSystem@InsideWebBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1120392272
     */
    MCAPI static struct TickingSystemWithInfo createSlowdownSystem();

};