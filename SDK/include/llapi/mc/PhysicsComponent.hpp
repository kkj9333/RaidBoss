/**
 * @file  PhysicsComponent.hpp
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
 * @brief MC class PhysicsComponent.
 *
 */
class PhysicsComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSCOMPONENT
public:
    class PhysicsComponent& operator=(class PhysicsComponent const &) = delete;
    PhysicsComponent(class PhysicsComponent const &) = delete;
    PhysicsComponent() = delete;
#endif

public:
    /**
     * @symbol ?isAffectedByGravity@PhysicsComponent@@QEBA_NAEBUIActorMovementProxy@@@Z
     * @hash   -1116754743
     */
    MCAPI bool isAffectedByGravity(struct IActorMovementProxy const &) const;
    /**
     * @symbol ?setAffectedByGravity@PhysicsComponent@@QEBAXAEAUIActorMovementProxy@@_N@Z
     * @hash   -254248073
     */
    MCAPI void setAffectedByGravity(struct IActorMovementProxy &, bool) const;
    /**
     * @symbol ?setHasCollision@PhysicsComponent@@QEAAXAEAVActor@@_N@Z
     * @hash   698102191
     */
    MCAPI void setHasCollision(class Actor &, bool);

};