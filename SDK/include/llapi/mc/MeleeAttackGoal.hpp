/**
 * @file  MeleeAttackGoal.hpp
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
 * @brief MC class MeleeAttackGoal.
 *
 */
class MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKGOAL
public:
    class MeleeAttackGoal& operator=(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal(class MeleeAttackGoal const &) = delete;
    MeleeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1356216611
     */
    virtual ~MeleeAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MeleeAttackGoal@@UEAA_NXZ
     * @hash   1278029345
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MeleeAttackGoal@@UEAA_NXZ
     * @hash   2018291567
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MeleeAttackGoal@@UEAAXXZ
     * @hash   516244394
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MeleeAttackGoal@@UEAAXXZ
     * @hash   1405595626
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MeleeAttackGoal@@UEAAXXZ
     * @hash   1244634725
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MeleeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1736302063
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
     * @symbol ?_attemptMoveToTarget@MeleeAttackGoal@@MEAAXAEAVActor@@@Z
     * @hash   1204359307
     */
    virtual void _attemptMoveToTarget(class Actor &);
    /**
     * @vftbl  11
     * @symbol ?_attemptAttackTarget@MeleeAttackGoal@@MEAAXAEAVActor@@MMMAEBVVec3@@@Z
     * @hash   -1972917825
     */
    virtual void _attemptAttackTarget(class Actor &, float, float, float, class Vec3 const &);
    /**
     * @symbol ??0MeleeAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   1817489518
     */
    MCAPI MeleeAttackGoal(class Mob &);
    /**
     * @symbol ?canReachTarget@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
     * @hash   -1296110269
     */
    MCAPI static bool canReachTarget(class Mob const &, class Vec3 const &, float, float, float, float, int);
    /**
     * @symbol ?canReachTargetLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVVec3@@MMMMH@Z
     * @hash   558586593
     */
    MCAPI static bool canReachTargetLegacy(class Mob const &, class Vec3 const &, float, float, float, float, int);
    /**
     * @symbol ?isTargetInLineOfSight@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
     * @hash   -231900648
     */
    MCAPI static bool isTargetInLineOfSight(class Mob const &, class Actor const &);
    /**
     * @symbol ?isTargetInLineOfSightLegacy@MeleeAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
     * @hash   -816027608
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const &, class Actor const &);
    /**
     * @symbol ?min3DAttackVersion@MeleeAttackGoal@@2VBaseGameVersion@@B
     * @hash   -707279475
     */
    MCAPI static class BaseGameVersion const min3DAttackVersion;
    /**
     * @symbol ?minHitThroughWallFixVersion@MeleeAttackGoal@@2VBaseGameVersion@@B
     * @hash   664322923
     */
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;

//protected:
    /**
     * @symbol ?_attemptMoveToTargetPosition@MeleeAttackGoal@@IEAAXAEAVActor@@M@Z
     * @hash   -950589965
     */
    MCAPI void _attemptMoveToTargetPosition(class Actor &, float);
    /**
     * @symbol ?_getAttackReachSqr@MeleeAttackGoal@@IEBAMAEBVActor@@@Z
     * @hash   1631753975
     */
    MCAPI float _getAttackReachSqr(class Actor const &) const;
    /**
     * @symbol ?_inSunlight@MeleeAttackGoal@@IEBA_NAEBVActor@@@Z
     * @hash   1483395991
     */
    MCAPI bool _inSunlight(class Actor const &) const;

protected:

};