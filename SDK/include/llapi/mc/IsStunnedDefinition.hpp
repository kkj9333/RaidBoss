/**
 * @file  IsStunnedDefinition.hpp
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
 * @brief MC structure IsStunnedDefinition.
 *
 */
struct IsStunnedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTUNNEDDEFINITION
public:
    struct IsStunnedDefinition& operator=(struct IsStunnedDefinition const &) = delete;
    IsStunnedDefinition(struct IsStunnedDefinition const &) = delete;
    IsStunnedDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@IsStunnedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -863618434
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsStunnedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   1690296988
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsStunnedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsStunnedDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1368170150
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStunnedDefinition>> &);

};