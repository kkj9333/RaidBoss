/**
 * @file  RequestNetworkSettingsPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestNetworkSettingsPacket.
 *
 */
class RequestNetworkSettingsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTNETWORKSETTINGSPACKET
public:
    class RequestNetworkSettingsPacket& operator=(class RequestNetworkSettingsPacket const &) = delete;
    RequestNetworkSettingsPacket(class RequestNetworkSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1279781292
     */
    virtual ~RequestNetworkSettingsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@RequestNetworkSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1773925660
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@RequestNetworkSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1090099601
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@RequestNetworkSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1967325354
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@RequestNetworkSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   389664630
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RequestNetworkSettingsPacket@@QEAA@XZ
     * @hash   731856294
     */
    MCAPI RequestNetworkSettingsPacket();

};