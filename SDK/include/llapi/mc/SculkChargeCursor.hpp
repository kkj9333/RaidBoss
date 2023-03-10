/**
 * @file  SculkChargeCursor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkChargeCursor.
 *
 */
class SculkChargeCursor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKCHARGECURSOR
public:
    class SculkChargeCursor& operator=(class SculkChargeCursor const &) = delete;
    SculkChargeCursor(class SculkChargeCursor const &) = delete;
    SculkChargeCursor() = delete;
#endif

public:
    /**
     * @symbol ??0SculkChargeCursor@@QEAA@AEBVCompoundTag@@@Z
     * @hash   -1755086323
     */
    MCAPI SculkChargeCursor(class CompoundTag const &);
    /**
     * @symbol ??0SculkChargeCursor@@QEAA@AEBVBlockPos@@H@Z
     * @hash   1416953186
     */
    MCAPI SculkChargeCursor(class BlockPos const &, int);
    /**
     * @symbol ?addFrom@SculkChargeCursor@@QEAAXAEBV1@@Z
     * @hash   -1082369047
     */
    MCAPI void addFrom(class SculkChargeCursor const &);
    /**
     * @symbol ?load@SculkChargeCursor@@QEAAXAEBVCompoundTag@@@Z
     * @hash   829153144
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol ?save@SculkChargeCursor@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -835810178
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol ?update@SculkChargeCursor@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@_N@Z
     * @hash   -1457756632
     */
    MCAPI void update(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, class SculkSpreader &, bool);

//private:
    /**
     * @symbol ?_getNonCornerNeighborsOffsets@SculkChargeCursor@@CA?AV?$array@VBlockPos@@$0BC@@std@@AEAVRandom@@@Z
     * @hash   -1214032458
     */
    MCAPI static class std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random &);
    /**
     * @symbol ?_getSculkBehavior@SculkChargeCursor@@CAAEBVSculkBehavior@@AEBVBlock@@@Z
     * @hash   1746838646
     */
    MCAPI static class SculkBehavior const & _getSculkBehavior(class Block const &);
    /**
     * @symbol ?_isMovementUnobstructed@SculkChargeCursor@@CA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1@Z
     * @hash   -1012477852
     */
    MCAPI static bool _isMovementUnobstructed(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &);

private:
    /**
     * @symbol ?sDefaultSculkBehavior@SculkChargeCursor@@0VDefaultSculkBehavior@@B
     * @hash   1288309977
     */
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;
    /**
     * @symbol ?sSculkBlockBehavior@SculkChargeCursor@@0VSculkBlockBehavior@@B
     * @hash   -377148575
     */
    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;
    /**
     * @symbol ?sSculkVeinBlockBehavior@SculkChargeCursor@@0VSculkVeinBlockBehavior@@B
     * @hash   -552186519
     */
    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;

};