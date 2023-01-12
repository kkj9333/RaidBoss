/**
 * @file  BlockCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockCommandOrigin.
 *
 */
class BlockCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    class BlockCommandOrigin& operator=(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1963400334
     */
    virtual ~BlockCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@BlockCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -338677912
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@BlockCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -316804409
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@BlockCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   971381556
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@BlockCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   -148415743
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol ?getRotation@BlockCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     * @hash   619473600
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol ?getLevel@BlockCommandOrigin@@UEBAPEAVLevel@@XZ
     * @hash   -1117001222
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDimension@BlockCommandOrigin@@UEBAPEAVDimension@@XZ
     * @hash   -2129439766
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@BlockCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   1780182100
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@BlockCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   1424901224
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@BlockCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   1870694222
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@BlockCommandOrigin@@UEBA_NXZ
     * @hash   187479388
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@BlockCommandOrigin@@UEBA_NXZ
     * @hash   -1070035146
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@BlockCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   -1347948515
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  29
     * @symbol ?serialize@BlockCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   -1828301436
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@BlockCommandOrigin@@UEBA_NXZ
     * @hash   -1730037066
     */
    virtual bool isValid() const;
    /**
     * @vftbl  32
     * @symbol ?_getBaseCommandBlock@BlockCommandOrigin@@MEBAPEAVBaseCommandBlock@@AEAVBlockSource@@@Z
     * @hash   -1960858374
     */
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /**
     * @vftbl  33
     * @symbol ?_getBlockEntity@BlockCommandOrigin@@MEBAPEAVCommandBlockActor@@AEAVBlockSource@@@Z
     * @hash   -1205052893
     */
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /**
     * @symbol ??0BlockCommandOrigin@@QEAA@AEAVLevel@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@@Z
     * @hash   1149549326
     */
    MCAPI BlockCommandOrigin(class Level &, class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &);
    /**
     * @symbol ??0BlockCommandOrigin@@QEAA@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1825022104
     */
    MCAPI BlockCommandOrigin(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?load@BlockCommandOrigin@@SA?AV?$unique_ptr@VBlockCommandOrigin@@U?$default_delete@VBlockCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     * @hash   1644936414
     */
    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const &, class Level &);

//protected:
    /**
     * @symbol ?_getName@BlockCommandOrigin@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     * @hash   217200150
     */
    MCAPI std::string _getName(class BlockSource &) const;

protected:

};