/**
 * @file  MoveDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveDefinition.
 *
 */
class MoveDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEDEFINITION
public:
    class MoveDefinition& operator=(class MoveDefinition const &) = delete;
    MoveDefinition(class MoveDefinition const &) = delete;
    MoveDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -448255794
     */
    virtual ~MoveDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@MoveDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   -2048317168
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};