/**
 * @file  SwiftSneakEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SwiftSneakEnchant.
 *
 */
class SwiftSneakEnchant : public Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIFTSNEAKENCHANT
public:
    class SwiftSneakEnchant& operator=(class SwiftSneakEnchant const &) = delete;
    SwiftSneakEnchant(class SwiftSneakEnchant const &) = delete;
    SwiftSneakEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1368969178
     */
    virtual ~SwiftSneakEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@SwiftSneakEnchant@@UEBAHH@Z
     * @hash   1002789009
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@SwiftSneakEnchant@@UEBAHH@Z
     * @hash   1298438111
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@SwiftSneakEnchant@@UEBAHXZ
     * @hash   333463865
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -235350813
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -241884652
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -232580250
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIFTSNEAKENCHANT
    /**
     * @symbol ?isDiscoverable@SwiftSneakEnchant@@UEBA_NXZ
     * @hash   -1961745619
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @symbol ?isTreasureOnly@SwiftSneakEnchant@@UEBA_NXZ
     * @hash   -1579509227
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol ??0SwiftSneakEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   -916916767
     */
    MCAPI SwiftSneakEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol ?getExtraSneakingMovementFactor@SwiftSneakEnchant@@SAMAEBVActor@@@Z
     * @hash   1047304351
     */
    MCAPI static float getExtraSneakingMovementFactor(class Actor const &);
    /**
     * @symbol ?getLevel@SwiftSneakEnchant@@SAHAEBVActor@@@Z
     * @hash   -2006697795
     */
    MCAPI static int getLevel(class Actor const &);

};