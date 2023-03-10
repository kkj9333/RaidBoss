/**
 * @file  SculkSpreader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkSpreader.
 *
 */
class SculkSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSPREADER
public:
    class SculkSpreader& operator=(class SculkSpreader const &) = delete;
    SculkSpreader(class SculkSpreader const &) = delete;
#endif

public:
    /**
     * @symbol ??0SculkSpreader@@QEAA@_NHHHH@Z
     * @hash   1745660985
     */
    MCAPI SculkSpreader(bool, int, int, int, int);
    /**
     * @symbol ??0SculkSpreader@@QEAA@XZ
     * @hash   -1345065376
     */
    MCAPI SculkSpreader();
    /**
     * @symbol ?addCursors@SculkSpreader@@QEAAXAEBVBlockPos@@H@Z
     * @hash   -1480565967
     */
    MCAPI void addCursors(class BlockPos const &, int);
    /**
     * @symbol ?clearCursors@SculkSpreader@@QEAAXXZ
     * @hash   1508648387
     */
    MCAPI void clearCursors();
    /**
     * @symbol ?getAdditionalDecayRate@SculkSpreader@@QEBAHXZ
     * @hash   221438800
     */
    MCAPI int getAdditionalDecayRate() const;
    /**
     * @symbol ?getChargeDecayRate@SculkSpreader@@QEBAHXZ
     * @hash   1334676166
     */
    MCAPI int getChargeDecayRate() const;
    /**
     * @symbol ?getCursorPosition@SculkSpreader@@QEBA?AVBlockPos@@H@Z
     * @hash   514706429
     */
    MCAPI class BlockPos getCursorPosition(int) const;
    /**
     * @symbol ?getGrowthSpawnCost@SculkSpreader@@QEBAHXZ
     * @hash   565481772
     */
    MCAPI int getGrowthSpawnCost() const;
    /**
     * @symbol ?getMaxCharge@SculkSpreader@@QEBAHXZ
     * @hash   744130490
     */
    MCAPI int getMaxCharge() const;
    /**
     * @symbol ?getNoGrowthRadius@SculkSpreader@@QEBAHXZ
     * @hash   677854440
     */
    MCAPI int getNoGrowthRadius() const;
    /**
     * @symbol ?getNumberOfCursors@SculkSpreader@@QEBAHXZ
     * @hash   -2143622588
     */
    MCAPI int getNumberOfCursors() const;
    /**
     * @symbol ?getSculkReplaceableBlocks@SculkSpreader@@QEAAAEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
     * @hash   -582570923
     */
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const & getSculkReplaceableBlocks();
    /**
     * @symbol ?getTotalCharge@SculkSpreader@@QEBAHXZ
     * @hash   -901548502
     */
    MCAPI int getTotalCharge() const;
    /**
     * @symbol ?isWorldGen@SculkSpreader@@QEBA_NXZ
     * @hash   -1481669800
     */
    MCAPI bool isWorldGen() const;
    /**
     * @symbol ?load@SculkSpreader@@QEAAXAEBVCompoundTag@@@Z
     * @hash   215726536
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol ?save@SculkSpreader@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -525992674
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol ?updateCursors@SculkSpreader@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
     * @hash   930132793
     */
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);
    /**
     * @symbol ??1SculkSpreader@@QEAA@XZ
     * @hash   1180582848
     */
    MCAPI ~SculkSpreader();

};