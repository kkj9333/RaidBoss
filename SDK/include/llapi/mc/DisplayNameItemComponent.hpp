/**
 * @file  DisplayNameItemComponent.hpp
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
 * @brief MC class DisplayNameItemComponent.
 *
 */
class DisplayNameItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYNAMEITEMCOMPONENT
public:
    class DisplayNameItemComponent& operator=(class DisplayNameItemComponent const &) = delete;
    DisplayNameItemComponent(class DisplayNameItemComponent const &) = delete;
    DisplayNameItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   982996103
     */
    virtual ~DisplayNameItemComponent();
    /**
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEBA_NXZ
     * @hash   -41799644
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1256992317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -169581306
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   1479135642
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?getDescriptionId@DisplayNameItemComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -653486178
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @symbol ?bindType@DisplayNameItemComponent@@SAXXZ
     * @hash   1659425139
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@DisplayNameItemComponent@@SAAEBVHashedString@@XZ
     * @hash   538081758
     */
    MCAPI static class HashedString const & getIdentifier();

};