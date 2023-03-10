/**
 * @file  Shulker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Shulker.
 *
 */
class Shulker : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?reloadHardcoded@Shulker@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1857196703
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   1289953146
     */
    virtual ~Shulker();
    /**
     * @vftbl  21
     * @symbol ?setPos@Shulker@@UEAAXAEBVVec3@@@Z
     * @hash   -1224786619
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  42
     * @hash   -155073678
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Shulker@@UEAAXXZ
     * @hash   -512069265
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol ?isInWall@Shulker@@UEBA_NXZ
     * @hash   -960920267
     */
    virtual bool isInWall() const;
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  82
     * @symbol ?getShadowRadius@Shulker@@UEBAMXZ
     * @hash   -1824054950
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  115
     * @symbol ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
     * @hash   1143187101
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl  134
     * @symbol ?shouldRender@Shulker@@UEBA_NXZ
     * @hash   -2072959835
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl  137
     * @symbol ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   318386730
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  145
     * @symbol ?getPickRadius@Shulker@@UEAAMXZ
     * @hash   245343228
     */
    virtual float getPickRadius();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  264
     * @symbol ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
     * @hash   -1040235269
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   432059508
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1639872923
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
     * @hash   805964386
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  280
     * @symbol ?_onSizeUpdated@Shulker@@EEAAXXZ
     * @hash   1479019161
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  293
     * @symbol ?travel@Shulker@@UEAAXMMM@Z
     * @hash   -681979395
     */
    virtual void travel(float, float, float);
    /**
     * @vftbl  295
     * @symbol ?aiStep@Shulker@@UEAAXXZ
     * @hash   -1855791121
     */
    virtual void aiStep();
    /**
     * @vftbl  300
     * @symbol ?checkSpawnRules@Shulker@@UEAA_N_N@Z
     * @hash   1744639227
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  309
     * @symbol ?getMaxHeadXRot@Shulker@@UEAAMXZ
     * @hash   -2015654304
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  317
     * @symbol ?getArmorValue@Shulker@@UEBAHXZ
     * @hash   225569959
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  351
     * @symbol ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     * @hash   -1937556079
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @symbol ?breaksFallingBlocks@Shulker@@UEBA_NXZ
     * @hash   1443118517
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?isLeashableType@Shulker@@UEAA_NXZ
     * @hash   -150566252
     */
    MCVAPI bool isLeashableType();
    /**
     * @symbol ?useNewAi@Shulker@@UEBA_NXZ
     * @hash   -208058595
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Shulker@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   155417976
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@Shulker@@QEAAXXZ
     * @hash   727004475
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER@Shulker@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   1516211958
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER_UUID@Shulker@@2VUUID@mce@@B
     * @hash   119196599
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @symbol ?postSetPosSetShulkerAttachPosAndPeekAmount@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
     * @hash   -1936876447
     */
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const &);
    /**
     * @symbol ?setShulkerAttachPos@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
     * @hash   1197759919
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const &);

//protected:
    /**
     * @symbol ?_canOpenLidAt@Shulker@@IEBA_NVBlockPos@@E@Z
     * @hash   -1486664096
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @symbol ?_setPeekAmount@Shulker@@KAXVSynchedActorDataWriter@@H@Z
     * @hash   1738542867
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

//private:
    /**
     * @symbol ?_calculateBB@Shulker@@AEAAXXZ
     * @hash   186308743
     */
    MCAPI void _calculateBB();
    /**
     * @symbol ?_isPosOccupiedByOtherShulker@Shulker@@AEBA_NVBlockPos@@@Z
     * @hash   -590781835
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @symbol ?_isValidAttach@Shulker@@AEAA_NVBlockPos@@E@Z
     * @hash   733321619
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @symbol ?_peekAmountTick@Shulker@@AEAAXXZ
     * @hash   -799942433
     */
    MCAPI void _peekAmountTick();
    /**
     * @symbol ?_setAttachFace@Shulker@@AEAAXE@Z
     * @hash   -1626244136
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @symbol ?_tryAttachingToNeighbouringFaces@Shulker@@AEAA_NVBlockPos@@@Z
     * @hash   751253117
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @symbol ?_trySpawnShulker@Shulker@@AEAAXXZ
     * @hash   616273981
     */
    MCAPI void _trySpawnShulker();
    /**
     * @symbol ?_tryTeleportSomewhere@Shulker@@AEAA_NXZ
     * @hash   -621880602
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};