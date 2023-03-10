/**
 * @file  RangedAttackGoal.hpp
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
 * @brief MC class RangedAttackGoal.
 *
 */
class RangedAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDATTACKGOAL
public:
    class RangedAttackGoal& operator=(class RangedAttackGoal const &) = delete;
    RangedAttackGoal(class RangedAttackGoal const &) = delete;
    RangedAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   535140844
     */
    virtual ~RangedAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RangedAttackGoal@@UEAA_NXZ
     * @hash   292370430
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RangedAttackGoal@@UEAA_NXZ
     * @hash   736261100
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@RangedAttackGoal@@UEAAXXZ
     * @hash   494313623
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RangedAttackGoal@@UEAAXXZ
     * @hash   -1362481049
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@RangedAttackGoal@@UEAAXXZ
     * @hash   -141685646
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RangedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   288935298
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RangedAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   1513174779
     */
    MCAPI RangedAttackGoal(class Mob &);
    /**
     * @symbol ?handleAttackBehavior@RangedAttackGoal@@QEAAXPEAVActor@@AEBVVec3@@M_N@Z
     * @hash   2048422108
     */
    MCAPI void handleAttackBehavior(class Actor *, class Vec3 const &, float, bool);

};