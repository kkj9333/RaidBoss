/**
 * @file  ActorBoolPropertyTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorBoolPropertyTest.
 *
 */
class ActorBoolPropertyTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORBOOLPROPERTYTEST
public:
    class ActorBoolPropertyTest& operator=(class ActorBoolPropertyTest const &) = delete;
    ActorBoolPropertyTest(class ActorBoolPropertyTest const &) = delete;
    ActorBoolPropertyTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -470760460
     */
    virtual ~ActorBoolPropertyTest();
    /**
     * @vftbl  1
     * @symbol ?setup@ActorBoolPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     * @hash   -1580606940
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorBoolPropertyTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   968723768
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?getName@ActorBoolPropertyTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1672505674
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @vftbl  5
     * @symbol ?_serializeDomain@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
     * @hash   1269825598
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl  6
     * @symbol ?_serializeValue@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
     * @hash   -637808775
     */
    virtual class Json::Value _serializeValue() const;

};