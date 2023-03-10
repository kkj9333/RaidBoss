/**
 * @file  ExperienceOrb.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceOrb.
 *
 */
class ExperienceOrb : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
enum class DropType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEORB
public:
    class ExperienceOrb& operator=(class ExperienceOrb const &) = delete;
    ExperienceOrb(class ExperienceOrb const &) = delete;
    ExperienceOrb() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?reloadHardcoded@ExperienceOrb@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1376698248
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   -1038951581
     */
    virtual ~ExperienceOrb();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@ExperienceOrb@@UEAAXXZ
     * @hash   1975860934
     */
    virtual void normalTick();
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
     * @symbol ?getShadowRadius@ExperienceOrb@@UEBAMXZ
     * @hash   -883844111
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
     * @vftbl  91
     * @symbol ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
     * @hash   717106707
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
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
     * @vftbl  137
     * @symbol ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   593210147
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @vftbl  261
     * @symbol ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
     * @hash   962780479
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   741531275
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1602679838
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
     * @hash   406436635
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  272
     * @symbol ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1487043213
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @symbol ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -834938543
     */
    MCAPI ExperienceOrb(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getIconIndex@ExperienceOrb@@QEBAHXZ
     * @hash   1011561676
     */
    MCAPI int getIconIndex() const;
    /**
     * @symbol ?postNormalTick@ExperienceOrb@@QEAAXXZ
     * @hash   -1358323925
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setValue@ExperienceOrb@@QEAAXH@Z
     * @hash   2033361850
     */
    MCAPI void setValue(int);
    /**
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HHW4DropType@1@PEAVPlayer@@@Z
     * @hash   -1063024292
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, int, enum class ExperienceOrb::DropType, class Player *);
    /**
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HW4DropType@1@PEAVPlayer@@@Z
     * @hash   1661703721
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, enum class ExperienceOrb::DropType, class Player *);

//private:
    /**
     * @symbol ?_handleMending@ExperienceOrb@@AEAAXAEAVPlayer@@@Z
     * @hash   -121556713
     */
    MCAPI void _handleMending(class Player &);

private:
    /**
     * @symbol ?LIFETIME@ExperienceOrb@@0HB
     * @hash   956793452
     */
    MCAPI static int const LIFETIME;

};