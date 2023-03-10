/**
 * @file  ActorIsRidingTest.hpp
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
 * @brief MC class ActorIsRidingTest.
 *
 */
class ActorIsRidingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISRIDINGTEST
public:
    class ActorIsRidingTest& operator=(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1027751444
     */
    virtual ~ActorIsRidingTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsRidingTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   490868504
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsRidingTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   340777994
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};