/**
 * @file  AutomationPlayerCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "PlayerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AutomationPlayerCommandOrigin.
 *
 */
class AutomationPlayerCommandOrigin : public PlayerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONPLAYERCOMMANDORIGIN
public:
    class AutomationPlayerCommandOrigin& operator=(class AutomationPlayerCommandOrigin const &) = delete;
    AutomationPlayerCommandOrigin(class AutomationPlayerCommandOrigin const &) = delete;
    AutomationPlayerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -442294617
     */
    virtual ~AutomationPlayerCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@AutomationPlayerCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   166323299
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AutomationPlayerCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1676095150
     */
    virtual std::string getName() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@AutomationPlayerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -717857693
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@AutomationPlayerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   -245641591
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  13
     * @symbol ?hasChatPerms@AutomationPlayerCommandOrigin@@UEBA_NXZ
     * @hash   -1765852000
     */
    virtual bool hasChatPerms() const;
    /**
     * @vftbl  14
     * @symbol ?hasTellPerms@AutomationPlayerCommandOrigin@@UEBA_NXZ
     * @hash   -2101909177
     */
    virtual bool hasTellPerms() const;
    /**
     * @vftbl  19
     * @symbol ?getSourceId@AutomationPlayerCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
     * @hash   1055323857
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@AutomationPlayerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   -684047560
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  24
     * @symbol ?toCommandOriginData@AutomationPlayerCommandOrigin@@UEBA?AUCommandOriginData@@XZ
     * @hash   -1212643690
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @vftbl  29
     * @symbol ?serialize@AutomationPlayerCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   272312831
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@AutomationPlayerCommandOrigin@@UEBA_NXZ
     * @hash   740419137
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0AutomationPlayerCommandOrigin@@QEAA@UActorUniqueID@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CommandPermissionLevel@@AEBVNetworkIdentifier@@@Z
     * @hash   -1956413664
     */
    MCAPI AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level &, std::string const &, enum class CommandPermissionLevel, class NetworkIdentifier const &);
    /**
     * @symbol ??0AutomationPlayerCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPlayer@@@Z
     * @hash   1799652537
     */
    MCAPI AutomationPlayerCommandOrigin(std::string const &, class Player &);

};