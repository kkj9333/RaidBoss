/**
 * @file  ActorAnimationControllerPtr.hpp
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
 * @brief MC class ActorAnimationControllerPtr.
 *
 */
class ActorAnimationControllerPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERPTR
public:
    class ActorAnimationControllerPtr& operator=(class ActorAnimationControllerPtr const &) = delete;
    ActorAnimationControllerPtr(class ActorAnimationControllerPtr const &) = delete;
    ActorAnimationControllerPtr() = delete;
#endif

public:
    /**
     * @symbol ??0ActorAnimationControllerPtr@@QEAA@AEAVActorAnimationControllerGroup@@AEBVHashedString@@@Z
     * @hash   109735739
     */
    MCAPI ActorAnimationControllerPtr(class ActorAnimationControllerGroup &, class HashedString const &);
    /**
     * @symbol ?getName@ActorAnimationControllerPtr@@QEBAAEBVHashedString@@XZ
     * @hash   -292611656
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?isNull@ActorAnimationControllerPtr@@QEBA_NXZ
     * @hash   -182693686
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ??CActorAnimationControllerPtr@@QEBAPEBVActorAnimationController@@XZ
     * @hash   1507537487
     */
    MCAPI class ActorAnimationController const * operator->() const;
    /**
     * @symbol ??CActorAnimationControllerPtr@@QEAAPEAVActorAnimationController@@XZ
     * @hash   -394157167
     */
    MCAPI class ActorAnimationController * operator->();
    /**
     * @symbol ??1ActorAnimationControllerPtr@@QEAA@XZ
     * @hash   -1235677329
     */
    MCAPI ~ActorAnimationControllerPtr();
    /**
     * @symbol ?NONE@ActorAnimationControllerPtr@@2V1@B
     * @hash   -1258319995
     */
    MCAPI static class ActorAnimationControllerPtr const NONE;

};