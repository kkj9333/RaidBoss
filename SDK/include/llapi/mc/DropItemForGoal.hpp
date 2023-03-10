/**
 * @file  DropItemForGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DropItemForGoal.
 *
 */
class DropItemForGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPITEMFORGOAL
public:
    class DropItemForGoal& operator=(class DropItemForGoal const &) = delete;
    DropItemForGoal(class DropItemForGoal const &) = delete;
    DropItemForGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -609282616
     */
    virtual ~DropItemForGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DropItemForGoal@@UEAA_NXZ
     * @hash   -95959802
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DropItemForGoal@@UEAA_NXZ
     * @hash   644840580
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DropItemForGoal@@UEAAXXZ
     * @hash   -1154819745
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DropItemForGoal@@UEAAXXZ
     * @hash   -264392193
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DropItemForGoal@@UEAAXXZ
     * @hash   -425537606
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DropItemForGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1550927098
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
     * @vftbl  11
     * @symbol ?isValidTarget@DropItemForGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1976476808
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol ?findTargetBlock@DropItemForGoal@@UEAA_NXZ
     * @hash   506572626
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0DropItemForGoal@@QEAA@AEAVMob@@@Z
     * @hash   282800723
     */
    MCAPI DropItemForGoal(class Mob &);

};