/**
 * @file  FancyTreeCanopy.hpp
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
 * @brief MC class FancyTreeCanopy.
 *
 */
class FancyTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FANCYTREECANOPY
public:
    class FancyTreeCanopy& operator=(class FancyTreeCanopy const &) = delete;
    FancyTreeCanopy(class FancyTreeCanopy const &) = delete;
    FancyTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1089151645
     */
    virtual ~FancyTreeCanopy();
    /**
     * @vftbl  1
     * @symbol ?placeCanopy@FancyTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
     * @hash   605946439
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

};