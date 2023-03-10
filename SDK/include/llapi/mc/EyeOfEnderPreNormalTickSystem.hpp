/**
 * @file  EyeOfEnderPreNormalTickSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EyeOfEnderPreNormalTickSystem.
 *
 */
class EyeOfEnderPreNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EYEOFENDERPRENORMALTICKSYSTEM
public:
    class EyeOfEnderPreNormalTickSystem& operator=(class EyeOfEnderPreNormalTickSystem const &) = delete;
    EyeOfEnderPreNormalTickSystem(class EyeOfEnderPreNormalTickSystem const &) = delete;
    EyeOfEnderPreNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@EyeOfEnderPreNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -578535486
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doEyeOfEnderPreNormalTickSystem@EyeOfEnderPreNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   31740237
     */
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};