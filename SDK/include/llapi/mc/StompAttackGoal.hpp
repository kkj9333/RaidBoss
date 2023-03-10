/**
 * @file  StompAttackGoal.hpp
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
 * @brief MC class StompAttackGoal.
 *
 */
class StompAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPATTACKGOAL
public:
    class StompAttackGoal& operator=(class StompAttackGoal const &) = delete;
    StompAttackGoal(class StompAttackGoal const &) = delete;
    StompAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -525440262
     */
    virtual ~StompAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@StompAttackGoal@@UEAA_NXZ
     * @hash   -1638194300
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@StompAttackGoal@@UEAA_NXZ
     * @hash   -590535086
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@StompAttackGoal@@UEAAXXZ
     * @hash   -959734051
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@StompAttackGoal@@UEAAXXZ
     * @hash   236245373
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@StompAttackGoal@@UEAAXXZ
     * @hash   74900072
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@StompAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2019193844
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
     * @symbol ??0StompAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   2009901073
     */
    MCAPI StompAttackGoal(class Mob &);

//protected:
    /**
     * @symbol ?_attemptAttack@StompAttackGoal@@IEAAXAEAVActor@@@Z
     * @hash   -1593380678
     */
    MCAPI void _attemptAttack(class Actor &);

protected:

};