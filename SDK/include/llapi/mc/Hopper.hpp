/**
 * @file  Hopper.hpp
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
 * @brief MC class Hopper.
 *
 */
class Hopper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPER
public:
    class Hopper& operator=(class Hopper const &) = delete;
    Hopper(class Hopper const &) = delete;
    Hopper() = delete;
#endif

public:
    /**
     * @symbol ??0Hopper@@QEAA@H_N@Z
     * @hash   1039849414
     */
    MCAPI Hopper(int, bool);
    /**
     * @symbol ?getCooldownTime@Hopper@@QEBAHXZ
     * @hash   376508486
     */
    MCAPI int getCooldownTime() const;
    /**
     * @symbol ?isOnCooldown@Hopper@@QEBA_NXZ
     * @hash   -1269457890
     */
    MCAPI bool isOnCooldown() const;
    /**
     * @symbol ?setCooldownTime@Hopper@@QEAAXH@Z
     * @hash   -2098384264
     */
    MCAPI void setCooldownTime(int);

//protected:
    /**
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z
     * @hash   -975492958
     */
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    /**
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVContainer@@AEAVItemActor@@@Z
     * @hash   811763965
     */
    MCAPI bool _addItem(class Container &, class ItemActor &);
    /**
     * @symbol ?_getAttachedContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@H@Z
     * @hash   -1582434133
     */
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol ?_getAttachedContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@H@Z
     * @hash   1228867532
     */
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol ?_getContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -389300544
     */
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getContainersAt@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -658332846
     */
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getItemAt@Hopper@@IEAAPEAVItemActor@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -48816530
     */
    MCAPI class ItemActor * _getItemAt(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getSourceContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   2111257434
     */
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_isEmptyContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
     * @hash   -830972022
     */
    MCAPI bool _isEmptyContainer(class Container &, int);
    /**
     * @symbol ?_isFullContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
     * @hash   -67521178
     */
    MCAPI bool _isFullContainer(class Container &, int);
    /**
     * @symbol ?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z
     * @hash   -708113808
     */
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int);
    /**
     * @symbol ?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z
     * @hash   -1892492708
     */
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int, bool);
    /**
     * @symbol ?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
     * @hash   -2086035582
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);
    /**
     * @symbol ?_tryPushToComposter@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@VBlockPos@@H@Z
     * @hash   -1089551968
     */
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int);
    /**
     * @symbol ?_tryTakeInItemFromSlot@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@1HH@Z
     * @hash   -1091373368
     */
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource &, class Container &, class Container &, int, int);

protected:

};