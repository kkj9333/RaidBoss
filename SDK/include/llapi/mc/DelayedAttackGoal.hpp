/**
 * @file  DelayedAttackGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DelayedAttackGoal.
 *
 */
class DelayedAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKGOAL
public:
    class DelayedAttackGoal& operator=(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal(class DelayedAttackGoal const &) = delete;
    DelayedAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   854462923
     */
    virtual ~DelayedAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DelayedAttackGoal@@UEAA_NXZ
     * @hash   753786995
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DelayedAttackGoal@@UEAA_NXZ
     * @hash   583918593
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DelayedAttackGoal@@UEAAXXZ
     * @hash   961624972
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DelayedAttackGoal@@UEAAXXZ
     * @hash   -126915716
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DelayedAttackGoal@@UEAAXXZ
     * @hash   987631735
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DelayedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2146318579
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1310126968
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1251451191
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol ?_attemptMoveToTarget@DelayedAttackGoal@@EEAAXAEAVActor@@@Z
     * @hash   1243840320
     */
    virtual void _attemptMoveToTarget(class Actor &);
    /**
     * @symbol ??0DelayedAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   258308544
     */
    MCAPI DelayedAttackGoal(class Mob &);

//private:
    /**
     * @symbol ?_attemptAttack@DelayedAttackGoal@@AEAAXPEAVActor@@@Z
     * @hash   2021588846
     */
    MCAPI void _attemptAttack(class Actor *);
    /**
     * @symbol ?_attemptStartAttacking@DelayedAttackGoal@@AEBAXPEAVActor@@@Z
     * @hash   -148376579
     */
    MCAPI void _attemptStartAttacking(class Actor *) const;
    /**
     * @symbol ?_manageAttackTime@DelayedAttackGoal@@AEAAXXZ
     * @hash   704807176
     */
    MCAPI void _manageAttackTime();

private:

};