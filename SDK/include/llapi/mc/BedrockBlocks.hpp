/**
 * @file  BedrockBlocks.hpp
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
 * @brief MC namespace BedrockBlocks.
 *
 */
namespace BedrockBlocks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?assignBlocks@BedrockBlocks@@YAXXZ
     * @hash   1185513334
     */
    MCAPI void assignBlocks();
    /**
     * @symbol ?mAir@BedrockBlocks@@3PEBVBlock@@EB
     * @hash   1394321556
     */
    MCAPI extern class Block const * mAir;
    /**
     * @symbol ?mClientRequestPlaceholderBlock@BedrockBlocks@@3PEBVBlock@@EB
     * @hash   421437148
     */
    MCAPI extern class Block const * mClientRequestPlaceholderBlock;
    /**
     * @symbol ?mUnknown@BedrockBlocks@@3PEBVBlock@@EB
     * @hash   -510895068
     */
    MCAPI extern class Block const * mUnknown;
    /**
     * @symbol ?unassignBlocks@BedrockBlocks@@YAXXZ
     * @hash   -1622022888
     */
    MCAPI void unassignBlocks();

};