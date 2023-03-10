/**
 * @file  Block.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class Block.
 *
 */
class Block {

#define AFTER_EXTRA
    // Add new members to class
public:
    LIAPI static Block* create(const string& str, unsigned short tileData);
    LIAPI static Block* create(CompoundTag* nbt);

    LIAPI string getTypeName() const;
    LIAPI int getId() const;
    inline unsigned short getTileData(){
        return static_cast<unsigned short>(getVariant());
    }
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);

    inline unsigned short getData() const {
        return dAccess<unsigned short, 8>(this);
    }

    inline class BlockLegacy const* getLegacyBlockPtr() const {
        return &dAccess<BlockLegacy, 16>(this);
    }

    inline bool operator==(class Block const& block) const {
        class BlockLegacy const* p1 = getLegacyBlockPtr();
        class BlockLegacy const* p2 = block.getLegacyBlockPtr();
        if (!p1 || !p2)
            return false;
        return p1 == p2 && getData() == block.getData();
    }

    inline bool operator!=(class Block const& block) const {
        class BlockLegacy const* p1 = getLegacyBlockPtr();
        class BlockLegacy const* p2 = block.getLegacyBlockPtr();
        if (!p1 || !p2)
            return false;
        return p1 != p2 || getData() != block.getData();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCK
public:
    class Block& operator=(class Block const &) = delete;
    Block(class Block const &) = delete;
    Block() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2117601061
     */
    virtual ~Block();
    /**
     * @vftbl  1
     * @symbol ?getRenderLayer@Block@@UEBA?AW4BlockRenderLayer@@XZ
     * @hash   -238396870
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @symbol ??0Block@@QEAA@GV?$not_null@PEAVBlockLegacy@@@gsl@@@Z
     * @hash   1619833381
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>);
    /**
     * @symbol ??0Block@@QEAA@GV?$not_null@PEAVBlockLegacy@@@gsl@@VCompoundTag@@AEBI@Z
     * @hash   -1822420614
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>, class CompoundTag, unsigned int const &);
    /**
     * @symbol ?addAABBs@Block@@QEBAXAEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   1664958678
     */
    MCAPI void addAABBs(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @symbol ?addCollisionShapes@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -18773503
     */
    MCAPI bool addCollisionShapes(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @symbol ?addTag@Block@@QEAAAEAV1@AEBVHashedString@@@Z
     * @hash   1355882719
     */
    MCAPI class Block & addTag(class HashedString const &);
    /**
     * @symbol ?animateTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -913628396
     */
    MCAPI void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?asItemInstance@Block@@QEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   589004112
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -26474881
     */
    MCAPI bool attack(class Player *, class BlockPos const &) const;
    /**
     * @symbol ?breaksFallingBlocks@Block@@QEBA_NVBaseGameVersion@@@Z
     * @hash   2042815995
     */
    MCAPI bool breaksFallingBlocks(class BaseGameVersion) const;
    /**
     * @symbol ?buildDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -635459676
     */
    MCAPI std::string buildDescriptionId() const;
    /**
     * @symbol ?buildDescriptionName@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1754386900
     */
    MCAPI std::string buildDescriptionName() const;
    /**
     * @symbol ?cacheComponentData@Block@@QEAAXXZ
     * @hash   -1392932643
     */
    MCAPI void cacheComponentData();
    /**
     * @symbol ?calcGroundFriction@Block@@QEBAMAEBUIMobMovementProxy@@AEBVBlockPos@@@Z
     * @hash   1472264566
     */
    MCAPI float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @symbol ?canBeBrokenFromFalling@Block@@QEBA_NXZ
     * @hash   1609840118
     */
    MCAPI bool canBeBrokenFromFalling() const;
    /**
     * @symbol ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   727904216
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
     * @hash   336183683
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @symbol ?canBeFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
     * @hash   -920386393
     */
    MCAPI bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?canBeOriginalSurface@Block@@QEBA_NXZ
     * @hash   589540198
     */
    MCAPI bool canBeOriginalSurface() const;
    /**
     * @symbol ?canConnect@Block@@QEBA_NAEBV1@E0@Z
     * @hash   1608336997
     */
    MCAPI bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @symbol ?canDamperVibrations@Block@@QEBA_NXZ
     * @hash   -2119884924
     */
    MCAPI bool canDamperVibrations() const;
    /**
     * @symbol ?canHaveExtraData@Block@@QEBA_NXZ
     * @hash   -1640137450
     */
    MCAPI bool canHaveExtraData() const;
    /**
     * @symbol ?canHurtAndBreakItem@Block@@QEBA_NXZ
     * @hash   134977892
     */
    MCAPI bool canHurtAndBreakItem() const;
    /**
     * @symbol ?canInstatick@Block@@QEBA_NXZ
     * @hash   1779080118
     */
    MCAPI bool canInstatick() const;
    /**
     * @symbol ?canOccludeVibrations@Block@@QEBA_NXZ
     * @hash   767349270
     */
    MCAPI bool canOccludeVibrations() const;
    /**
     * @symbol ?canProvideFullSupport@Block@@QEBA_NE@Z
     * @hash   89816438
     */
    MCAPI bool canProvideFullSupport(unsigned char) const;
    /**
     * @symbol ?canProvideMultifaceSupport@Block@@QEBA_NE@Z
     * @hash   883562660
     */
    MCAPI bool canProvideMultifaceSupport(unsigned char) const;
    /**
     * @symbol ?canProvideSupport@Block@@QEBA_NEW4BlockSupportType@@@Z
     * @hash   -622012323
     */
    MCAPI bool canProvideSupport(unsigned char, enum class BlockSupportType) const;
    /**
     * @symbol ?canSlide@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1902239884
     */
    MCAPI bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?canSurvive@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1989920958
     */
    MCAPI bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?causesFreezeEffect@Block@@QEBA_NXZ
     * @hash   -1237911306
     */
    MCAPI bool causesFreezeEffect() const;
    /**
     * @symbol ?checkIsPathable@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   -1357667075
     */
    MCAPI bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?clip@Block@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     * @hash   -400195796
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @symbol ?clip@Block@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_NAEBVAABB@@@Z
     * @hash   487848147
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @symbol ?copyState@Block@@QEBAAEBV1@AEBV1@AEBVItemState@@@Z
     * @hash   -1666138412
     */
    MCAPI class Block const & copyState(class Block const &, class ItemState const &) const;
    /**
     * @symbol ?dealsContactDamage@Block@@QEBA_NAEBVActor@@_N@Z
     * @hash   -871492354
     */
    MCAPI bool dealsContactDamage(class Actor const &, bool) const;
    /**
     * @symbol ?destroy@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   275320585
     */
    MCAPI void destroy(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol ?entityInside@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   -150789638
     */
    MCAPI void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @symbol ?executeEvent@Block@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     * @hash   -2070454373
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @symbol ?executeItemEvent@Block@@QEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   -729648753
     */
    MCAPI void executeItemEvent(class ItemStackBase &, std::string const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol ?executeTrigger@Block@@QEBA_NAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
     * @hash   -87765878
     */
    MCAPI bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @symbol ?getAABB@Block@@QEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   -1150485910
     */
    MCAPI class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol ?getAllowsRunes@Block@@QEBA_NXZ
     * @hash   718528374
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @symbol ?getBlockEntityType@Block@@QEBA?AW4BlockActorType@@XZ
     * @hash   -779293894
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @symbol ?getBurnOdds@Block@@QEBAHXZ
     * @hash   608464330
     */
    MCAPI int getBurnOdds() const;
    /**
     * @symbol ?getCollisionShape@Block@@QEBA_NAEAVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   490094807
     */
    MCAPI bool getCollisionShape(class AABB &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @symbol ?getColor@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1423456432
     */
    MCAPI int getColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?getColor@Block@@QEBAHXZ
     * @hash   2079838592
     */
    MCAPI int getColor() const;
    /**
     * @symbol ?getComparatorSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   187781268
     */
    MCAPI int getComparatorSignal(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?getConnectedDirections@Block@@QEBAXAEBVBlockPos@@AEAVBlockSource@@AEA_N222@Z
     * @hash   2101060023
     */
    MCAPI void getConnectedDirections(class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /**
     * @symbol ?getCreativeCategory@Block@@QEBA?AW4CreativeItemCategory@@XZ
     * @hash   1721151420
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol ?getDebugText@Block@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     * @hash   2024166116
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @symbol ?getDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   727568260
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol ?getDestroySpeed@Block@@QEBAMXZ
     * @hash   319471580
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @symbol ?getDirectSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -664775533
     */
    MCAPI int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?getEntityForModification@Block@@QEBAAEAVEntityContext@@XZ
     * @hash   -2055531212
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @symbol ?getExplosionResistance@Block@@QEBAMPEAVActor@@@Z
     * @hash   -1229773850
     */
    MCAPI float getExplosionResistance(class Actor *) const;
    /**
     * @symbol ?getFlameOdds@Block@@QEBAHXZ
     * @hash   1715843080
     */
    MCAPI int getFlameOdds() const;
    /**
     * @symbol ?getFriction@Block@@QEBAMXZ
     * @hash   -356756986
     */
    MCAPI float getFriction() const;
    /**
     * @symbol ?getIgnoresDestroyPermissions@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@@Z
     * @hash   -1742184220
     */
    MCAPI bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?getLegacyBlock@Block@@QEBAAEBVBlockLegacy@@XZ
     * @hash   -1544991808
     */
    MCAPI class BlockLegacy const & getLegacyBlock() const;
    /**
     * @symbol ?getLight@Block@@QEBA?AUBrightness@@XZ
     * @hash   1375072426
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @symbol ?getLightEmission@Block@@QEBA?AUBrightness@@XZ
     * @hash   -314382520
     */
    MCAPI struct Brightness getLightEmission() const;
    /**
     * @symbol ?getMapColor@Block@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   280756752
     */
    MCAPI class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?getMaterial@Block@@QEBAAEBVMaterial@@XZ
     * @hash   130971778
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @symbol ?getMobToSpawn@Block@@QEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
     * @hash   -362370343
     */
    MCAPI class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @symbol ?getName@Block@@QEBAAEBVHashedString@@XZ
     * @hash   -707242604
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol ?getPlacementBlock@Block@@QEBAAEBV1@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   347329502
     */
    MCAPI class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @symbol ?getResourceCount@Block@@QEBAHAEAVRandomize@@H@Z
     * @hash   24271656
     */
    MCAPI int getResourceCount(class Randomize &, int) const;
    /**
     * @symbol ?getRuntimeId@Block@@QEBAAEBIXZ
     * @hash   -1968522845
     */
    MCAPI unsigned int const & getRuntimeId() const;
    /**
     * @symbol ?getSecondPart@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     * @hash   -613931779
     */
    MCAPI bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @symbol ?getSerializationId@Block@@QEBAAEBVCompoundTag@@XZ
     * @hash   1505148396
     */
    MCAPI class CompoundTag const & getSerializationId() const;
    /**
     * @symbol ?getThickness@Block@@QEBAMXZ
     * @hash   1035811376
     */
    MCAPI float getThickness() const;
    /**
     * @symbol ?getTranslucency@Block@@QEBAMXZ
     * @hash   -1618377772
     */
    MCAPI float getTranslucency() const;
    /**
     * @symbol ?getVariant@Block@@QEBAHXZ
     * @hash   1501300756
     */
    MCAPI int getVariant() const;
    /**
     * @symbol ?getVisualShape@Block@@QEBAAEBVAABB@@AEAV2@_N@Z
     * @hash   724963212
     */
    MCAPI class AABB const & getVisualShape(class AABB &, bool) const;
    /**
     * @symbol ?getVisualShapeInWorld@Block@@QEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   1728969344
     */
    MCAPI class AABB const & getVisualShapeInWorld(class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol ?hasBlockEntity@Block@@QEBA_NXZ
     * @hash   -373149034
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @symbol ?hasComparatorSignal@Block@@QEBA_NXZ
     * @hash   -435146028
     */
    MCAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?hasProperty@Block@@QEBA_NW4BlockProperty@@@Z
     * @hash   1632521409
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @symbol ?hasState@Block@@QEBA_NAEBVItemState@@@Z
     * @hash   -614578607
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @symbol ?hasTag@Block@@QEBA_NAEBVHashedString@@@Z
     * @hash   2095186517
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @symbol ?hasTag@Block@@QEBA_NAEB_K@Z
     * @hash   -1238645183
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol ?ignoreEntitiesOnPistonMove@Block@@QEBA_NXZ
     * @hash   -600786794
     */
    MCAPI bool ignoreEntitiesOnPistonMove() const;
    /**
     * @symbol ?initEntity@Block@@QEAAXAEAVEntityRegistry@@@Z
     * @hash   946336932
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @symbol ?initParams@Block@@QEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   1890836904
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol ?isAir@Block@@QEBA_NXZ
     * @hash   1877096468
     */
    MCAPI bool isAir() const;
    /**
     * @symbol ?isAttachedTo@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     * @hash   -863794449
     */
    MCAPI bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @symbol ?isAuxValueRelevantForPicking@Block@@QEBA_NXZ
     * @hash   80348950
     */
    MCAPI bool isAuxValueRelevantForPicking() const;
    /**
     * @symbol ?isBounceBlock@Block@@QEBA_NXZ
     * @hash   -516036220
     */
    MCAPI bool isBounceBlock() const;
    /**
     * @symbol ?isButtonBlock@Block@@QEBA_NXZ
     * @hash   -664436364
     */
    MCAPI bool isButtonBlock() const;
    /**
     * @symbol ?isClimbable@Block@@QEBA_NAEBUIActorMovementProxy@@@Z
     * @hash   -1898412709
     */
    MCAPI bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @symbol ?isContainerBlock@Block@@QEBA_NXZ
     * @hash   -1234517610
     */
    MCAPI bool isContainerBlock() const;
    /**
     * @symbol ?isCropBlock@Block@@QEBA_NXZ
     * @hash   726364420
     */
    MCAPI bool isCropBlock() const;
    /**
     * @symbol ?isDoorBlock@Block@@QEBA_NXZ
     * @hash   -184810156
     */
    MCAPI bool isDoorBlock() const;
    /**
     * @symbol ?isEmpty@Block@@QEBA_NXZ
     * @hash   1014534084
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isFenceBlock@Block@@QEBA_NXZ
     * @hash   132512166
     */
    MCAPI bool isFenceBlock() const;
    /**
     * @symbol ?isFenceGateBlock@Block@@QEBA_NXZ
     * @hash   -683086986
     */
    MCAPI bool isFenceGateBlock() const;
    /**
     * @symbol ?isFilteredOut@Block@@QEBA_NW4BlockRenderLayer@@@Z
     * @hash   -2081958217
     */
    MCAPI bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @symbol ?isHeavy@Block@@QEBA_NXZ
     * @hash   -607257932
     */
    MCAPI bool isHeavy() const;
    /**
     * @symbol ?isInteractiveBlock@Block@@QEBA_NXZ
     * @hash   -1170248202
     */
    MCAPI bool isInteractiveBlock() const;
    /**
     * @symbol ?isLavaFlammable@Block@@QEBA_NXZ
     * @hash   -1537060076
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @symbol ?isLeverBlock@Block@@QEBA_NXZ
     * @hash   1478468182
     */
    MCAPI bool isLeverBlock() const;
    /**
     * @symbol ?isMotionBlockingBlock@Block@@QEBA_NXZ
     * @hash   127452484
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @symbol ?isMultifaceBlock@Block@@QEBA_NXZ
     * @hash   -1486781786
     */
    MCAPI bool isMultifaceBlock() const;
    /**
     * @symbol ?isObstructingChests@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2079579200
     */
    MCAPI bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?isPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   967528984
     */
    MCAPI bool isPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?isPreservingMediumWhenPlaced@Block@@QEBA_NAEBV1@@Z
     * @hash   1869428919
     */
    MCAPI bool isPreservingMediumWhenPlaced(class Block const &) const;
    /**
     * @symbol ?isRailBlock@Block@@QEBA_NXZ
     * @hash   -1753977164
     */
    MCAPI bool isRailBlock() const;
    /**
     * @symbol ?isSignalSource@Block@@QEBA_NXZ
     * @hash   1498451078
     */
    MCAPI bool isSignalSource() const;
    /**
     * @symbol ?isSlabBlock@Block@@QEBA_NXZ
     * @hash   -1836636652
     */
    MCAPI bool isSlabBlock() const;
    /**
     * @symbol ?isSolid@Block@@QEBA_NXZ
     * @hash   540265668
     */
    MCAPI bool isSolid() const;
    /**
     * @symbol ?isSolidBlockingBlock@Block@@QEBA_NXZ
     * @hash   1354450038
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @symbol ?isSolidBlockingBlockAndNotSignalSource@Block@@QEBA_NXZ
     * @hash   1357252790
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;
    /**
     * @symbol ?isStairBlock@Block@@QEBA_NXZ
     * @hash   -168988858
     */
    MCAPI bool isStairBlock() const;
    /**
     * @symbol ?isStemBlock@Block@@QEBA_NXZ
     * @hash   -461604204
     */
    MCAPI bool isStemBlock() const;
    /**
     * @symbol ?isThinFenceBlock@Block@@QEBA_NXZ
     * @hash   174654150
     */
    MCAPI bool isThinFenceBlock() const;
    /**
     * @symbol ?isTopPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1288270956
     */
    MCAPI bool isTopPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?isUnbreakable@Block@@QEBA_NXZ
     * @hash   1448671620
     */
    MCAPI bool isUnbreakable() const;
    /**
     * @symbol ?isWallBlock@Block@@QEBA_NXZ
     * @hash   -67217868
     */
    MCAPI bool isWallBlock() const;
    /**
     * @symbol ?isWaterBlocking@Block@@QEBA_NXZ
     * @hash   2127489412
     */
    MCAPI bool isWaterBlocking() const;
    /**
     * @symbol ?keepState@Block@@QEBAAEBV1@AEBVItemState@@@Z
     * @hash   -976914109
     */
    MCAPI class Block const & keepState(class ItemState const &) const;
    /**
     * @symbol ?mayConsumeFertilizer@Block@@QEBA_NAEAVBlockSource@@@Z
     * @hash   1201093009
     */
    MCAPI bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @symbol ?mayPick@Block@@QEBA_NAEBVBlockSource@@_N@Z
     * @hash   -1687104900
     */
    MCAPI bool mayPick(class BlockSource const &, bool) const;
    /**
     * @symbol ?mayPick@Block@@QEBA_NXZ
     * @hash   217485348
     */
    MCAPI bool mayPick() const;
    /**
     * @symbol ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1175293790
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -1421788780
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?mayPlaceOn@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   437903932
     */
    MCAPI bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?movedByPiston@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   501224745
     */
    MCAPI void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?neighborChanged@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   405299058
     */
    MCAPI void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   -1873467945
     */
    MCAPI void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol ?onFallOn@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     * @hash   865327077
     */
    MCAPI void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @symbol ?onFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   -413872029
     */
    MCAPI bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @symbol ?onLightningHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1781381429
     */
    MCAPI void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?onPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
     * @hash   1116025800
     */
    MCAPI void onPlace(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?onPlayerPlacing@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
     * @hash   -395518426
     */
    MCAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @symbol ?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     * @hash   -441118472
     */
    MCAPI void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @symbol ?onRemove@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   515463771
     */
    MCAPI void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?onStandOn@Block@@QEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     * @hash   975861737
     */
    MCAPI void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @symbol ?onStepOff@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
     * @hash   150875065
     */
    MCAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?onStepOn@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
     * @hash   -944947413
     */
    MCAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?onStructureBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -157255751
     */
    MCAPI void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?onStructureNeighborBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   43358505
     */
    MCAPI void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?playerDestroy@Block@@QEBAXAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -2044387365
     */
    MCAPI void playerDestroy(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?playerWillDestroy@Block@@QEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   2058102618
     */
    MCAPI bool playerWillDestroy(class Player &, class BlockPos const &) const;
    /**
     * @symbol ?popResource@Block@@QEBAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
     * @hash   1624797738
     */
    MCAPI class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &) const;
    /**
     * @symbol ?pushesOutItems@Block@@QEBA_NXZ
     * @hash   -989094698
     */
    MCAPI bool pushesOutItems() const;
    /**
     * @symbol ?pushesUpFallingBlocks@Block@@QEBA_NXZ
     * @hash   -1609997292
     */
    MCAPI bool pushesUpFallingBlocks() const;
    /**
     * @symbol ?queuedTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1105797870
     */
    MCAPI void queuedTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?randomTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   251643026
     */
    MCAPI void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?randomlyModifyPosition@Block@@QEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   1046573325
     */
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @symbol ?shouldRandomTick@Block@@QEBA_NXZ
     * @hash   141293270
     */
    MCAPI bool shouldRandomTick() const;
    /**
     * @symbol ?shouldRandomTickExtraLayer@Block@@QEBA_NXZ
     * @hash   -518035514
     */
    MCAPI bool shouldRandomTickExtraLayer() const;
    /**
     * @symbol ?shouldStopFalling@Block@@QEBA_NAEAVActor@@@Z
     * @hash   -392936551
     */
    MCAPI bool shouldStopFalling(class Actor &) const;
    /**
     * @symbol ?shouldTickOnSetBlock@Block@@QEBA_NXZ
     * @hash   -1030088010
     */
    MCAPI bool shouldTickOnSetBlock() const;
    /**
     * @symbol ?spawnResources@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MAEBVItemStack@@@Z
     * @hash   -1687174762
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, std::vector<class Item const *> *, float, class ItemStack const &) const;
    /**
     * @symbol ?telemetryVariant@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1902626416
     */
    MCAPI int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?toDebugString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1151896174
     */
    MCAPI std::string toDebugString() const;
    /**
     * @symbol ?transformOnFall@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
     * @hash   1462197078
     */
    MCAPI void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @symbol ?triggerEvent@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     * @hash   -1271277301
     */
    MCAPI void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @symbol ?tryGetCopperBehavior@Block@@QEBAPEBVCopperBehavior@@XZ
     * @hash   135618839
     */
    MCAPI class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @symbol ?tryGetInfested@Block@@QEBAPEBV1@XZ
     * @hash   -993501647
     */
    MCAPI class Block const * tryGetInfested() const;
    /**
     * @symbol ?tryGetUninfested@Block@@QEBAPEBV1@XZ
     * @hash   -1130095807
     */
    MCAPI class Block const * tryGetUninfested() const;
    /**
     * @symbol ?trySpawnResourcesOnExplosion@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@M@Z
     * @hash   -698251319
     */
    MCAPI void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float) const;
    /**
     * @symbol ?tryToPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBUActorBlockSyncMessage@@@Z
     * @hash   -377799514
     */
    MCAPI bool tryToPlace(class BlockSource &, class BlockPos const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @symbol ?tryToTill@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
     * @hash   -1639415806
     */
    MCAPI bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @symbol ?updateEntityAfterFallOn@Block@@QEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
     * @hash   618724497
     */
    MCAPI void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @symbol ?updateTallestCollisionShape@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV4@AEBVVec3@@AEAM@Z
     * @hash   -2044027897
     */
    MCAPI bool updateTallestCollisionShape(class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @symbol ?use@Block@@QEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   898545720
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?waterSpreadCausesSpawn@Block@@QEBA_NXZ
     * @hash   1786911526
     */
    MCAPI bool waterSpreadCausesSpawn() const;
    /**
     * @symbol ?BLOCK_DESCRIPTION_PREFIX@Block@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1553597075
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @symbol ?SIZE_OFFSET@Block@@2MB
     * @hash   -2026013261
     */
    MCAPI static float const SIZE_OFFSET;

//protected:
    /**
     * @symbol ?buildSerializationId@Block@@IEAAXI@Z
     * @hash   -1844665049
     */
    MCAPI void buildSerializationId(unsigned int);
    /**
     * @symbol ?setRuntimeId@Block@@IEBAXAEBI@Z
     * @hash   427915813
     */
    MCAPI void setRuntimeId(unsigned int const &) const;

//private:
    /**
     * @symbol ?_getBlockOcclusionType@Block@@AEBA?AW4BlockOcclusionType@@XZ
     * @hash   1010486039
     */
    MCAPI enum class BlockOcclusionType _getBlockOcclusionType() const;
    /**
     * @symbol ?_lockRegistryForRead@Block@@AEBA?AVBlockTypeRegistryReadLock@@XZ
     * @hash   586701194
     */
    MCAPI class BlockTypeRegistryReadLock _lockRegistryForRead() const;
    /**
     * @symbol ?_tryInitEntityIfNotInitialized@Block@@AEAAXXZ
     * @hash   820732348
     */
    MCAPI void _tryInitEntityIfNotInitialized();
    /**
     * @symbol ?getEntity@Block@@AEBAAEBVEntityContext@@XZ
     * @hash   1172555386
     */
    MCAPI class EntityContext const & getEntity() const;

protected:

private:

};