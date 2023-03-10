/**
 * @file  BegGoal.hpp
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
 * @brief MC class BegGoal.
 *
 */
class BegGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEGGOAL
public:
    class BegGoal& operator=(class BegGoal const &) = delete;
    BegGoal(class BegGoal const &) = delete;
    BegGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   972971141
     */
    virtual ~BegGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@BegGoal@@UEAA_NXZ
     * @hash   -1419909239
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@BegGoal@@UEAA_NXZ
     * @hash   -755239257
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@BegGoal@@UEAAXXZ
     * @hash   -1408980830
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@BegGoal@@UEAAXXZ
     * @hash   163302658
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@BegGoal@@UEAAXXZ
     * @hash   -791273619
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@BegGoal@@EEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1760403765
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0BegGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MHH@Z
     * @hash   -962341650
     */
    MCAPI BegGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, int, int);

//private:
    /**
     * @symbol ?_playerHoldingInteresting@BegGoal@@AEAA_NPEAVPlayer@@@Z
     * @hash   -478508509
     */
    MCAPI bool _playerHoldingInteresting(class Player *);

private:

};