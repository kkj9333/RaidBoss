/**
 * @file  RepeatUntilSuccessNode.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeatUntilSuccessNode.
 *
 */
class RepeatUntilSuccessNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSNODE
public:
    class RepeatUntilSuccessNode& operator=(class RepeatUntilSuccessNode const &) = delete;
    RepeatUntilSuccessNode(class RepeatUntilSuccessNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1272870380
     */
    virtual ~RepeatUntilSuccessNode();
    /**
     * @vftbl  1
     * @symbol ?tick@RepeatUntilSuccessNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -423473985
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@RepeatUntilSuccessNode@@MEAAXAEAVActor@@@Z
     * @hash   -1436510980
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0RepeatUntilSuccessNode@@QEAA@XZ
     * @hash   1745622030
     */
    MCAPI RepeatUntilSuccessNode();

};