/**
 * @file  DamageSensorDefinition.hpp
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
 * @brief MC class DamageSensorDefinition.
 *
 */
class DamageSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORDEFINITION
public:
    class DamageSensorDefinition& operator=(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition(class DamageSensorDefinition const &) = delete;
    DamageSensorDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addDamageSensorTrigger@DamageSensorDefinition@@QEAAXAEBUDamageSensorTrigger@@@Z
     * @hash   -219209996
     */
    MCAPI void addDamageSensorTrigger(struct DamageSensorTrigger const &);
    /**
     * @symbol ?initialize@DamageSensorDefinition@@QEBAXAEAVEntityContext@@AEAVDamageSensorComponent@@@Z
     * @hash   -1448841573
     */
    MCAPI void initialize(class EntityContext &, class DamageSensorComponent &) const;
    /**
     * @symbol ?uninitialize@DamageSensorDefinition@@QEBAXAEAVEntityContext@@AEAVDamageSensorComponent@@@Z
     * @hash   -896664229
     */
    MCAPI void uninitialize(class EntityContext &, class DamageSensorComponent &) const;
    /**
     * @symbol ?buildSchema@DamageSensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDamageSensorDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1420933190
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DamageSensorDefinition>> &);

};