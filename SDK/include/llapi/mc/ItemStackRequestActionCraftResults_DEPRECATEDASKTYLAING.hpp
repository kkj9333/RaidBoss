/**
 * @file  ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.hpp
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
 * @brief MC class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING.
 *
 */
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
public:
    class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING& operator=(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTRESULTS_DEPRECATEDASKTYLAING
    /**
     * @symbol ?_read@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   1056573541
     */
    MCVAPI bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?_write@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@MEBAXAEAVBinaryStream@@@Z
     * @hash   854072253
     */
    MCVAPI void _write(class BinaryStream &) const;
    /**
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@UEAAXAEAVBlockPalette@@_N@Z
     * @hash   -1340799111
     */
    MCVAPI void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
#endif
    /**
     * @symbol ??0ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEAA@XZ
     * @hash   -1189599449
     */
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
    /**
     * @symbol ?getNumCrafts@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEBAEXZ
     * @hash   1907958749
     */
    MCAPI unsigned char getNumCrafts() const;
    /**
     * @symbol ?getResults@ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@QEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   873033514
     */
    MCAPI std::vector<class ItemInstance> const & getResults() const;

};