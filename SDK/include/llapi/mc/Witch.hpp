/**
 * @file  Witch.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Witch.
 *
 */
class Witch : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITCH
public:
    class Witch& operator=(class Witch const &) = delete;
    Witch(class Witch const &) = delete;
    Witch() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   2081845013
     */
    virtual ~Witch();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
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
     * @symbol ?canAttack@Witch@@UEBA_NPEAVActor@@_N@Z
     * @hash   -1750404622
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl  119
     * @symbol ?performRangedAttack@Witch@@UEAAXAEAVActor@@M@Z
     * @hash   1705591307
     */
    virtual void performRangedAttack(class Actor &, float);
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@Witch@@UEAAXW4ActorEvent@@H@Z
     * @hash   -479569569
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
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
     * @symbol ?updateEntitySpecificMolangVariables@Witch@@UEAAXAEAVRenderParams@@@Z
     * @hash   -1336785937
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  280
     * @symbol ?_onSizeUpdated@Witch@@EEAAXXZ
     * @hash   1404966174
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
     * @vftbl  295
     * @symbol ?aiStep@Witch@@UEAAXXZ
     * @hash   801873284
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
     * @vftbl  335
     * @symbol ?getDamageAfterEnchantReduction@Witch@@MEBAMAEBVActorDamageSource@@M@Z
     * @hash   -88986359
     */
    virtual float getDamageAfterEnchantReduction(class ActorDamageSource const &, float) const;
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @symbol ??0Witch@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1242088765
     */
    MCAPI Witch(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?preAiStep@Witch@@QEAAXXZ
     * @hash   1951054067
     */
    MCAPI void preAiStep();

//private:

private:
    /**
     * @symbol ?SPEED_MODIFIER_DRINKING@Witch@@0V?$shared_ptr@VAttributeModifier@@@std@@A
     * @hash   1609970062
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_DRINKING;
    /**
     * @symbol ?SPEED_MODIFIER_DRINKING_UUID@Witch@@0VUUID@mce@@B
     * @hash   -1168158269
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;

};