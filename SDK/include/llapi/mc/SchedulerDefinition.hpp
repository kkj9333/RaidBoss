/**
 * @file  SchedulerDefinition.hpp
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
 * @brief MC class SchedulerDefinition.
 *
 */
class SchedulerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERDEFINITION
public:
    class SchedulerDefinition& operator=(class SchedulerDefinition const &) = delete;
    SchedulerDefinition(class SchedulerDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0SchedulerDefinition@@QEAA@XZ
     * @hash   1293795370
     */
    MCAPI SchedulerDefinition();
    /**
     * @symbol ?initialize@SchedulerDefinition@@QEAAXAEAVEntityContext@@AEAVSchedulerComponent@@@Z
     * @hash   2096262581
     */
    MCAPI void initialize(class EntityContext &, class SchedulerComponent &);
    /**
     * @symbol ?setMaxDelayTicks@SchedulerDefinition@@QEAAXAEBM@Z
     * @hash   -1490185271
     */
    MCAPI void setMaxDelayTicks(float const &);
    /**
     * @symbol ?setMinDelayTicks@SchedulerDefinition@@QEAAXAEBM@Z
     * @hash   507454761
     */
    MCAPI void setMinDelayTicks(float const &);
    /**
     * @symbol ?buildSchema@SchedulerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSchedulerDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1319297742
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>> &);

};