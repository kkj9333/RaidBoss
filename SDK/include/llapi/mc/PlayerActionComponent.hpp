/**
 * @file  PlayerActionComponent.hpp
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
 * @brief MC structure PlayerActionComponent.
 *
 */
struct PlayerActionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERACTIONCOMPONENT
public:
    struct PlayerActionComponent& operator=(struct PlayerActionComponent const &) = delete;
    PlayerActionComponent(struct PlayerActionComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0PlayerActionComponent@@QEAA@XZ
     * @hash   -293976046
     */
    MCAPI PlayerActionComponent();
    /**
     * @symbol ??0PlayerActionComponent@@QEAA@$$QEAU0@@Z
     * @hash   2080039891
     */
    MCAPI PlayerActionComponent(struct PlayerActionComponent &&);
    /**
     * @symbol ?addAbortDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     * @hash   -125959107
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol ?addContinueDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     * @hash   -1155198453
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol ?addStartDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
     * @hash   -595301219
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol ?addStopDestroyBlock@PlayerActionComponent@@QEAAXXZ
     * @hash   -1512182239
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @symbol ??4PlayerActionComponent@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -1500800612
     */
    MCAPI struct PlayerActionComponent & operator=(struct PlayerActionComponent &&);
    /**
     * @symbol ??1PlayerActionComponent@@QEAA@XZ
     * @hash   -947695038
     */
    MCAPI ~PlayerActionComponent();

};