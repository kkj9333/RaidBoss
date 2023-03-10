/**
 * @file  WeaponItem.hpp
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
 * @brief MC class WeaponItem.
 *
 */
class WeaponItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONITEM
public:
    class WeaponItem& operator=(class WeaponItem const &) = delete;
    WeaponItem(class WeaponItem const &) = delete;
    WeaponItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1444507239
     */
    virtual ~WeaponItem();
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
     * @vftbl  44
     * @symbol ?canDestroySpecial@WeaponItem@@UEBA_NAEBVBlock@@@Z
     * @hash   108267426
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @vftbl  48
     * @symbol ?getAttackDamage@WeaponItem@@UEBAHXZ
     * @hash   630096729
     */
    virtual int getAttackDamage() const;
    /**
     * @vftbl  49
     * @symbol ?isHandEquipped@WeaponItem@@UEBA_NXZ
     * @hash   -2027326287
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
     * @vftbl  55
     * @symbol ?canDestroyInCreative@WeaponItem@@UEBA_NXZ
     * @hash   1789763111
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@WeaponItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   818844496
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  61
     * @symbol ?isValidRepairItem@WeaponItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -1209936265
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@WeaponItem@@UEBAHXZ
     * @hash   1606171757
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantValue@WeaponItem@@UEBAHXZ
     * @hash   -413753990
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
     * @vftbl  84
     * @symbol ?use@WeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   1072671519
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  88
     * @symbol ?getDestroySpeed@WeaponItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     * @hash   -38604133
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@WeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   204016445
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @symbol ??0WeaponItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
     * @hash   -458920758
     */
    MCAPI WeaponItem(std::string const &, int, class Item::Tier const &);

};