/**
 * @file  OverworldNoises3d.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkLocalNoiseCache.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure OverworldNoises3d.
 *
 */
struct OverworldNoises3d {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDNOISES3D
public:
    struct OverworldNoises3d& operator=(struct OverworldNoises3d const &) = delete;
    OverworldNoises3d() = delete;
#endif

public:
    /**
     * @symbol ??0OverworldNoises3d@@QEAA@AEBU0@@Z
     * @hash   -1344188635
     */
    MCAPI OverworldNoises3d(struct OverworldNoises3d const &);
    /**
     * @symbol ?computeErosionAndDepth@OverworldNoises3d@@QEBA?AU?$pair@MM@std@@VBlockPos@@@Z
     * @hash   -112057548
     */
    MCAPI struct std::pair<float, float> computeErosionAndDepth(class BlockPos) const;
    /**
     * @symbol ?computeNoiseValues@OverworldNoises3d@@QEBA?AUCacheEntry@ChunkLocalNoiseCache@@AEBV?$DividedPos2d@$03@@@Z
     * @hash   2095191851
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry computeNoiseValues(class DividedPos2d<4> const &) const;
    /**
     * @symbol ?computeOffsetAndFactor@OverworldNoises3d@@QEBA?AUTerrainInfo@@AEBV?$DividedPos2d@$03@@@Z
     * @hash   877086455
     */
    MCAPI struct TerrainInfo computeOffsetAndFactor(class DividedPos2d<4> const &) const;
    /**
     * @symbol ?sample@OverworldNoises3d@@QEBA?AUTargetPoint@@HAEBUCacheEntry@ChunkLocalNoiseCache@@@Z
     * @hash   1483180856
     */
    MCAPI struct TargetPoint sample(int, struct ChunkLocalNoiseCache::CacheEntry const &) const;
    /**
     * @symbol ?sample@OverworldNoises3d@@QEBA?AUTargetPoint@@VBlockPos@@@Z
     * @hash   1730211211
     */
    MCAPI struct TargetPoint sample(class BlockPos) const;
    /**
     * @symbol ??1OverworldNoises3d@@QEAA@XZ
     * @hash   1831377620
     */
    MCAPI ~OverworldNoises3d();
    /**
     * @symbol ?computeInitialDensity@OverworldNoises3d@@SAMHMMM@Z
     * @hash   -1060517198
     */
    MCAPI static float computeInitialDensity(int, float, float, float);
    /**
     * @symbol ?make@OverworldNoises3d@@SA?AU1@AEBVXoroshiroPositionalRandomFactory@@@Z
     * @hash   -77475384
     */
    MCAPI static struct OverworldNoises3d make(class XoroshiroPositionalRandomFactory const &);

//private:
    /**
     * @symbol ??0OverworldNoises3d@@AEAA@V?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@000000@Z
     * @hash   -1581554854
     */
    MCAPI OverworldNoises3d(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);
    /**
     * @symbol ?_computeBaseValueSetForCacheEntry@OverworldNoises3d@@AEBA?AUCacheEntry@ChunkLocalNoiseCache@@AEBV?$DividedPos2d@$03@@@Z
     * @hash   -527283270
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry _computeBaseValueSetForCacheEntry(class DividedPos2d<4> const &) const;

};