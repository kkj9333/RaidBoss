/**
 * @file  LegacyBlockPlacementProcessor.hpp
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
 * @brief MC class LegacyBlockPlacementProcessor.
 *
 */
class LegacyBlockPlacementProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLOCKPLACEMENTPROCESSOR
public:
    class LegacyBlockPlacementProcessor& operator=(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;
#endif

public:
    /**
     * @symbol ??0LegacyBlockPlacementProcessor@@QEAA@AEBVLegacyStructureSettings@@@Z
     * @hash   -1984961730
     */
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);
    /**
     * @symbol ?applyBlockRules@LegacyBlockPlacementProcessor@@QEAAPEBVBlock@@AEAVBlockSource@@AEAVBlockPos@@PEBV2@AEBV4@@Z
     * @hash   -1526861508
     */
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);
    /**
     * @symbol ?applyGravity@LegacyBlockPlacementProcessor@@QEBAAEAVBlockPos@@AEAVBlockSource@@HAEAV2@@Z
     * @hash   368905992
     */
    MCAPI class BlockPos & applyGravity(class BlockSource &, int, class BlockPos &) const;
    /**
     * @symbol ?canPlace@LegacyBlockPlacementProcessor@@QEAA_NXZ
     * @hash   -1770253970
     */
    MCAPI bool canPlace();
    /**
     * @symbol ??1LegacyBlockPlacementProcessor@@QEAA@XZ
     * @hash   283618941
     */
    MCAPI ~LegacyBlockPlacementProcessor();

};