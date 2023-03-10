/**
 * @file  NetworkChunkPublisherUpdatePacket.hpp
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
 * @brief MC class NetworkChunkPublisherUpdatePacket.
 *
 */
class NetworkChunkPublisherUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHERUPDATEPACKET
public:
    class NetworkChunkPublisherUpdatePacket& operator=(class NetworkChunkPublisherUpdatePacket const &) = delete;
    NetworkChunkPublisherUpdatePacket(class NetworkChunkPublisherUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   715588604
     */
    virtual ~NetworkChunkPublisherUpdatePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@NetworkChunkPublisherUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2014554880
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@NetworkChunkPublisherUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1123031635
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@NetworkChunkPublisherUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   901018362
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@NetworkChunkPublisherUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2145311290
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0NetworkChunkPublisherUpdatePacket@@QEAA@XZ
     * @hash   -1615113942
     */
    MCAPI NetworkChunkPublisherUpdatePacket();
    /**
     * @symbol ??0NetworkChunkPublisherUpdatePacket@@QEAA@AEBVBlockPos@@I@Z
     * @hash   -407364900
     */
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const &, unsigned int);

};