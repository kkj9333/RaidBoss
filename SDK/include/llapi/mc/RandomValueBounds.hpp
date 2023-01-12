/**
 * @file  RandomValueBounds.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomValueBounds.
 *
 */
class RandomValueBounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMVALUEBOUNDS
public:
    class RandomValueBounds& operator=(class RandomValueBounds const &) = delete;
    RandomValueBounds(class RandomValueBounds const &) = delete;
    RandomValueBounds() = delete;
#endif

public:
    /**
     * @symbol ?deserialize@RandomValueBounds@@QEAAXAEBVValue@Json@@@Z
     * @hash   -958484912
     */
    MCAPI void deserialize(class Json::Value const &);
    /**
     * @symbol ?getFloat@RandomValueBounds@@QEBAMAEAVRandom@@@Z
     * @hash   -98294757
     */
    MCAPI float getFloat(class Random &) const;
    /**
     * @symbol ?getInt@RandomValueBounds@@QEBAHAEAVRandom@@@Z
     * @hash   -115284669
     */
    MCAPI int getInt(class Random &) const;
    /**
     * @symbol ?getMax@RandomValueBounds@@QEBAMXZ
     * @hash   1487371840
     */
    MCAPI float getMax() const;
    /**
     * @symbol ?getMin@RandomValueBounds@@QEBAMXZ
     * @hash   -838366196
     */
    MCAPI float getMin() const;

};