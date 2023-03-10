/**
 * @file  ShiftedValueAmplifier.hpp
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
 * @brief MC class ShiftedValueAmplifier.
 *
 */
class ShiftedValueAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDVALUEAMPLIFIER
public:
    class ShiftedValueAmplifier& operator=(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier(class ShiftedValueAmplifier const &) = delete;
    ShiftedValueAmplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -932510385
     */
    virtual ~ShiftedValueAmplifier();
    /**
     * @vftbl  1
     * @symbol ?getAmount@ShiftedValueAmplifier@@UEBAMHM@Z
     * @hash   -178969138
     */
    virtual float getAmount(int, float) const;
    /**
     * @symbol ??0ShiftedValueAmplifier@@QEAA@HM@Z
     * @hash   -566906365
     */
    MCAPI ShiftedValueAmplifier(int, float);

};