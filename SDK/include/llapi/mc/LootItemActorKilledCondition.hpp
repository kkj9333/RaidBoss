/**
 * @file  LootItemActorKilledCondition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemActorKilledCondition.
 *
 */
class LootItemActorKilledCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORKILLEDCONDITION
public:
    class LootItemActorKilledCondition& operator=(class LootItemActorKilledCondition const &) = delete;
    LootItemActorKilledCondition(class LootItemActorKilledCondition const &) = delete;
    LootItemActorKilledCondition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   880603438
     */
    virtual ~LootItemActorKilledCondition();
    /**
     * @vftbl  1
     * @symbol ?applies@LootItemActorKilledCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   -52504229
     */
    virtual bool applies(class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@LootItemActorKilledCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
     * @hash   -941677163
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};