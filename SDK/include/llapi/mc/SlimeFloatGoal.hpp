/**
 * @file  SlimeFloatGoal.hpp
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
 * @brief MC class SlimeFloatGoal.
 *
 */
class SlimeFloatGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEFLOATGOAL
public:
    class SlimeFloatGoal& operator=(class SlimeFloatGoal const &) = delete;
    SlimeFloatGoal(class SlimeFloatGoal const &) = delete;
    SlimeFloatGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1435587343
     */
    virtual ~SlimeFloatGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SlimeFloatGoal@@UEAA_NXZ
     * @hash   1067938889
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1263526156
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   738599141
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@SlimeFloatGoal@@UEAAXXZ
     * @hash   746960589
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SlimeFloatGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -145730521
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SlimeFloatGoal@@QEAA@AEAVMob@@@Z
     * @hash   -835143434
     */
    MCAPI SlimeFloatGoal(class Mob &);

};