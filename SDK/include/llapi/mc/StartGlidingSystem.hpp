/**
 * @file  StartGlidingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StartGlidingSystem.
 *
 */
class StartGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGLIDINGSYSTEM
public:
    class StartGlidingSystem& operator=(class StartGlidingSystem const &) = delete;
    StartGlidingSystem(class StartGlidingSystem const &) = delete;
    StartGlidingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   588358393
     */
    virtual ~StartGlidingSystem();
    /**
     * @vftbl  1
     * @hash   -253879375
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?tick@StartGlidingSystem@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@UPlayerInputRequestComponent@@V?$FlagComponent@UUsesECSMovementFlag@@@@@@U?$Read@UAbilitiesComponent@@V?$FlagComponent@UArmorFlyEnabledFlag@@@@UCollisionBoxDefinitionComponent@@UMoveInputComponent@@V?$FlagComponent@UOnGroundFlag@@@@UPassengerComponent@@UStateVectorComponent@@UVanillaClientGameplayComponent@@@@U?$Write@UAABBShapeComponent@@UOffsetsComponent@@UPlayerActionComponent@@USynchedActorDataComponent@@@@U?$AddRemove@V?$FlagComponent@UWasPenetratingLastFrameFlag@@@@@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     * @hash   714121158
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct UsesECSMovementFlag>>, struct Read<struct AbilitiesComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct CollisionBoxDefinitionComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct PassengerComponent, struct StateVectorComponent, struct VanillaClientGameplayComponent>, struct Write<struct AABBShapeComponent, struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createStartGlidingSystem@StartGlidingSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1483553172
     */
    MCAPI static struct TickingSystemWithInfo createStartGlidingSystem();

};