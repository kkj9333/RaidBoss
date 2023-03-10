/**
 * @file  CollisionBoxDefinition.hpp
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
 * @brief MC structure CollisionBoxDefinition.
 *
 */
struct CollisionBoxDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXDEFINITION
public:
    struct CollisionBoxDefinition& operator=(struct CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition(struct CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition() = delete;
#endif

public:
    /**
     * @symbol ?setHeight@CollisionBoxDefinition@@QEAAXAEBM@Z
     * @hash   1910023859
     */
    MCAPI void setHeight(float const &);
    /**
     * @symbol ?setWidth@CollisionBoxDefinition@@QEAAXAEBM@Z
     * @hash   1192341503
     */
    MCAPI void setWidth(float const &);
    /**
     * @symbol ?buildSchema@CollisionBoxDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCollisionBoxDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1113445510
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CollisionBoxDefinition>> &);
    /**
     * @symbol ?mBoxEpsilon@CollisionBoxDefinition@@2MB
     * @hash   738953287
     */
    MCAPI static float const mBoxEpsilon;

};