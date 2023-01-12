/**
 * @file  ShareItemsGoal.hpp
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
 * @brief MC class ShareItemsGoal.
 *
 */
class ShareItemsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREITEMSGOAL
public:
    class ShareItemsGoal& operator=(class ShareItemsGoal const &) = delete;
    ShareItemsGoal(class ShareItemsGoal const &) = delete;
    ShareItemsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   869628574
     */
    virtual ~ShareItemsGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@ShareItemsGoal@@UEAA_NXZ
     * @hash   86689916
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@ShareItemsGoal@@UEAA_NXZ
     * @hash   144300122
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@ShareItemsGoal@@UEAAXXZ
     * @hash   1455175381
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@ShareItemsGoal@@UEAAXXZ
     * @hash   -1584575659
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@ShareItemsGoal@@UEAAXXZ
     * @hash   -1790318656
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@ShareItemsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1517000556
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0ShareItemsGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MHM@Z
     * @hash   -2094910359
     */
    MCAPI ShareItemsGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, float);

//protected:
    /**
     * @symbol ?selectEntityToShareWith@ShareItemsGoal@@IEAA?AU?$pair@HVItemStack@@@std@@AEBV?$vector@U?$pair@HVItemStack@@@std@@V?$allocator@U?$pair@HVItemStack@@@std@@@2@@3@@Z
     * @hash   1985296982
     */
    MCAPI struct std::pair<int, class ItemStack> selectEntityToShareWith(std::vector<struct std::pair<int, class ItemStack>> const &);

protected:

};