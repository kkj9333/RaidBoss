/**
 * @file  SparseContainer.hpp
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
 * @brief MC class SparseContainer.
 *
 */
class SparseContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINER
public:
    class SparseContainer& operator=(class SparseContainer const &) = delete;
    SparseContainer(class SparseContainer const &) = delete;
    SparseContainer() = delete;
#endif

public:
    /**
     * @symbol ?_isSlotInRange@SparseContainer@@QEBA_NH@Z
     * @hash   -1338204021
     */
    MCAPI bool _isSlotInRange(int) const;
    /**
     * @symbol ?addItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@V?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     * @hash   -558484181
     */
    MCAPI void addItemNetworkChangedCallback(enum class ContainerEnumName, class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @symbol ?isUsingLegacyScreenTransactions@SparseContainer@@QEBA_NXZ
     * @hash   -984374196
     */
    MCAPI bool isUsingLegacyScreenTransactions() const;
    /**
     * @symbol ?removeItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@@Z
     * @hash   1115068378
     */
    MCAPI void removeItemNetworkChangedCallback(enum class ContainerEnumName);

//protected:
    /**
     * @symbol ?_onItemNetworkChanged@SparseContainer@@IEAAXHAEBVItemStack@@0@Z
     * @hash   1436068038
     */
    MCAPI void _onItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ?_setBackingContainerSlot@SparseContainer@@IEAAXHAEBVItemStack@@@Z
     * @hash   -905223570
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

protected:

};