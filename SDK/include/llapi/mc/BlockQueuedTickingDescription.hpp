/**
 * @file  BlockQueuedTickingDescription.hpp
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
 * @brief MC structure BlockQueuedTickingDescription.
 *
 */
struct BlockQueuedTickingDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKQUEUEDTICKINGDESCRIPTION
public:
    struct BlockQueuedTickingDescription& operator=(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   19351397
     */
    virtual ~BlockQueuedTickingDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockQueuedTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   277007218
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockQueuedTickingDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   215786418
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @symbol ?NameID@BlockQueuedTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1285791025
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockQueuedTickingDescription@@SAXXZ
     * @hash   392574927
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockQueuedTickingDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -94717962
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};