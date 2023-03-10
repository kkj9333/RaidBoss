/**
 * @file  ChemistryStickItem.hpp
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
 * @brief MC class ChemistryStickItem.
 *
 */
class ChemistryStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYSTICKITEM
public:
    class ChemistryStickItem& operator=(class ChemistryStickItem const &) = delete;
    ChemistryStickItem(class ChemistryStickItem const &) = delete;
    ChemistryStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -608507959
     */
    virtual ~ChemistryStickItem();
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
     * @vftbl  30
     * @symbol ?setMaxDamage@ChemistryStickItem@@UEAAAEAVItem@@H@Z
     * @hash   -538342673
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -125521006
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  61
     * @symbol ?isValidRepairItem@ChemistryStickItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -1847075417
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
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
     * @hash   -69186225
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
     * @symbol ?use@ChemistryStickItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -534926609
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  86
     * @symbol ?useTimeDepleted@ChemistryStickItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   1433996463
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@ChemistryStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   1873341725
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  93
     * @symbol ?mineBlock@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   1142135468
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  101
     * @symbol ?inventoryTick@ChemistryStickItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   -453680033
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  105
     * @symbol ?fixupCommon@ChemistryStickItem@@UEBAXAEAVItemStackBase@@@Z
     * @hash   1373281810
     */
    virtual void fixupCommon(class ItemStackBase &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYSTICKITEM
    /**
     * @symbol ?showsDurabilityInCreative@ChemistryStickItem@@UEBA_NXZ
     * @hash   -1468008516
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @symbol ?uniqueAuxValues@ChemistryStickItem@@UEBA_NXZ
     * @hash   2047304606
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0ChemistryStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -532406739
     */
    MCAPI ChemistryStickItem(std::string const &, int);
    /**
     * @symbol ?getColorType@ChemistryStickItem@@SA?AW4ItemColor@@H@Z
     * @hash   303452005
     */
    MCAPI static enum class ItemColor getColorType(int);
    /**
     * @symbol ?isActive@ChemistryStickItem@@SA_NH@Z
     * @hash   1768786693
     */
    MCAPI static bool isActive(int);
    /**
     * @symbol ?isChemistryStick@ChemistryStickItem@@SA_NAEBVItemStackBase@@@Z
     * @hash   16652759
     */
    MCAPI static bool isChemistryStick(class ItemStackBase const &);

//protected:
    /**
     * @symbol ?_getColorName@ChemistryStickItem@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   451727143
     */
    MCAPI std::string _getColorName(int) const;
    /**
     * @symbol ?_tick@ChemistryStickItem@@IEBA_NAEAVItemStack@@_K@Z
     * @hash   -792814242
     */
    MCAPI bool _tick(class ItemStack &, unsigned __int64) const;

//private:
    /**
     * @symbol ?_storeActivationTimestamp@ChemistryStickItem@@AEBAXAEAVItemStack@@_KH@Z
     * @hash   1039179278
     */
    MCAPI void _storeActivationTimestamp(class ItemStack &, unsigned __int64, int) const;

protected:

private:
    /**
     * @symbol ?ACTIVATION_TIMESTAMP_TAG@ChemistryStickItem@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1989153716
     */
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;
    /**
     * @symbol ?ACTIVE_BIT@ChemistryStickItem@@0HB
     * @hash   289271013
     */
    MCAPI static int const ACTIVE_BIT;
    /**
     * @symbol ?COLOR_BITS@ChemistryStickItem@@0HB
     * @hash   -295058965
     */
    MCAPI static int const COLOR_BITS;
    /**
     * @symbol ?COLOR_MASK@ChemistryStickItem@@0HB
     * @hash   513887381
     */
    MCAPI static int const COLOR_MASK;
    /**
     * @symbol ?DAMAGE_BITS@ChemistryStickItem@@0HB
     * @hash   -2144670193
     */
    MCAPI static int const DAMAGE_BITS;
    /**
     * @symbol ?DAMAGE_MASK@ChemistryStickItem@@0HB
     * @hash   -1335723847
     */
    MCAPI static int const DAMAGE_MASK;
    /**
     * @symbol ?DAMAGE_START_BIT@ChemistryStickItem@@0HB
     * @hash   1045193173
     */
    MCAPI static int const DAMAGE_START_BIT;

};