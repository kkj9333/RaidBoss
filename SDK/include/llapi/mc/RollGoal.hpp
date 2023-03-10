/**
 * @file  RollGoal.hpp
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
 * @brief MC class RollGoal.
 *
 */
class RollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLLGOAL
public:
    class RollGoal& operator=(class RollGoal const &) = delete;
    RollGoal(class RollGoal const &) = delete;
    RollGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   192860794
     */
    virtual ~RollGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RollGoal@@UEAA_NXZ
     * @hash   498851344
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RollGoal@@UEAA_NXZ
     * @hash   -1414363570
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@RollGoal@@UEAA_NXZ
     * @hash   -871291752
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@RollGoal@@UEAAXXZ
     * @hash   202424761
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RollGoal@@UEAAXXZ
     * @hash   -1959352023
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@RollGoal@@UEAAXXZ
     * @hash   429524148
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -617961792
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RollGoal@@QEAA@AEAVMob@@M@Z
     * @hash   1697133028
     */
    MCAPI RollGoal(class Mob &, float);

//private:
    /**
     * @symbol ?_handleRoll@RollGoal@@AEBAXHAEAVVec3@@AEAM1@Z
     * @hash   1647236493
     */
    MCAPI void _handleRoll(int, class Vec3 &, float &, float &) const;

private:

};