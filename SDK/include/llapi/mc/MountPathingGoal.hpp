/**
 * @file  MountPathingGoal.hpp
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
 * @brief MC class MountPathingGoal.
 *
 */
class MountPathingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTPATHINGGOAL
public:
    class MountPathingGoal& operator=(class MountPathingGoal const &) = delete;
    MountPathingGoal(class MountPathingGoal const &) = delete;
    MountPathingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1421402177
     */
    virtual ~MountPathingGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MountPathingGoal@@UEAA_NXZ
     * @hash   1062849593
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MountPathingGoal@@UEAA_NXZ
     * @hash   1506663383
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MountPathingGoal@@UEAAXXZ
     * @hash   -875653662
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MountPathingGoal@@UEAAXXZ
     * @hash   1613106002
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MountPathingGoal@@UEAAXXZ
     * @hash   -1460850627
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MountPathingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1560476361
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
     * @symbol ?_getAttackReachSqr@MountPathingGoal@@MEAAMXZ
     * @hash   1566583361
     */
    virtual float _getAttackReachSqr();
    /**
     * @symbol ??0MountPathingGoal@@QEAA@AEAVMob@@MM_N@Z
     * @hash   174876519
     */
    MCAPI MountPathingGoal(class Mob &, float, float, bool);

};