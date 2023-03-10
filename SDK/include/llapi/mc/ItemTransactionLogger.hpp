/**
 * @file  ItemTransactionLogger.hpp
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
 * @brief MC namespace ItemTransactionLogger.
 *
 */
namespace ItemTransactionLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?initializeLogger@ItemTransactionLogger@@YAX_N@Z
     * @hash   1527364517
     */
    MCAPI void initializeLogger(bool);
    /**
     * @symbol ?log@ItemTransactionLogger@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1436765119
     */
    MCAPI void log(std::string const &);
    /**
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVInventoryAction@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1090703106
     */
    MCAPI void log(class InventoryAction const &, std::string const &);
    /**
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVInventoryTransactionPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1408096802
     */
    MCAPI void log(class InventoryTransactionPacket const &, std::string const &);
    /**
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVItemStack@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1571375612
     */
    MCAPI void log(class ItemStack const &, std::string const &);
    /**
     * @symbol ?log@ItemTransactionLogger@@YAXAEBVItemStackResponsePacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   644102006
     */
    MCAPI void log(class ItemStackResponsePacket const &, std::string const &);

};