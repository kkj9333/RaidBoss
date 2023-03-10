/**
 * @file  SwimIdleDefinition.hpp
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
 * @brief MC class SwimIdleDefinition.
 *
 */
class SwimIdleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMIDLEDEFINITION
public:
    class SwimIdleDefinition& operator=(class SwimIdleDefinition const &) = delete;
    SwimIdleDefinition(class SwimIdleDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0SwimIdleDefinition@@QEAA@XZ
     * @hash   56412459
     */
    MCAPI SwimIdleDefinition();
    /**
     * @symbol ?initialize@SwimIdleDefinition@@QEAAXAEAVEntityContext@@AEAVSwimIdleGoal@@@Z
     * @hash   -627434137
     */
    MCAPI void initialize(class EntityContext &, class SwimIdleGoal &);
    /**
     * @symbol ?buildSchema@SwimIdleDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwimIdleDefinition@@@JsonUtil@@@3@@Z
     * @hash   151986855
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimIdleDefinition>> &);

};