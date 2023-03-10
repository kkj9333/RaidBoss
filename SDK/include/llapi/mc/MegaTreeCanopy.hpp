/**
 * @file  MegaTreeCanopy.hpp
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
 * @brief MC class MegaTreeCanopy.
 *
 */
class MegaTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGATREECANOPY
public:
    class MegaTreeCanopy& operator=(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   618662658
     */
    virtual ~MegaTreeCanopy();
    /**
     * @vftbl  1
     * @symbol ?placeCanopy@MegaTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
     * @hash   503547214
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

};