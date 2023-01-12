/**
 * @file  ActorMobilityUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorMobilityUtils.
 *
 */
namespace ActorMobilityUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?actorSetSize@ActorMobilityUtils@@YAXAEAVStrictEntityContext@@AEBVVec2@@AEAUSynchedActorDataComponent@@AEAUAABBShapeComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UWasPenetratingLastFrameFlag@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@UOffsetsComponent@@@@@Z
     * @hash   1647930882
     */
    MCAPI void actorSetSize(class StrictEntityContext &, class Vec2 const &, struct SynchedActorDataComponent &, struct AABBShapeComponent &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>);
    /**
     * @symbol ?canBeginOrContinueClimbingLadder@ActorMobilityUtils@@YA_NAEBUAABBShapeComponent@@AEBVIConstBlockSource@@AEBUStateVectorComponent@@AEBUSynchedActorDataComponent@@_N4@Z
     * @hash   463746776
     */
    MCAPI bool canBeginOrContinueClimbingLadder(struct AABBShapeComponent const &, class IConstBlockSource const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, bool, bool);
    /**
     * @symbol ?canDash@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
     * @hash   -627427116
     */
    MCAPI bool canDash(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?canPowerJump@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@PEBUAttributesComponent@@_N@Z
     * @hash   -1414466525
     */
    MCAPI bool canPowerJump(struct SynchedActorDataComponent const &, struct AttributesComponent const *, bool);
    /**
     * @symbol ?endJump@ActorMobilityUtils@@YAXAEBUStateVectorComponent@@AEAUMobJumpComponent@@AEAUSynchedActorDataComponent@@PEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UParrotFlag@@@@@@$$CBUPassengerComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UExitFromPassengerFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
     * @hash   -716180849
     */
    MCAPI void endJump(struct StateVectorComponent const &, struct MobJumpComponent &, struct SynchedActorDataComponent &, struct VehicleComponent const *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>> &);
    /**
     * @symbol ?getJumpPower@ActorMobilityUtils@@YAMPEBVJumpControlComponent@@PEBV?$FlagComponent@USquidFlag@@@@@Z
     * @hash   -1389946454
     */
    MCAPI float getJumpPower(class JumpControlComponent const *, class FlagComponent<struct SquidFlag> const *);
    /**
     * @symbol ?getPosFromAABB@ActorMobilityUtils@@YA?AVVec3@@AEBVAABB@@MAEBVVec2@@@Z
     * @hash   1829328146
     */
    MCAPI class Vec3 getPosFromAABB(class AABB const &, float, class Vec2 const &);
    /**
     * @symbol ?isFlying@ActorMobilityUtils@@YA_NAEBUAbilitiesComponent@@@Z
     * @hash   -35066066
     */
    MCAPI bool isFlying(struct AbilitiesComponent const &);
    /**
     * @symbol ?isFree@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBVAABB@@AEBVVec3@@M@Z
     * @hash   1425261375
     */
    MCAPI bool isFree(class IConstBlockSource const &, class AABB const &, class Vec3 const &, float);
    /**
     * @symbol ?isImmersedInWater@ActorMobilityUtils@@YA_NAEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
     * @hash   -497066890
     */
    MCAPI bool isImmersedInWater(class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);
    /**
     * @symbol ?isImmobile@ActorMobilityUtils@@YA_NAEBVStrictEntityContext@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@V?$Optional@V?$FlagComponent@UActorIsImmobileFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUAttributesComponent@@V?$Optional@V?$FlagComponent@UActorIsKnockedBackOnDeathFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUSynchedActorDataComponent@@$$CBUMobJumpComponent@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UHorseFlag@@@@@@PEAV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@Z
     * @hash   -106899817
     */
    MCAPI bool isImmobile(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct MobJumpComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>> *, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const> *);
    /**
     * @symbol ?isInLava@ActorMobilityUtils@@YA_NAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUSubBBsComponent@@@Z
     * @hash   1000228306
     */
    MCAPI bool isInLava(class IConstBlockSource const &, struct AABBShapeComponent const &, struct SubBBsComponent const &);
    /**
     * @symbol ?isJumping@ActorMobilityUtils@@YA_NAEBUMobJumpComponent@@PEBUAbilitiesComponent@@@Z
     * @hash   375994062
     */
    MCAPI bool isJumping(struct MobJumpComponent const &, struct AbilitiesComponent const *);
    /**
     * @symbol ?isOnFire@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@PEBUOnFireComponent@@PEBV?$FlagComponent@ULavaSlimeFlag@@@@PEBV?$FlagComponent@UShulkerBulletFlag@@@@PEBV?$FlagComponent@UWitherSkullFlag@@@@PEBV?$FlagComponent@UBlazeFlag@@@@@Z
     * @hash   564307056
     */
    MCAPI bool isOnFire(struct SynchedActorDataComponent const &, struct OnFireComponent const *, class FlagComponent<struct LavaSlimeFlag> const *, class FlagComponent<struct ShulkerBulletFlag> const *, class FlagComponent<struct WitherSkullFlag> const *, class FlagComponent<struct BlazeFlag> const *);
    /**
     * @symbol ?isSprinting@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
     * @hash   572790556
     */
    MCAPI bool isSprinting(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?isSwimming@ActorMobilityUtils@@YA_NAEBUSynchedActorDataComponent@@@Z
     * @hash   1621319676
     */
    MCAPI bool isSwimming(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?isUnderLiquid@ActorMobilityUtils@@YA_NAEBVVec3@@0AEBVIConstBlockSource@@W4MaterialType@@@Z
     * @hash   924031536
     */
    MCAPI bool isUnderLiquid(class Vec3 const &, class Vec3 const &, class IConstBlockSource const &, enum class MaterialType);
    /**
     * @symbol ?moveBBs@ActorMobilityUtils@@YAXAEBVVec3@@AEAUAABBShapeComponent@@AEAUSubBBsComponent@@@Z
     * @hash   -1350564297
     */
    MCAPI void moveBBs(class Vec3 const &, struct AABBShapeComponent &, struct SubBBsComponent &);
    /**
     * @symbol ?onClimbableBlock@ActorMobilityUtils@@YA_NAEBUAABBShapeComponent@@AEBUConstBlockSourceComponent@@AEBUStateVectorComponent@@_N3@Z
     * @hash   1511193830
     */
    MCAPI bool onClimbableBlock(struct AABBShapeComponent const &, struct ConstBlockSourceComponent const &, struct StateVectorComponent const &, bool, bool);
    /**
     * @symbol ?onClimbableBlock@ActorMobilityUtils@@YA_NAEBUAABBShapeComponent@@AEBVIConstBlockSource@@AEBUStateVectorComponent@@_N3@Z
     * @hash   555162788
     */
    MCAPI bool onClimbableBlock(struct AABBShapeComponent const &, class IConstBlockSource const &, struct StateVectorComponent const &, bool, bool);
    /**
     * @symbol ?setLocalPlayerSneaking@ActorMobilityUtils@@YAXAEAUSynchedActorDataComponent@@PEAUPlayerActionComponent@@_N@Z
     * @hash   -2123166296
     */
    MCAPI void setLocalPlayerSneaking(struct SynchedActorDataComponent &, struct PlayerActionComponent *, bool);
    /**
     * @symbol ?setSprinting@ActorMobilityUtils@@YAXAEAUAttributesComponent@@AEAUSynchedActorDataComponent@@V?$optional_ref@UPlayerActionComponent@@@@_N@Z
     * @hash   -1209796599
     */
    MCAPI void setSprinting(struct AttributesComponent &, struct SynchedActorDataComponent &, class optional_ref<struct PlayerActionComponent>, bool);
    /**
     * @symbol ?setStanding@ActorMobilityUtils@@YAXVSynchedActorDataWriter@@_NPEAUHorseStandCounterComponent@@1@Z
     * @hash   -1332914223
     */
    MCAPI void setStanding(class SynchedActorDataWriter, bool, struct HorseStandCounterComponent *, bool);
    /**
     * @symbol ?shouldApplyWaterGravity@ActorMobilityUtils@@YA_NPEBVNavigationComponent@@PEBVPhysicsComponent@@VSynchedActorDataReader@@AEBVVec3@@AEBVIConstBlockSource@@AEBVVec2@@@Z
     * @hash   -2004339651
     */
    MCAPI bool shouldApplyWaterGravity(class NavigationComponent const *, class PhysicsComponent const *, class SynchedActorDataReader, class Vec3 const &, class IConstBlockSource const &, class Vec2 const &);
    /**
     * @symbol ?updateBBFromDefinition@ActorMobilityUtils@@YAXAEAVStrictEntityContext@@V?$optional_ref@$$CBUCollisionBoxDefinitionComponent@@@@AEAUSynchedActorDataComponent@@AEAUAABBShapeComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UWasPenetratingLastFrameFlag@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@UOffsetsComponent@@@@@Z
     * @hash   1637731713
     */
    MCAPI void updateBBFromDefinition(class StrictEntityContext &, class optional_ref<struct CollisionBoxDefinitionComponent const>, struct SynchedActorDataComponent &, struct AABBShapeComponent &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasPenetratingLastFrameFlag>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct OffsetsComponent>);

};