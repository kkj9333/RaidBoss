/**
 * @file  SettingsCommandPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SettingsCommandPacket.
 *
 */
class SettingsCommandPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTINGSCOMMANDPACKET
public:
    class SettingsCommandPacket& operator=(class SettingsCommandPacket const &) = delete;
    SettingsCommandPacket(class SettingsCommandPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -842019042
     */
    virtual ~SettingsCommandPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SettingsCommandPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   13041246
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SettingsCommandPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1506084597
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SettingsCommandPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -362561076
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SettingsCommandPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -2089928516
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SettingsCommandPacket@@QEAA@XZ
     * @hash   175841388
     */
    MCAPI SettingsCommandPacket();
    /**
     * @symbol ?getCommandString@SettingsCommandPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2035723288
     */
    MCAPI std::string const & getCommandString() const;
    /**
     * @symbol ?getSupressOutput@SettingsCommandPacket@@QEBA_NXZ
     * @hash   -844921040
     */
    MCAPI bool getSupressOutput() const;

};