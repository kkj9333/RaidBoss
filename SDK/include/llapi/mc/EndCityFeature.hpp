/**
 * @file  EndCityFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndCityFeature.
 *
 */
class EndCityFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYFEATURE
public:
    class EndCityFeature& operator=(class EndCityFeature const &) = delete;
    EndCityFeature(class EndCityFeature const &) = delete;
    EndCityFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1056839174
     */
    virtual ~EndCityFeature();
    /**
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@EndCityFeature@@UEBA_NXZ
     * @hash   -1726113337
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@EndCityFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     * @hash   1281477415
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  5
     * @symbol ?isFeatureChunk@EndCityFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   1279674401
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol ?createStructureStart@EndCityFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     * @hash   1476085833
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol ??0EndCityFeature@@QEAA@AEAVDimension@@AEAI@Z
     * @hash   1671976253
     */
    MCAPI EndCityFeature(class Dimension &, unsigned int &);

};