/**
 * @file  DigGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DigGoal.
 *
 */
class DigGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL
public:
    class DigGoal& operator=(class DigGoal const &) = delete;
    DigGoal(class DigGoal const &) = delete;
    DigGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   887981699
     */
    virtual ~DigGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DigGoal@@UEAA_NXZ
     * @hash   -1201878533
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DigGoal@@UEAA_NXZ
     * @hash   -537100919
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DigGoal@@UEAAXXZ
     * @hash   398679524
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DigGoal@@UEAAXXZ
     * @hash   1971362788
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DigGoal@@UEAAXXZ
     * @hash   183139727
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DigGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1148796011
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DigGoal@@QEAA@AEAVMob@@@Z
     * @hash   288662952
     */
    MCAPI DigGoal(class Mob &);

};