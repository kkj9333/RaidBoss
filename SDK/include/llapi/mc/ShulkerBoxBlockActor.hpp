/**
 * @file  ShulkerBoxBlockActor.hpp
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
 * @brief MC class ShulkerBoxBlockActor.
 *
 */
class ShulkerBoxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCKACTOR
public:
    class ShulkerBoxBlockActor& operator=(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKACTOR
    /**
     * @symbol ?_detectEntityObstruction@ShulkerBoxBlockActor@@MEBA_NAEAVBlockSource@@@Z
     * @hash   -1503414115
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @symbol ?_getUpdatePacket@ShulkerBoxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   861004032
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@ShulkerBoxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -664683342
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?canPushInItem@ShulkerBoxBlockActor@@UEBA_NHHAEBVItemStack@@@Z
     * @hash   1876665791
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol ?getMaxStackSize@ShulkerBoxBlockActor@@UEBAHXZ
     * @hash   -1621542241
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?getName@ShulkerBoxBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1515135228
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?getObstructionAABB@ShulkerBoxBlockActor@@MEBA?AVAABB@@XZ
     * @hash   -1688050885
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @symbol ?load@ShulkerBoxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -275294194
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onPlace@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1750467708
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @symbol ?playCloseSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   843165232
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @symbol ?playOpenSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   265938490
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @symbol ?save@ShulkerBoxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1006186291
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?tick@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1042623641
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0ShulkerBoxBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
     * @hash   1445766273
     */
    MCAPI ShulkerBoxBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &);
    /**
     * @symbol ?setFacingDir@ShulkerBoxBlockActor@@QEAAXE@Z
     * @hash   777748807
     */
    MCAPI void setFacingDir(unsigned char);
    /**
     * @symbol ?itemAllowed@ShulkerBoxBlockActor@@SA_NAEBVItemStackBase@@@Z
     * @hash   208382743
     */
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    /**
     * @symbol ?itemAllowedInSlot@ShulkerBoxBlockActor@@SA_NHAEBVItemStackBase@@H@Z
     * @hash   460027685
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

//private:
    /**
     * @symbol ?_calculateBB@ShulkerBoxBlockActor@@AEAAXXZ
     * @hash   944299932
     */
    MCAPI void _calculateBB();
    /**
     * @symbol ?_calculateMovementWithCollisions@ShulkerBoxBlockActor@@AEBA?AVVec3@@AEAVBlockSource@@PEAVActor@@@Z
     * @hash   707449690
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource &, class Actor *) const;
    /**
     * @symbol ?_moveCollidedEntities@ShulkerBoxBlockActor@@AEBAXAEAVBlockSource@@@Z
     * @hash   1240014871
     */
    MCAPI void _moveCollidedEntities(class BlockSource &) const;

private:
    /**
     * @symbol ?ITEMS_SIZE@ShulkerBoxBlockActor@@0HB
     * @hash   -1107474239
     */
    MCAPI static int const ITEMS_SIZE;

};