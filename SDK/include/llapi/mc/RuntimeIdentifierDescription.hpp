/**
 * @file  RuntimeIdentifierDescription.hpp
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
 * @brief MC class RuntimeIdentifierDescription.
 *
 */
class RuntimeIdentifierDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMEIDENTIFIERDESCRIPTION
public:
    class RuntimeIdentifierDescription& operator=(class RuntimeIdentifierDescription const &) = delete;
    RuntimeIdentifierDescription(class RuntimeIdentifierDescription const &) = delete;
    RuntimeIdentifierDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1706737509
     */
    virtual ~RuntimeIdentifierDescription();
    /**
     * @vftbl  1
     * @symbol ?getJsonName@RuntimeIdentifierDescription@@UEBAPEBDXZ
     * @hash   -1953052743
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol ?parse@RuntimeIdentifierDescription@@QEAAXAEBVValue@Json@@@Z
     * @hash   -206530232
     */
    MCAPI void parse(class Json::Value const &);

};