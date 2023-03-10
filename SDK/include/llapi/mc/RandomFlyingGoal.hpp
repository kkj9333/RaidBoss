/**
 * @file  RandomFlyingGoal.hpp
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
 * @brief MC class RandomFlyingGoal.
 *
 */
class RandomFlyingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMFLYINGGOAL
public:
    class RandomFlyingGoal& operator=(class RandomFlyingGoal const &) = delete;
    RandomFlyingGoal(class RandomFlyingGoal const &) = delete;
    RandomFlyingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   390206511
     */
    virtual ~RandomFlyingGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RandomFlyingGoal@@UEAA_NXZ
     * @hash   1161032507
     */
    virtual bool canUse();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomFlyingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -822434923
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
     * @symbol ?_setWantedPosition@RandomFlyingGoal@@MEAA_NXZ
     * @hash   -123674136
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomFlyingGoal@@QEAA@AEAVMob@@MHH_N@Z
     * @hash   547195886
     */
    MCAPI RandomFlyingGoal(class Mob &, float, int, int, bool);

//private:
    /**
     * @symbol ?_getTreePos@RandomFlyingGoal@@AEBA_NAEAVVec3@@@Z
     * @hash   -1944766628
     */
    MCAPI bool _getTreePos(class Vec3 &) const;

private:

};