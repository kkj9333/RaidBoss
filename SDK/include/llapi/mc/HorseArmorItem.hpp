/**
 * @file  HorseArmorItem.hpp
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
 * @brief MC class HorseArmorItem.
 *
 */
class HorseArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum class Tier;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEARMORITEM
public:
    class HorseArmorItem& operator=(class HorseArmorItem const &) = delete;
    HorseArmorItem(class HorseArmorItem const &) = delete;
    HorseArmorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1579384353
     */
    virtual ~HorseArmorItem();
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
     * @vftbl  18
     * @symbol ?isDyeable@HorseArmorItem@@UEBA_NXZ
     * @hash   169442995
     */
    virtual bool isDyeable() const;
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
     * @symbol ?appendFormattedHovertext@HorseArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -624741462
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  64
     * @symbol ?getArmorValue@HorseArmorItem@@UEBAHXZ
     * @hash   -448826882
     */
    virtual int getArmorValue() const;
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
     * @vftbl  73
     * @symbol ?getColor@HorseArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   1271106436
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  74
     * @symbol ?hasCustomColor@HorseArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   1818076489
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  77
     * @symbol ?clearColor@HorseArmorItem@@UEBAXPEAVCompoundTag@@@Z
     * @hash   -1890549520
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @vftbl  78
     * @symbol ?setColor@HorseArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     * @hash   1679441201
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @vftbl  85
     * @symbol ?dispense@HorseArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -349853343
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @symbol ??0HorseArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Tier@0@@Z
     * @hash   1524155536
     */
    MCAPI HorseArmorItem(std::string const &, int, int, enum class HorseArmorItem::Tier);
    /**
     * @symbol ?getTier@HorseArmorItem@@QEBA?AW4Tier@1@XZ
     * @hash   19426582
     */
    MCAPI enum class HorseArmorItem::Tier getTier() const;
    /**
     * @symbol ?mHealthPerTier@HorseArmorItem@@2QBHB
     * @hash   -1074667522
     */
    MCAPI static int const mHealthPerTier[];

};