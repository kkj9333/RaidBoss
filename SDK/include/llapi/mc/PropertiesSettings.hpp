/**
 * @file  PropertiesSettings.hpp
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
 * @brief MC class PropertiesSettings.
 *
 */
class PropertiesSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTIESSETTINGS
public:
    class PropertiesSettings& operator=(class PropertiesSettings const &) = delete;
    PropertiesSettings(class PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;
#endif

public:
    /**
     * @symbol ??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1688833089
     */
    MCAPI PropertiesSettings(std::string const &);
    /**
     * @symbol ?allowCheats@PropertiesSettings@@QEBA_NXZ
     * @hash   -2127869786
     */
    MCAPI bool allowCheats() const;
    /**
     * @symbol ?areCustomSkinsDisabled@PropertiesSettings@@QEBA_NXZ
     * @hash   -1761928420
     */
    MCAPI bool areCustomSkinsDisabled() const;
    /**
     * @symbol ?canEmitTelemetryEvents@PropertiesSettings@@QEBA_NXZ
     * @hash   1221916144
     */
    MCAPI bool canEmitTelemetryEvents() const;
    /**
     * @symbol ?disablePlayerInteractions@PropertiesSettings@@QEBA_NXZ
     * @hash   875679736
     */
    MCAPI bool disablePlayerInteractions() const;
    /**
     * @symbol ?enableItemStackNetManager@PropertiesSettings@@QEBA_NXZ
     * @hash   -424852616
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol ?forceGamemode@PropertiesSettings@@QEBA_NXZ
     * @hash   -368609276
     */
    MCAPI bool forceGamemode() const;
    /**
     * @symbol ?getChatRestrictionLevel@PropertiesSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     * @hash   1820699016
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol ?getCompressionAlgorithm@PropertiesSettings@@QEBA?AW4PacketCompressionAlgorithm@@XZ
     * @hash   -714110520
     */
    MCAPI enum class PacketCompressionAlgorithm getCompressionAlgorithm() const;
    /**
     * @symbol ?getCompressionThresholdBytesize@PropertiesSettings@@QEBAGXZ
     * @hash   -1271011323
     */
    MCAPI unsigned short getCompressionThresholdBytesize() const;
    /**
     * @symbol ?getCustomProperty@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1303520523
     */
    MCAPI std::string const & getCustomProperty(std::string const &) const;
    /**
     * @symbol ?getDefaultPlayerPermissionLevel@PropertiesSettings@@QEBA?BW4PlayerPermissionLevel@@XZ
     * @hash   -25718114
     */
    MCAPI enum class PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;
    /**
     * @symbol ?getDesiredHttpImplementation@PropertiesSettings@@QEBA?AW4Implementation@Http@Bedrock@@XZ
     * @hash   1045665886
     */
    MCAPI enum class Bedrock::Http::Implementation getDesiredHttpImplementation() const;
    /**
     * @symbol ?getDifficulty@PropertiesSettings@@QEBA?AW4Difficulty@@XZ
     * @hash   -1951809080
     */
    MCAPI enum class Difficulty getDifficulty() const;
    /**
     * @symbol ?getExtraTrustedKeys@PropertiesSettings@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1127220693
     */
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;
    /**
     * @symbol ?getGameMode@PropertiesSettings@@QEBA?AW4GameType@@XZ
     * @hash   92038650
     */
    MCAPI enum class GameType getGameMode() const;
    /**
     * @symbol ?getLanguage@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -303153956
     */
    MCAPI std::string const & getLanguage() const;
    /**
     * @symbol ?getLevelName@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1905453906
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @symbol ?getLevelSeed@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1365314082
     */
    MCAPI std::string const & getLevelSeed() const;
    /**
     * @symbol ?getLevelType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1682887778
     */
    MCAPI std::string const & getLevelType() const;
    /**
     * @symbol ?getMaxPlayerIdleTime@PropertiesSettings@@QEBA?AV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@XZ
     * @hash   1885313275
     */
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const;
    /**
     * @symbol ?getMaxPlayers@PropertiesSettings@@QEBAHXZ
     * @hash   -1394884842
     */
    MCAPI int getMaxPlayers() const;
    /**
     * @symbol ?getMaxThreads@PropertiesSettings@@QEBAIXZ
     * @hash   1276201328
     */
    MCAPI unsigned int getMaxThreads() const;
    /**
     * @symbol ?getMaxViewDistanceChunks@PropertiesSettings@@QEBAHXZ
     * @hash   -142458344
     */
    MCAPI int getMaxViewDistanceChunks() const;
    /**
     * @symbol ?getMotd@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2006892044
     */
    MCAPI std::string const & getMotd() const;
    /**
     * @symbol ?getOpPermissionLevel@PropertiesSettings@@QEBA?AW4CommandPermissionLevel@@XZ
     * @hash   1167546066
     */
    MCAPI enum class CommandPermissionLevel getOpPermissionLevel() const;
    /**
     * @symbol ?getPlayerMovementSettings@PropertiesSettings@@QEBAAEBUPlayerMovementSettings@@XZ
     * @hash   1073937242
     */
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @symbol ?getRemoteServerCommunicationEndpoint@PropertiesSettings@@QEBA?AUNetworkAddress@@XZ
     * @hash   -1217643310
     */
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    /**
     * @symbol ?getScriptSettings@PropertiesSettings@@QEBAAEBUScriptSettings@@XZ
     * @hash   -1171715158
     */
    MCAPI struct ScriptSettings const & getScriptSettings() const;
    /**
     * @symbol ?getServerId@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1478512500
     */
    MCAPI std::string const & getServerId() const;
    /**
     * @symbol ?getServerPort@PropertiesSettings@@QEBAGXZ
     * @hash   -800326059
     */
    MCAPI unsigned short getServerPort() const;
    /**
     * @symbol ?getServerPortv6@PropertiesSettings@@QEBAGXZ
     * @hash   -474098011
     */
    MCAPI unsigned short getServerPortv6() const;
    /**
     * @symbol ?getServerTickRange@PropertiesSettings@@QEBAHXZ
     * @hash   -685662792
     */
    MCAPI int getServerTickRange() const;
    /**
     * @symbol ?getServerType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -153969172
     */
    MCAPI std::string const & getServerType() const;
    /**
     * @symbol ?getServerWakeupFrequency@PropertiesSettings@@QEBAHXZ
     * @hash   880566200
     */
    MCAPI int getServerWakeupFrequency() const;
    /**
     * @symbol ?getTransportLayerType@PropertiesSettings@@QEBA?AW4TransportLayer@@XZ
     * @hash   -1417839940
     */
    MCAPI enum class TransportLayer getTransportLayerType() const;
    /**
     * @symbol ?isClientSideGenEnabled@PropertiesSettings@@QEBA_NXZ
     * @hash   -401497284
     */
    MCAPI bool isClientSideGenEnabled() const;
    /**
     * @symbol ?isContentLogFileEnabled@PropertiesSettings@@QEBA_NXZ
     * @hash   1656752660
     */
    MCAPI bool isContentLogFileEnabled() const;
    /**
     * @symbol ?isItemTransactionManagerLoggingEnabled@PropertiesSettings@@QEBA_NXZ
     * @hash   -1881882498
     */
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;
    /**
     * @symbol ?isPropertiesFileLoaded@PropertiesSettings@@QEBA?B_NXZ
     * @hash   1310462216
     */
    MCAPI bool const isPropertiesFileLoaded() const;
    /**
     * @symbol ?isServerVisibleToLanDiscovery@PropertiesSettings@@QEBA_NXZ
     * @hash   2109684754
     */
    MCAPI bool isServerVisibleToLanDiscovery() const;
    /**
     * @symbol ?texturePackRequired@PropertiesSettings@@QEBA_NXZ
     * @hash   -1311931590
     */
    MCAPI bool texturePackRequired() const;
    /**
     * @symbol ?useAllowList@PropertiesSettings@@QEBA_NXZ
     * @hash   -1626248126
     */
    MCAPI bool useAllowList() const;
    /**
     * @symbol ?useMsaGamertagsOnly@PropertiesSettings@@QEBA_NXZ
     * @hash   505457878
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol ?useOnlineAuthentication@PropertiesSettings@@QEBA_NXZ
     * @hash   -319923288
     */
    MCAPI bool useOnlineAuthentication() const;
    /**
     * @symbol ?useWebsocketEncryption@PropertiesSettings@@QEBA_NXZ
     * @hash   -1786360648
     */
    MCAPI bool useWebsocketEncryption() const;
    /**
     * @symbol ?websocketRetryTime@PropertiesSettings@@QEBAMXZ
     * @hash   -969772698
     */
    MCAPI float websocketRetryTime() const;
    /**
     * @symbol ??1PropertiesSettings@@QEAA@XZ
     * @hash   1577170880
     */
    MCAPI ~PropertiesSettings();
    /**
     * @symbol ?parseBoolValue@PropertiesSettings@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   708666097
     */
    MCAPI static bool parseBoolValue(std::string const &);
    /**
     * @symbol ?parseGameMode@PropertiesSettings@@SA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1494587255
     */
    MCAPI static enum class GameType parseGameMode(std::string const &);

};