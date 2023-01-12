/**
 * @file  ServerLevel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLevel.
 *
 */
class ServerLevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const &) = delete;
    ServerLevel(class ServerLevel const &) = delete;
    ServerLevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    /**
     * @symbol ?consolidateLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     * @hash   -582993148
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol ?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     * @hash   314030850
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol ?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     * @hash   1468716162
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @symbol ?getLevelChunkMetaDataDictionary@ServerLevel@@UEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
     * @hash   -320871009
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @symbol ?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ
     * @hash   297084706
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @symbol ?getOrCreateDimension@ServerLevel@@UEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1631175741
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
     * @hash   -1443757522
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @symbol ?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     * @hash   -2023624486
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @symbol ?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ
     * @hash   -1609107953
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @symbol ?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ
     * @hash   1105938430
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @symbol ?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     * @hash   1905221118
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol ?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
     * @hash   1421611313
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @symbol ?initializeLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     * @hash   -974053619
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol ?loadFunctionManager@ServerLevel@@UEAAXXZ
     * @hash   2133860917
     */
    MCVAPI void loadFunctionManager();
    /**
     * @symbol ?onChunkLoaded@ServerLevel@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   -471601776
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol ?registerEventCoordinators@ServerLevel@@UEAAXXZ
     * @hash   -1741119616
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @symbol ?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
     * @hash   -125663286
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum class CommandOriginSystem);
    /**
     * @symbol ?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
     * @hash   1718085271
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CommandOriginSystem, enum class CurrentCmdVersion);
    /**
     * @symbol ?saveAdditionalData@ServerLevel@@UEAAXXZ
     * @hash   1569112260
     */
    MCVAPI void saveAdditionalData();
    /**
     * @symbol ?saveDynamicProperties@ServerLevel@@UEAAXXZ
     * @hash   -5409813
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @symbol ?setCommandsEnabled@ServerLevel@@UEAAX_N@Z
     * @hash   2090767471
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @symbol ?setServerTickOffset@ServerLevel@@UEAAX_J@Z
     * @hash   1258409134
     */
    MCVAPI void setServerTickOffset(__int64);
    /**
     * @symbol ?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ
     * @hash   763851325
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @symbol ?tick@ServerLevel@@UEAAXXZ
     * @hash   -679818301
     */
    MCVAPI void tick();
    /**
     * @symbol ?updateSleepingPlayerList@ServerLevel@@UEAAXXZ
     * @hash   1756767497
     */
    MCVAPI void updateSleepingPlayerList();
    /**
     * @symbol ??1ServerLevel@@UEAA@XZ
     * @hash   1444692472
     */
    MCVAPI ~ServerLevel();
#endif
    /**
     * @symbol ??0ServerLevel@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@4@AEAVIMinecraftEventing@@AEAVResourcePackManager@@4V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVMinecraftCommands@@AEAVScheduler@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@4@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@4@VItemRegistryRef@@_NV?$weak_ptr@VBlockTypeRegistry@@@4@@Z
     * @hash   -1439365358
     */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, class std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @symbol ?getCommands@ServerLevel@@QEAAAEAVMinecraftCommands@@XZ
     * @hash   823185562
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @symbol ?getDynamicPropertiesDefinition@ServerLevel@@QEAAAEAVDynamicPropertiesDefinition@@XZ
     * @hash   -1967700326
     */
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    /**
     * @symbol ?getFunctionManager@ServerLevel@@QEAAAEAVFunctionManager@@XZ
     * @hash   -1137945270
     */
    MCAPI class FunctionManager & getFunctionManager();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEAAAEAVMobEvents@@XZ
     * @hash   -2004692406
     */
    MCAPI class MobEvents & getMobEvents();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEBAAEBVMobEvents@@XZ
     * @hash   -806491196
     */
    MCAPI class MobEvents const & getMobEvents() const;
    /**
     * @symbol ?getOrAddDynamicProperties@ServerLevel@@QEAAAEAVDynamicProperties@@XZ
     * @hash   145767192
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @symbol ?setShouldSendSleepMessage@ServerLevel@@QEAAX_N@Z
     * @hash   1040396768
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol ?shouldSendSleepMessage@ServerLevel@@QEBA_NXZ
     * @hash   890573054
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol ?tryGetVolumeEntityManager@ServerLevel@@QEBA?AV?$NonOwnerPointer@VVolumeEntityManagerServer@@@Bedrock@@XZ
     * @hash   -317185413
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

};