/**
 * @file  OnWakeWithOwnerDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnWakeWithOwnerDefinition.
 *
 */
struct OnWakeWithOwnerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONWAKEWITHOWNERDEFINITION
public:
    struct OnWakeWithOwnerDefinition& operator=(struct OnWakeWithOwnerDefinition const &) = delete;
    OnWakeWithOwnerDefinition(struct OnWakeWithOwnerDefinition const &) = delete;
    OnWakeWithOwnerDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@OnWakeWithOwnerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnWakeWithOwnerDefinition@@@JsonUtil@@@std@@@Z
     * @hash   967268152
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnWakeWithOwnerDefinition>> &);

};