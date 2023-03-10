/**
 * @file  InvestigateSuspiciousLocationGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InvestigateSuspiciousLocationGoal.
 *
 */
class InvestigateSuspiciousLocationGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVESTIGATESUSPICIOUSLOCATIONGOAL
public:
    class InvestigateSuspiciousLocationGoal& operator=(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal(class InvestigateSuspiciousLocationGoal const &) = delete;
    InvestigateSuspiciousLocationGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1232843506
     */
    virtual ~InvestigateSuspiciousLocationGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
     * @hash   -105390420
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@InvestigateSuspiciousLocationGoal@@UEAA_NXZ
     * @hash   -1580780054
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     * @hash   996384037
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     * @hash   2046519717
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@InvestigateSuspiciousLocationGoal@@UEAAXXZ
     * @hash   1832284944
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@InvestigateSuspiciousLocationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   142213380
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0InvestigateSuspiciousLocationGoal@@QEAA@AEAVMob@@@Z
     * @hash   1886481289
     */
    MCAPI InvestigateSuspiciousLocationGoal(class Mob &);

};