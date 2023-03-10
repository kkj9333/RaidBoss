/**
 * @file  RandomBreachingGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomBreachingGoal.
 *
 */
class RandomBreachingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMBREACHINGGOAL
public:
    class RandomBreachingGoal& operator=(class RandomBreachingGoal const &) = delete;
    RandomBreachingGoal(class RandomBreachingGoal const &) = delete;
    RandomBreachingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -479314577
     */
    virtual ~RandomBreachingGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RandomBreachingGoal@@UEAA_NXZ
     * @hash   1935823343
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomBreachingGoal@@UEAA_NXZ
     * @hash   -1523346243
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@RandomBreachingGoal@@UEAA_NXZ
     * @hash   -1816400553
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@RandomBreachingGoal@@UEAAXXZ
     * @hash   -1257019432
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RandomBreachingGoal@@UEAAXXZ
     * @hash   -355286056
     */
    virtual void stop();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomBreachingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1764154063
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
     * @symbol ?_setWantedPosition@RandomBreachingGoal@@MEAA_NXZ
     * @hash   1269997372
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomBreachingGoal@@QEAA@AEAVMob@@MHHHM@Z
     * @hash   309589651
     */
    MCAPI RandomBreachingGoal(class Mob &, float, int, int, int, float);

};