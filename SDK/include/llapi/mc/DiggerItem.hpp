/**
 * @file  DiggerItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DiggerItem.
 *
 */
class DiggerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEM
public:
    class DiggerItem& operator=(class DiggerItem const &) = delete;
    DiggerItem(class DiggerItem const &) = delete;
    DiggerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1490001167
     */
    virtual ~DiggerItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  48
     * @symbol ?getAttackDamage@DiggerItem@@UEBAHXZ
     * @hash   -454757037
     */
    virtual int getAttackDamage() const;
    /**
     * @vftbl  49
     * @symbol ?isHandEquipped@DiggerItem@@UEBA_NXZ
     * @hash   266679995
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@DiggerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1556138090
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  61
     * @symbol ?isValidRepairItem@DiggerItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   907178029
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantValue@DiggerItem@@UEBAHXZ
     * @hash   1103415812
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  88
     * @symbol ?getDestroySpeed@DiggerItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     * @hash   2110793925
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl  93
     * @symbol ?mineBlock@DiggerItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   -298796314
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @symbol ?setBlocks@DiggerItem@@QEAAXAEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@std@@@Z
     * @hash   40676582
     */
    MCAPI void setBlocks(std::vector<class Block const *> const &);

//protected:
    /**
     * @symbol ??0DiggerItem@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHAEBVTier@Item@@AEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@2@@Z
     * @hash   -1409124136
     */
    MCAPI DiggerItem(std::string const &, int, int, class Item::Tier const &, std::vector<class Block const *> const &);

protected:

};