/**
 * @file  JumpInputSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpInputSystem.
 *
 */
class JumpInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINPUTSYSTEM
public:
    class JumpInputSystem& operator=(class JumpInputSystem const &) = delete;
    JumpInputSystem(class JumpInputSystem const &) = delete;
    JumpInputSystem() = delete;
#endif

public:
    /**
     * @symbol ?createJumpInputSystem@JumpInputSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1802803354
     */
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem();

};