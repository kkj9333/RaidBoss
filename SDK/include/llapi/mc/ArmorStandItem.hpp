/**
 * @file  ArmorStandItem.hpp
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
 * @brief MC class ArmorStandItem.
 *
 */
class ArmorStandItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTANDITEM
public:
    class ArmorStandItem& operator=(class ArmorStandItem const &) = delete;
    ArmorStandItem(class ArmorStandItem const &) = delete;
    ArmorStandItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1498216620
     */
    virtual ~ArmorStandItem();
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
     * @vftbl  132
     * @symbol ?_useOn@ArmorStandItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -1137135366
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0ArmorStandItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     * @hash   1095387629
     */
    MCAPI ArmorStandItem(std::string const &, short);
    /**
     * @symbol ?_shouldRemove@ArmorStandItem@@QEBA_NAEAVBlockSource@@VBlockPos@@@Z
     * @hash   -270185334
     */
    MCAPI bool _shouldRemove(class BlockSource &, class BlockPos) const;

};