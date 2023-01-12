/**
 * @file  ActorIsSneakingTest.hpp
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
 * @brief MC class ActorIsSneakingTest.
 *
 */
class ActorIsSneakingTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISSNEAKINGTEST
public:
    class ActorIsSneakingTest& operator=(class ActorIsSneakingTest const &) = delete;
    ActorIsSneakingTest(class ActorIsSneakingTest const &) = delete;
    ActorIsSneakingTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1709386093
     */
    virtual ~ActorIsSneakingTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsSneakingTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   1957380721
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsSneakingTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -1656099999
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};