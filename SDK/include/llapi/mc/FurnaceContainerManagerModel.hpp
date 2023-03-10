/**
 * @file  FurnaceContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceContainerManagerModel.
 *
 */
class FurnaceContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERMANAGERMODEL
public:
    class FurnaceContainerManagerModel& operator=(class FurnaceContainerManagerModel const &) = delete;
    FurnaceContainerManagerModel(class FurnaceContainerManagerModel const &) = delete;
    FurnaceContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -882436113
     */
    virtual ~FurnaceContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@FurnaceContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   1315136282
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@FurnaceContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -392174811
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@FurnaceContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   950797790
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@FurnaceContainerManagerModel@@UEAAXHH@Z
     * @hash   -1829247202
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@FurnaceContainerManagerModel@@UEAAXXZ
     * @hash   2038041508
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@FurnaceContainerManagerModel@@UEAA_NM@Z
     * @hash   -1668848196
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@FurnaceContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   160203697
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0FurnaceContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -1513646576
     */
    MCAPI FurnaceContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

//protected:
    /**
     * @symbol ??0FurnaceContainerManagerModel@@IEAA@AEBVHashedString@@W4ContainerType@@W4BlockActorType@@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -550905598
     */
    MCAPI FurnaceContainerManagerModel(class HashedString const &, enum class ContainerType, enum class BlockActorType, enum class ContainerID, class Player &, class BlockPos const &);

//private:
    /**
     * @symbol ?_getFurnaceEntity@FurnaceContainerManagerModel@@AEAAPEAVFurnaceBlockActor@@XZ
     * @hash   -348890887
     */
    MCAPI class FurnaceBlockActor * _getFurnaceEntity();
    /**
     * @symbol ?_updateResultSlotInfo@FurnaceContainerManagerModel@@AEAAXXZ
     * @hash   -234254968
     */
    MCAPI void _updateResultSlotInfo();

protected:

private:

};