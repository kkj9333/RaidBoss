/**
 * @file  BlockRandomTickingDescription.hpp
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
 * @brief MC structure BlockRandomTickingDescription.
 *
 */
struct BlockRandomTickingDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKRANDOMTICKINGDESCRIPTION
public:
    struct BlockRandomTickingDescription& operator=(struct BlockRandomTickingDescription const &) = delete;
    BlockRandomTickingDescription(struct BlockRandomTickingDescription const &) = delete;
    BlockRandomTickingDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   887080629
     */
    virtual ~BlockRandomTickingDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockRandomTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -14336750
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockRandomTickingDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   1435314674
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @symbol ?NameID@BlockRandomTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -885411209
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockRandomTickingDescription@@SAXXZ
     * @hash   -177231857
     */
    MCAPI static void bindType();

};