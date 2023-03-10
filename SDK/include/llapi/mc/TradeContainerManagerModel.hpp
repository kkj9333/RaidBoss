/**
 * @file  TradeContainerManagerModel.hpp
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
 * @brief MC class TradeContainerManagerModel.
 *
 */
class TradeContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADECONTAINERMANAGERMODEL
public:
    class TradeContainerManagerModel& operator=(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   613066979
     */
    virtual ~TradeContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1868091898
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   1344125049
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   -591141582
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
     * @hash   1883057328
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@TradeContainerManagerModel@@UEAA_NM@Z
     * @hash   -200534000
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1569925677
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0TradeContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     * @hash   1301124374
     */
    MCAPI TradeContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID const &);
    /**
     * @symbol ?getEntity@TradeContainerManagerModel@@QEBAPEAVActor@@XZ
     * @hash   -1012087481
     */
    MCAPI class Actor * getEntity() const;

};