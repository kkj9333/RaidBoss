/**
 * @file  MineshaftUtil.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MineshaftUtil.
 *
 */
namespace MineshaftUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_isLava@MineshaftUtil@@YA_NAEBVBlockLegacy@@@Z
     * @hash   161804432
     */
    MCAPI bool _isLava(class BlockLegacy const &);
    /**
     * @symbol ?fillColumnBetween@MineshaftUtil@@YAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@HH@Z
     * @hash   1319278243
     */
    MCAPI void fillColumnBetween(class BlockSource &, class Block const &, class BlockPos const &, int, int);
    /**
     * @symbol ?isCavesAndCliffs@MineshaftUtil@@YA_NAEBVLevel@@@Z
     * @hash   -2030549886
     */
    MCAPI bool isCavesAndCliffs(class Level const &);

};