/**
 * @file  PrimedTntPostNormalTickSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PrimedTntPostNormalTickSystem.
 *
 */
class PrimedTntPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNTPOSTNORMALTICKSYSTEM
public:
    class PrimedTntPostNormalTickSystem& operator=(class PrimedTntPostNormalTickSystem const &) = delete;
    PrimedTntPostNormalTickSystem(class PrimedTntPostNormalTickSystem const &) = delete;
    PrimedTntPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@PrimedTntPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1444407758
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doPrimedTntPostNormalTickSystem@PrimedTntPostNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   -989712131
     */
    MCAPI static void _doPrimedTntPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};