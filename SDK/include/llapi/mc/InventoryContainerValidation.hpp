/**
 * @file  InventoryContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryContainerValidation.
 *
 */
class InventoryContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYCONTAINERVALIDATION
public:
    class InventoryContainerValidation& operator=(class InventoryContainerValidation const &) = delete;
    InventoryContainerValidation(class InventoryContainerValidation const &) = delete;
    InventoryContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1015939112
     */
    virtual ~InventoryContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   1450872642
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   1571140561
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1263526156
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@InventoryContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     * @hash   226438056
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @vftbl  6
     * @hash   -1261679114
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -1292414119
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@InventoryContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   1577302738
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@InventoryContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   80178226
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYCONTAINERVALIDATION
    /**
     * @symbol ?canItemMoveToContainer@InventoryContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   1045592741
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
#endif

};