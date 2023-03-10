/**
 * @file  DeadBushFeature.hpp
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
 * @brief MC class DeadBushFeature.
 *
 */
class DeadBushFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEADBUSHFEATURE
public:
    class DeadBushFeature& operator=(class DeadBushFeature const &) = delete;
    DeadBushFeature(class DeadBushFeature const &) = delete;
    DeadBushFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1860586552
     */
    virtual ~DeadBushFeature();
    /**
     * @vftbl  3
     * @symbol ?place@DeadBushFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1299107524
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};