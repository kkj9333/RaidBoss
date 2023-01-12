/**
 * @file  DragonDeathGoal.hpp
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
 * @brief MC class DragonDeathGoal.
 *
 */
class DragonDeathGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONDEATHGOAL
public:
    class DragonDeathGoal& operator=(class DragonDeathGoal const &) = delete;
    DragonDeathGoal(class DragonDeathGoal const &) = delete;
    DragonDeathGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1108601122
     */
    virtual ~DragonDeathGoal();
    /**
     * @vftbl  1
     * @hash   -1266296719
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   756770690
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   757694211
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DragonDeathGoal@@UEAAXXZ
     * @hash   302916725
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DragonDeathGoal@@UEAAXXZ
     * @hash   1192267957
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DragonDeathGoal@@UEAAXXZ
     * @hash   1030938032
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonDeathGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1450076692
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONDEATHGOAL
    /**
     * @symbol ?canContinueToUse@DragonDeathGoal@@UEAA_NXZ
     * @hash   1533860698
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse@DragonDeathGoal@@UEAA_NXZ
     * @hash   792968060
     */
    MCVAPI bool canUse();
#endif
    /**
     * @symbol ??0DragonDeathGoal@@QEAA@AEAVEnderDragon@@@Z
     * @hash   -1105506061
     */
    MCAPI DragonDeathGoal(class EnderDragon &);

};