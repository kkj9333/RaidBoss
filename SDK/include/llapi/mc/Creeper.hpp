/**
 * @file  Creeper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Creeper.
 *
 */
class Creeper : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREEPER
public:
    class Creeper& operator=(class Creeper const &) = delete;
    Creeper(class Creeper const &) = delete;
    Creeper() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   1988517052
     */
    virtual ~Creeper();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Creeper@@UEAAXXZ
     * @hash   2016022205
     */
    virtual void normalTick();
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
     * @vftbl  250
     * @symbol ?die@Creeper@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -965310127
     */
    virtual void die(class ActorDamageSource const &);
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
     * @symbol ?_onSizeUpdated@Creeper@@EEAAXXZ
     * @hash   -285135113
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
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREEPER
    /**
     * @symbol ?useNewAi@Creeper@@UEBA_NXZ
     * @hash   1509304923
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Creeper@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1330787878
     */
    MCAPI Creeper(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getSwellDir@Creeper@@QEAAHXZ
     * @hash   1756663550
     */
    MCAPI int getSwellDir();
    /**
     * @symbol ?getSwelling@Creeper@@QEBAMM@Z
     * @hash   -1794920045
     */
    MCAPI float getSwelling(float) const;
    /**
     * @symbol ?tryGetFromEntity@Creeper@@SAPEAV1@AEAVEntityContext@@_N@Z
     * @hash   -498268836
     */
    MCAPI static class Creeper * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_setSwellDir@Creeper@@AEAAXH@Z
     * @hash   187570210
     */
    MCAPI void _setSwellDir(int);

private:

};