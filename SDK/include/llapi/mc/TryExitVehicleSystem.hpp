/**
 * @file  TryExitVehicleSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TryExitVehicleSystem.
 *
 */
class TryExitVehicleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRYEXITVEHICLESYSTEM
public:
    class TryExitVehicleSystem& operator=(class TryExitVehicleSystem const &) = delete;
    TryExitVehicleSystem(class TryExitVehicleSystem const &) = delete;
    TryExitVehicleSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@TryExitVehicleSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1628717682
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickTryExitVehicle@TryExitVehicleSystem@@CAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEBUAbilitiesComponent@@AEBUMobJumpComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@UVehicleComponent@@@@U?$Exclude@V?$FlagComponent@UBoatFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUAttributesComponent@@@@$$CBUSynchedActorDataComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UExitFromPassengerFlag@@@@@@@Z
     * @hash   -638323444
     */
    MCAPI static void _tickTryExitVehicle(class StrictEntityContext &, struct PassengerComponent const &, struct AbilitiesComponent const &, struct MobJumpComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, struct VehicleComponent>, struct Exclude<class FlagComponent<struct BoatFlag>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct AttributesComponent const>, struct SynchedActorDataComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ExitFromPassengerFlag>> &);

private:

};