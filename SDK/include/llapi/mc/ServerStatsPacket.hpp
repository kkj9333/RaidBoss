/**
 * @file  ServerStatsPacket.hpp
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
 * @brief MC class ServerStatsPacket.
 *
 */
class ServerStatsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSTATSPACKET
public:
    class ServerStatsPacket& operator=(class ServerStatsPacket const &) = delete;
    ServerStatsPacket(class ServerStatsPacket const &) = delete;
    ServerStatsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2032257170
     */
    virtual ~ServerStatsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ServerStatsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   708697290
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ServerStatsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -458467465
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ServerStatsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1110091824
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ServerStatsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -31570544
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};