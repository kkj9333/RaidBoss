/**
 * @file  ItemStackRequestActionCraftHandler.hpp
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
 * @brief MC class ItemStackRequestActionCraftHandler.
 *
 */
class ItemStackRequestActionCraftHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTHANDLER
public:
    class ItemStackRequestActionCraftHandler& operator=(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler() = delete;
#endif

public:
    /**
     * @symbol ??0ItemStackRequestActionCraftHandler@@QEAA@AEAVItemStackRequestActionHandler@@AEAVPlayer@@@Z
     * @hash   1820680400
     */
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler &, class Player &);
    /**
     * @symbol ?_getOrInitSparseContainer@ItemStackRequestActionCraftHandler@@QEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
     * @hash   51059236
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum class ContainerEnumName);
    /**
     * @symbol ?_initCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@E@Z
     * @hash   1645563031
     */
    MCAPI enum class ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const &, unsigned char);
    /**
     * @symbol ?_initSingleCraftResult@ItemStackRequestActionCraftHandler@@QEAAPEAVItemInstance@@AEBV2@@Z
     * @hash   239580122
     */
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    /**
     * @symbol ?_validateRequestSlot@ItemStackRequestActionCraftHandler@@QEAA?AUItemStackRequestHandlerSlotInfo@@AEBUItemStackRequestSlotInfo@@@Z
     * @hash   -1171122399
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &);
    /**
     * @symbol ?endRequest@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W42@@Z
     * @hash   -2131297294
     */
    MCAPI enum class ItemStackNetResult endRequest(enum class ItemStackNetResult);
    /**
     * @symbol ?endRequestBatch@ItemStackRequestActionCraftHandler@@QEAAXXZ
     * @hash   -1863861453
     */
    MCAPI void endRequestBatch();
    /**
     * @symbol ?handleConsume@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionConsume@@@Z
     * @hash   750606875
     */
    MCAPI enum class ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const &);
    /**
     * @symbol ?handleCraftAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     * @hash   1284449901
     */
    MCAPI enum class ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @symbol ?handleCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@@Z
     * @hash   -1276304501
     */
    MCAPI enum class ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &);
    /**
     * @symbol ?handleCreate@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCreate@@@Z
     * @hash   317757839
     */
    MCAPI enum class ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const &);
    /**
     * @symbol ?isCraftRequest@ItemStackRequestActionCraftHandler@@QEBA_NXZ
     * @hash   377467692
     */
    MCAPI bool isCraftRequest() const;
    /**
     * @symbol ?onContainerScreenOpen@ItemStackRequestActionCraftHandler@@QEAAXAEBVContainerScreenContext@@@Z
     * @hash   -661871432
     */
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @symbol ?postRequest@ItemStackRequestActionCraftHandler@@QEAAX_N@Z
     * @hash   -1460869918
     */
    MCAPI void postRequest(bool);
    /**
     * @symbol ?preHandleAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
     * @hash   -908772925
     */
    MCAPI enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);

//private:
    /**
     * @symbol ?_createCraftInputs@ItemStackRequestActionCraftHandler@@AEAA?AV?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@AEBVItemStackRequestActionCraftBase@@@Z
     * @hash   1534540627
     */
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs> _createCraftInputs(class ItemStackRequestActionCraftBase const &);
    /**
     * @symbol ?_setCreatedItemOutputSlot@ItemStackRequestActionCraftHandler@@AEAA?AW4ItemStackNetResult@@E@Z
     * @hash   -1241698361
     */
    MCAPI enum class ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);

private:

};