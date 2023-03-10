/**
 * @file  ItemUseInventoryTransaction.hpp
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
 * @brief MC class ItemUseInventoryTransaction.
 *
 */
class ItemUseInventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
enum class ActionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEINVENTORYTRANSACTION
public:
    ItemUseInventoryTransaction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   81521092
     */
    virtual ~ItemUseInventoryTransaction();
    /**
     * @vftbl  1
     * @symbol ?read@ItemUseInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z
     * @hash   -1029691718
     */
    virtual void read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  2
     * @symbol ?write@ItemUseInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1738599106
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  3
     * @symbol ?postLoadItems@ItemUseInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z
     * @hash   1295412513
     */
    virtual void postLoadItems(class BlockPalette &, bool);
    /**
     * @vftbl  4
     * @symbol ?handle@ItemUseInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     * @hash   562385707
     */
    virtual enum class InventoryTransactionError handle(class Player &, bool) const;
    /**
     * @vftbl  5
     * @symbol ?onTransactionError@ItemUseInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z
     * @hash   -569117014
     */
    virtual void onTransactionError(class Player &, enum class InventoryTransactionError) const;
    /**
     * @symbol ??0ItemUseInventoryTransaction@@QEAA@AEBV0@@Z
     * @hash   -1752554063
     */
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &);
    /**
     * @symbol ??4ItemUseInventoryTransaction@@QEAAAEAV0@AEBV0@@Z
     * @hash   1922405500
     */
    MCAPI class ItemUseInventoryTransaction & operator=(class ItemUseInventoryTransaction const &);
    /**
     * @symbol ?resendBlocksAroundArea@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -1705140795
     */
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?resendPlayerState@ItemUseInventoryTransaction@@QEBAXAEAVPlayer@@@Z
     * @hash   -969358428
     */
    MCAPI void resendPlayerState(class Player &) const;
    /**
     * @symbol ?setSelectedItem@ItemUseInventoryTransaction@@QEAAAEAV1@AEBVItemStack@@@Z
     * @hash   -269814512
     */
    MCAPI class ItemUseInventoryTransaction & setSelectedItem(class ItemStack const &);

//private:

private:
    /**
     * @symbol ?actionTypeMap@ItemUseInventoryTransaction@@0V?$BidirectionalUnorderedMap@W4ActionType@ItemUseInventoryTransaction@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     * @hash   1183641917
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;

};