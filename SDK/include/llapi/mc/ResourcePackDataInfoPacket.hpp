/**
 * @file  ResourcePackDataInfoPacket.hpp
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
 * @brief MC class ResourcePackDataInfoPacket.
 *
 */
class ResourcePackDataInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    string mPackId;
    unsigned int maxChunkSize;
    int chunkCount;
    unsigned __int64 compressedPackSize;
    string sha256;
    bool isPremium;
    int packType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKDATAINFOPACKET
public:
    class ResourcePackDataInfoPacket& operator=(class ResourcePackDataInfoPacket const &) = delete;
    ResourcePackDataInfoPacket(class ResourcePackDataInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1209671569
     */
    virtual ~ResourcePackDataInfoPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ResourcePackDataInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -335408953
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ResourcePackDataInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   52158452
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ResourcePackDataInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1039896387
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ResourcePackDataInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1951703299
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ResourcePackDataInfoPacket@@QEAA@XZ
     * @hash   45202211
     */
    MCAPI ResourcePackDataInfoPacket();
    /**
     * @symbol ??0ResourcePackDataInfoPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IH_K0_NW4PackType@@@Z
     * @hash   236840136
     */
    MCAPI ResourcePackDataInfoPacket(std::string const &, unsigned int, int, unsigned __int64, std::string const &, bool, enum class PackType);

};