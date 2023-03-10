/**
 * @file  AmbientSoundIntervalDefinition.hpp
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
 * @brief MC structure AmbientSoundIntervalDefinition.
 *
 */
struct AmbientSoundIntervalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDINTERVALDEFINITION
public:
    struct AmbientSoundIntervalDefinition& operator=(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition(struct AmbientSoundIntervalDefinition const &) = delete;
    AmbientSoundIntervalDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addDynamic@AmbientSoundIntervalDefinition@@QEAAXAEBUDynamicAmbientSound@@@Z
     * @hash   238693350
     */
    MCAPI void addDynamic(struct DynamicAmbientSound const &);
    /**
     * @symbol ?initialize@AmbientSoundIntervalDefinition@@QEAAXAEAVEntityContext@@AEAVAmbientSoundServerComponent@@@Z
     * @hash   -295046305
     */
    MCAPI void initialize(class EntityContext &, class AmbientSoundServerComponent &);
    /**
     * @symbol ?buildSchema@AmbientSoundIntervalDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UAmbientSoundIntervalDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1665431690
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct AmbientSoundIntervalDefinition>> &);

};