/**
 * @file  ChargeAttackGoal.hpp
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
 * @brief MC class ChargeAttackGoal.
 *
 */
class ChargeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEATTACKGOAL
public:
    class ChargeAttackGoal& operator=(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal(class ChargeAttackGoal const &) = delete;
    ChargeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -973739239
     */
    virtual ~ChargeAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@ChargeAttackGoal@@UEAA_NXZ
     * @hash   34774993
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@ChargeAttackGoal@@UEAA_NXZ
     * @hash   478650287
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@ChargeAttackGoal@@UEAAXXZ
     * @hash   1300935962
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@ChargeAttackGoal@@UEAAXXZ
     * @hash   -555628070
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@ChargeAttackGoal@@UEAAXXZ
     * @hash   665059701
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@ChargeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -287024689
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0ChargeAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   182679390
     */
    MCAPI ChargeAttackGoal(class Mob &);

};