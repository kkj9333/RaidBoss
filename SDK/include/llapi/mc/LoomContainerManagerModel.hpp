/**
 * @file  LoomContainerManagerModel.hpp
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
 * @brief MC class LoomContainerManagerModel.
 *
 */
class LoomContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMCONTAINERMANAGERMODEL
public:
    class LoomContainerManagerModel& operator=(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2061169078
     */
    virtual ~LoomContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@LoomContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1347217229
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@LoomContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -959737316
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@LoomContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1541282469
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@LoomContainerManagerModel@@UEAAXHH@Z
     * @hash   1033683031
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ
     * @hash   1027987277
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@LoomContainerManagerModel@@UEAA_NM@Z
     * @hash   1663822387
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@LoomContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   -141815894
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0LoomContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   616847737
     */
    MCAPI LoomContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?BANNER_SLOT@LoomContainerManagerModel@@2HB
     * @hash   1092714147
     */
    MCAPI static int const BANNER_SLOT;
    /**
     * @symbol ?DYE_SLOT@LoomContainerManagerModel@@2HB
     * @hash   689648957
     */
    MCAPI static int const DYE_SLOT;
    /**
     * @symbol ?MATERIAL_SLOT@LoomContainerManagerModel@@2HB
     * @hash   624230325
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @symbol ?RESULT_SLOT@LoomContainerManagerModel@@2HB
     * @hash   332925837
     */
    MCAPI static int const RESULT_SLOT;

};