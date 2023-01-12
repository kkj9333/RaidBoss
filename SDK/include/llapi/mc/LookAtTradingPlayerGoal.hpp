/**
 * @file  LookAtTradingPlayerGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LookAtActorGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtTradingPlayerGoal.
 *
 */
class LookAtTradingPlayerGoal : public LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATTRADINGPLAYERGOAL
public:
    class LookAtTradingPlayerGoal& operator=(class LookAtTradingPlayerGoal const &) = delete;
    LookAtTradingPlayerGoal(class LookAtTradingPlayerGoal const &) = delete;
    LookAtTradingPlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -588493487
     */
    virtual ~LookAtTradingPlayerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@LookAtTradingPlayerGoal@@UEAA_NXZ
     * @hash   -173837651
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@LookAtTradingPlayerGoal@@UEAA_NXZ
     * @hash   974258635
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@LookAtTradingPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   668272451
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0LookAtTradingPlayerGoal@@QEAA@AEAVMob@@MMHHHH@Z
     * @hash   2019136346
     */
    MCAPI LookAtTradingPlayerGoal(class Mob &, float, float, int, int, int, int);

};