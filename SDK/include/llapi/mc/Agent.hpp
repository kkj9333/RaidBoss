/**
 * @file  Agent.hpp
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
 * @brief MC class Agent.
 *
 */
class Agent : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const &) = delete;
    Agent(class Agent const &) = delete;
    Agent() = delete;
#endif

public:
    /**
     * @vftbl  12
     * @symbol ?initializeComponents@Agent@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -2146609749
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   -396133549
     */
    virtual ~Agent();
    /**
     * @vftbl  42
     * @hash   -155073678
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  45
     * @symbol ?teleportTo@Agent@@UEAAXAEBVVec3@@_NHH1@Z
     * @hash   -596144862
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  50
     * @symbol ?normalTick@Agent@@UEAAXXZ
     * @hash   399920486
     */
    virtual void normalTick();
    /**
     * @vftbl  61
     * @symbol ?isInvisible@Agent@@UEBA_NXZ
     * @hash   -442073338
     */
    virtual bool isInvisible() const;
    /**
     * @vftbl  62
     * @symbol ?canShowNameTag@Agent@@UEBA_NXZ
     * @hash   -1732533659
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  67
     * @symbol ?getFormattedNameTag@Agent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   35323774
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl  70
     * @hash   -71033267
     */
    virtual void __unk_vfn_70();
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
     * @hash   -13774965
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  97
     * @symbol ?isPickable@Agent@@UEAA_NXZ
     * @hash   -1304319735
     */
    virtual bool isPickable();
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
     * @hash   1457575713
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@Agent@@UEAAXW4ActorEvent@@H@Z
     * @hash   -1874884751
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  163
     * @symbol ?setCarriedItem@Agent@@UEAAXAEBVItemStack@@@Z
     * @hash   1374043159
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  195
     * @symbol ?canBePulledIntoVehicle@Agent@@UEBA_NXZ
     * @hash   1007041704
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  212
     * @symbol ?canBeAffected@Agent@@UEBA_NI@Z
     * @hash   -1510802754
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @vftbl  227
     * @symbol ?isWorldBuilder@Agent@@UEBA_NXZ
     * @hash   -69918154
     */
    virtual bool isWorldBuilder() const;
    /**
     * @vftbl  229
     * @symbol ?isAdventure@Agent@@UEBA_NXZ
     * @hash   -402698263
     */
    virtual bool isAdventure() const;
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
     * @vftbl  249
     * @symbol ?kill@Agent@@UEAAXXZ
     * @hash   -983615312
     */
    virtual void kill();
    /**
     * @vftbl  264
     * @symbol ?updateEntitySpecificMolangVariables@Agent@@UEAAXAEAVRenderParams@@@Z
     * @hash   1238093709
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@Agent@@EEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -1276384636
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  282
     * @symbol ?knockback@Agent@@UEAAXPEAVActor@@HMMMMM@Z
     * @hash   -437452791
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  293
     * @symbol ?travel@Agent@@UEAAXMMM@Z
     * @hash   -674536042
     */
    virtual void travel(float, float, float);
    /**
     * @vftbl  295
     * @symbol ?aiStep@Agent@@UEAAXXZ
     * @hash   1296951318
     */
    virtual void aiStep();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  338
     * @symbol ?createAIGoals@Agent@@UEAA_NXZ
     * @hash   1846880960
     */
    virtual bool createAIGoals();
    /**
     * @vftbl  345
     * @symbol ?canExistWhenDisallowMob@Agent@@UEBA_NXZ
     * @hash   1499502183
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  351
     * @symbol ?initBodyControl@Agent@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     * @hash   1378552250
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    /**
     * @symbol ?breaksFallingBlocks@Agent@@UEBA_NXZ
     * @hash   956692636
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?getAlwaysShowNameTag@Agent@@UEBA_NXZ
     * @hash   150440432
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @symbol ?interactPreventDefault@Agent@@UEAA_NXZ
     * @hash   -2102316285
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?isTargetable@Agent@@UEBA_NXZ
     * @hash   -730179736
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @symbol ??0Agent@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1257518145
     */
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getMoveSpeedScalar@Agent@@QEBAMXZ
     * @hash   1460315036
     */
    MCAPI float getMoveSpeedScalar() const;
    /**
     * @symbol ?getSelectedSlot@Agent@@QEBAHXZ
     * @hash   507522022
     */
    MCAPI int getSelectedSlot() const;
    /**
     * @symbol ?isValidSlotNum@Agent@@QEAA_NH@Z
     * @hash   -505338923
     */
    MCAPI bool isValidSlotNum(int);
    /**
     * @symbol ?setMoveTarget@Agent@@QEAAXM@Z
     * @hash   223370156
     */
    MCAPI void setMoveTarget(float);
    /**
     * @symbol ?setMoveTarget@Agent@@QEAAXVVec2@@@Z
     * @hash   836990168
     */
    MCAPI void setMoveTarget(class Vec2);
    /**
     * @symbol ?setNameTagFromOwner@Agent@@QEAAXAEBVPlayer@@@Z
     * @hash   91847458
     */
    MCAPI void setNameTagFromOwner(class Player const &);
    /**
     * @symbol ?startCommandMode@Agent@@QEAAXXZ
     * @hash   -493118005
     */
    MCAPI void startCommandMode();
    /**
     * @symbol ?stopCommandMode@Agent@@QEAAXXZ
     * @hash   1017170765
     */
    MCAPI void stopCommandMode();
    /**
     * @symbol ?swingAnimationCompleted@Agent@@QEAA_NXZ
     * @hash   1125836308
     */
    MCAPI bool swingAnimationCompleted();
    /**
     * @symbol ?swingArm@Agent@@QEAAXXZ
     * @hash   837189375
     */
    MCAPI void swingArm();
    /**
     * @symbol ?tryFireCreateEvent@Agent@@QEAAXAEAVPlayer@@@Z
     * @hash   1734432994
     */
    MCAPI void tryFireCreateEvent(class Player &);
    /**
     * @symbol ?roundTeleportPos@Agent@@SA?AVVec3@@AEBV2@@Z
     * @hash   -932439014
     */
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    /**
     * @symbol ?tryGetFromEntity@Agent@@SAPEAV1@AEAVEntityContext@@_N@Z
     * @hash   -1371615899
     */
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_getContainerComponent@Agent@@AEAAPEAVContainerComponent@@XZ
     * @hash   -560661732
     */
    MCAPI class ContainerComponent * _getContainerComponent();

private:

};