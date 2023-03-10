/**
 * @file  AreaAttackSystem.hpp
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
 * @brief MC class AreaAttackSystem.
 *
 */
class AreaAttackSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKSYSTEM
public:
    class AreaAttackSystem& operator=(class AreaAttackSystem const &) = delete;
    AreaAttackSystem(class AreaAttackSystem const &) = delete;
    AreaAttackSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -647877362
     */
    virtual ~AreaAttackSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@AreaAttackSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1229804428
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_tickComponent@AreaAttackSystem@@AEAAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VAreaAttackComponent@@@@@Z
     * @hash   1259687377
     */
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class AreaAttackComponent> &);

private:

};