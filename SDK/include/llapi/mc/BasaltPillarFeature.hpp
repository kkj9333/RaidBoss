/**
 * @file  BasaltPillarFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasaltPillarFeature.
 *
 */
class BasaltPillarFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASALTPILLARFEATURE
public:
    class BasaltPillarFeature& operator=(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   86723877
     */
    virtual ~BasaltPillarFeature();
    /**
     * @vftbl  3
     * @symbol ?place@BasaltPillarFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1527378881
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol ?_growColumn@BasaltPillarFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@M@Z
     * @hash   -652075923
     */
    MCAPI bool _growColumn(class BlockSource &, class BlockPos const &, class Random &, float) const;

private:

};