/**
 * @file  BlockFlammableDescription.hpp
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
 * @brief MC structure BlockFlammableDescription.
 *
 */
struct BlockFlammableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFLAMMABLEDESCRIPTION
public:
    struct BlockFlammableDescription& operator=(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1566011810
     */
    virtual ~BlockFlammableDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockFlammableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -48361419
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockFlammableDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1076526257
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @symbol ?CATCH_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
     * @hash   37539867
     */
    MCAPI static int const CATCH_CHANCE_DEFAULT;
    /**
     * @symbol ?DESTROY_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
     * @hash   -2021484383
     */
    MCAPI static int const DESTROY_CHANCE_DEFAULT;
    /**
     * @symbol ?NameID@BlockFlammableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -895143587
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockFlammableDescription@@SAXXZ
     * @hash   -674170769
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockFlammableDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -1960418016
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};