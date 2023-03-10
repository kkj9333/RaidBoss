/**
 * @file  AcaciaTreeCanopy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AcaciaTreeCanopy.
 *
 */
class AcaciaTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACACIATREECANOPY
public:
    class AcaciaTreeCanopy& operator=(class AcaciaTreeCanopy const &) = delete;
    AcaciaTreeCanopy(class AcaciaTreeCanopy const &) = delete;
    AcaciaTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -193091220
     */
    virtual ~AcaciaTreeCanopy();
    /**
     * @vftbl  1
     * @symbol ?placeCanopy@AcaciaTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
     * @hash   400884196
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

};