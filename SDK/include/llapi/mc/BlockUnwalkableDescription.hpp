/**
 * @file  BlockUnwalkableDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockUnwalkableDescription.
 *
 */
class BlockUnwalkableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNWALKABLEDESCRIPTION
public:
    class BlockUnwalkableDescription& operator=(class BlockUnwalkableDescription const &) = delete;
    BlockUnwalkableDescription(class BlockUnwalkableDescription const &) = delete;
    BlockUnwalkableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -799353891
     */
    virtual ~BlockUnwalkableDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockUnwalkableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -247561754
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockUnwalkableDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   484945470
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@BlockUnwalkableDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     * @hash   2005118289
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockUnwalkableDescription@@UEBA_NXZ
     * @hash   -214940722
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockUnwalkableDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   480091184
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockUnwalkableDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1797339538
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@BlockUnwalkableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   434982313
     */
    MCAPI static std::string const NameID;

};