/**
 * @file  PlayerInputPacket.hpp
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
 * @brief MC class PlayerInputPacket.
 *
 */
class PlayerInputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINPUTPACKET
public:
    class PlayerInputPacket& operator=(class PlayerInputPacket const &) = delete;
    PlayerInputPacket(class PlayerInputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   380094111
     */
    virtual ~PlayerInputPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1988865197
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   149948250
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerInputPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   735755277
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerInputPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -176314227
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerInputPacket@@QEAA@XZ
     * @hash   -121635043
     */
    MCAPI PlayerInputPacket();

};