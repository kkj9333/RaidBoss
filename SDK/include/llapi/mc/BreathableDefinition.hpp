/**
 * @file  BreathableDefinition.hpp
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
 * @brief MC class BreathableDefinition.
 *
 */
class BreathableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLEDEFINITION
public:
    class BreathableDefinition& operator=(class BreathableDefinition const &) = delete;
    BreathableDefinition(class BreathableDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BreathableDefinition@@QEAA@XZ
     * @hash   1655136873
     */
    MCAPI BreathableDefinition();
    /**
     * @symbol ?addBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
     * @hash   1111749432
     */
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ?addNonBreathableBlockDescriptor@BreathableDefinition@@QEAAXAEBVBlockDescriptor@@@Z
     * @hash   1540314938
     */
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ?initialize@BreathableDefinition@@QEAAXAEAVEntityContext@@AEAVBreathableComponent@@@Z
     * @hash   529747247
     */
    MCAPI void initialize(class EntityContext &, class BreathableComponent &);
    /**
     * @symbol ?buildSchema@BreathableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBreathableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1707242074
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>> &);

};