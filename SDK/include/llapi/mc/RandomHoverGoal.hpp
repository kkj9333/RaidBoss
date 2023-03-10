/**
 * @file  RandomHoverGoal.hpp
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
 * @brief MC class RandomHoverGoal.
 *
 */
class RandomHoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMHOVERGOAL
public:
    class RandomHoverGoal& operator=(class RandomHoverGoal const &) = delete;
    RandomHoverGoal(class RandomHoverGoal const &) = delete;
    RandomHoverGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1109389510
     */
    virtual ~RandomHoverGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RandomHoverGoal@@UEAA_NXZ
     * @hash   -2126261660
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomHoverGoal@@UEAA_NXZ
     * @hash   -1385415150
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@RandomHoverGoal@@UEAAXXZ
     * @hash   1483064733
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@RandomHoverGoal@@UEAAXXZ
     * @hash   -2084019640
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomHoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   779628540
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RandomHoverGoal@@QEAA@AEAVMob@@MHMMMUIntRange@@@Z
     * @hash   -1007035651
     */
    MCAPI RandomHoverGoal(class Mob &, float, int, float, float, float, struct IntRange);

//protected:
    /**
     * @symbol ?_computeNewTarget@RandomHoverGoal@@IEAA_NXZ
     * @hash   -1198250886
     */
    MCAPI bool _computeNewTarget();
    /**
     * @symbol ?_mobMeetsPreconditions@RandomHoverGoal@@IEBA_NXZ
     * @hash   796213920
     */
    MCAPI bool _mobMeetsPreconditions() const;
    /**
     * @symbol ?_moveToTarget@RandomHoverGoal@@IEAAXXZ
     * @hash   -779072397
     */
    MCAPI void _moveToTarget();

protected:

};