/**
 * @file  ChunkMoveNeededSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkMoveNeededSystem.
 *
 */
class ChunkMoveNeededSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKMOVENEEDEDSYSTEM
public:
    class ChunkMoveNeededSystem& operator=(class ChunkMoveNeededSystem const &) = delete;
    ChunkMoveNeededSystem(class ChunkMoveNeededSystem const &) = delete;
    ChunkMoveNeededSystem() = delete;
#endif

public:
    /**
     * @symbol ?createChunkMoveNeededSystem@ChunkMoveNeededSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -876753368
     */
    MCAPI static struct TickingSystemWithInfo createChunkMoveNeededSystem();

};