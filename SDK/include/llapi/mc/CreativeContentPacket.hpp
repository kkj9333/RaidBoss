/**
 * @file  CreativeContentPacket.hpp
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
 * @brief MC class CreativeContentPacket.
 *
 */
class CreativeContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVECONTENTPACKET
public:
    class CreativeContentPacket& operator=(class CreativeContentPacket const &) = delete;
    CreativeContentPacket(class CreativeContentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -491235136
     */
    virtual ~CreativeContentPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CreativeContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1613868476
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CreativeContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1211340695
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CreativeContentPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1486733634
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CreativeContentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -729060882
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CreativeContentPacket@@QEAA@XZ
     * @hash   488292718
     */
    MCAPI CreativeContentPacket();
    /**
     * @symbol ??0CreativeContentPacket@@QEAA@AEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@@Z
     * @hash   -1969105373
     */
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const &);

};