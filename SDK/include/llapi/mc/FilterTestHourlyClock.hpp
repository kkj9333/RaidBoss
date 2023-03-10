/**
 * @file  FilterTestHourlyClock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestHourlyClock.
 *
 */
class FilterTestHourlyClock : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTHOURLYCLOCK
public:
    class FilterTestHourlyClock& operator=(class FilterTestHourlyClock const &) = delete;
    FilterTestHourlyClock(class FilterTestHourlyClock const &) = delete;
    FilterTestHourlyClock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   194195169
     */
    virtual ~FilterTestHourlyClock();
    /**
     * @vftbl  1
     * @symbol ?setup@FilterTestHourlyClock@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     * @hash   1103620791
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestHourlyClock@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1435806155
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestHourlyClock@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -2099677475
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};