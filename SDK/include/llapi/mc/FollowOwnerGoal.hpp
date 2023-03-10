/**
 * @file  FollowOwnerGoal.hpp
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
 * @brief MC class FollowOwnerGoal.
 *
 */
class FollowOwnerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWOWNERGOAL
public:
    class FollowOwnerGoal& operator=(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal(class FollowOwnerGoal const &) = delete;
    FollowOwnerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   868199811
     */
    virtual ~FollowOwnerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FollowOwnerGoal@@UEAA_NXZ
     * @hash   900412539
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowOwnerGoal@@UEAA_NXZ
     * @hash   1640951529
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@FollowOwnerGoal@@UEAAXXZ
     * @hash   -360607788
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FollowOwnerGoal@@UEAAXXZ
     * @hash   528743444
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FollowOwnerGoal@@UEAAXXZ
     * @hash   367951679
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1428088325
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1252374712
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?onPlayerDimensionChanged@FollowOwnerGoal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
     * @hash   2132379815
     */
    virtual void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ??0FollowOwnerGoal@@QEAA@AEAVMob@@MMM_N1M@Z
     * @hash   1013093408
     */
    MCAPI FollowOwnerGoal(class Mob &, float, float, float, bool, bool, float);

};