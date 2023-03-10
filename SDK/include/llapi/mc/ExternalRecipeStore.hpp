/**
 * @file  ExternalRecipeStore.hpp
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
 * @brief MC class ExternalRecipeStore.
 *
 */
class ExternalRecipeStore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALRECIPESTORE
public:
    class ExternalRecipeStore& operator=(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore(class ExternalRecipeStore const &) = delete;
    ExternalRecipeStore() = delete;
#endif

public:
    /**
     * @symbol ?registerBlockReduction@ExternalRecipeStore@@QEAAXAEBVItemStack@@$$QEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   -1876645205
     */
    MCAPI void registerBlockReduction(class ItemStack const &, std::vector<class ItemStack> &&);
    /**
     * @symbol ?setBlockReducer@ExternalRecipeStore@@QEAAXPEAVBlockReducer@@@Z
     * @hash   -1284585303
     */
    MCAPI void setBlockReducer(class BlockReducer *);

};