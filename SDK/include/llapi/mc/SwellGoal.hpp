/**
 * @file  SwellGoal.hpp
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
 * @brief MC class SwellGoal.
 *
 */
class SwellGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWELLGOAL
public:
    class SwellGoal& operator=(class SwellGoal const &) = delete;
    SwellGoal(class SwellGoal const &) = delete;
    SwellGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1919148610
     */
    virtual ~SwellGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SwellGoal@@UEAA_NXZ
     * @hash   -1300526900
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   736752099
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SwellGoal@@UEAAXXZ
     * @hash   327327509
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SwellGoal@@UEAAXXZ
     * @hash   -1622325963
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SwellGoal@@UEAAXXZ
     * @hash   1346815552
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwellGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -26146140
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SwellGoal@@QEAA@PEAVCreeper@@MM@Z
     * @hash   1893929114
     */
    MCAPI SwellGoal(class Creeper *, float, float);

};