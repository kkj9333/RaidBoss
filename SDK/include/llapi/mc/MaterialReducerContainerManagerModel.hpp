/**
 * @file  MaterialReducerContainerManagerModel.hpp
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
 * @brief MC class MaterialReducerContainerManagerModel.
 *
 */
class MaterialReducerContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCERCONTAINERMANAGERMODEL
public:
    class MaterialReducerContainerManagerModel& operator=(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   351168322
     */
    virtual ~MaterialReducerContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@MaterialReducerContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   1703280903
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@MaterialReducerContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1286587080
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@MaterialReducerContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1862551153
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@MaterialReducerContainerManagerModel@@UEAAXHH@Z
     * @hash   -1191528485
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@MaterialReducerContainerManagerModel@@UEAAXXZ
     * @hash   -2097492783
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@MaterialReducerContainerManagerModel@@UEAA_NM@Z
     * @hash   -978763505
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@MaterialReducerContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1813827150
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0MaterialReducerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -414637379
     */
    MCAPI MaterialReducerContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};