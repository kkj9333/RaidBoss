/**
 * @file  StrengthDescription.hpp
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
 * @brief MC class StrengthDescription.
 *
 */
class StrengthDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRENGTHDESCRIPTION
public:
    class StrengthDescription& operator=(class StrengthDescription const &) = delete;
    StrengthDescription(class StrengthDescription const &) = delete;
    StrengthDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@StrengthDescription@@UEBAPEBDXZ
     * @hash   159151273
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   1242596041
     */
    virtual ~StrengthDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@StrengthDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -621398694
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@StrengthDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   1380168260
     */
    virtual void serializeData(class Json::Value &) const;

};