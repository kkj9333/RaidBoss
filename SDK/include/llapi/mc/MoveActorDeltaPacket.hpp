/**
 * @file  MoveActorDeltaPacket.hpp
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
 * @brief MC class MoveActorDeltaPacket.
 *
 */
class MoveActorDeltaPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORDELTAPACKET
public:
    class MoveActorDeltaPacket& operator=(class MoveActorDeltaPacket const &) = delete;
    MoveActorDeltaPacket(class MoveActorDeltaPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1961377126
     */
    virtual ~MoveActorDeltaPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@MoveActorDeltaPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1510374386
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@MoveActorDeltaPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1425618273
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@MoveActorDeltaPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   88141320
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@MoveActorDeltaPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1316321640
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0MoveActorDeltaPacket@@QEAA@XZ
     * @hash   -2145953896
     */
    MCAPI MoveActorDeltaPacket();
    /**
     * @symbol ??0MoveActorDeltaPacket@@QEAA@AEBVMoveActorDeltaData@@@Z
     * @hash   -1016848479
     */
    MCAPI MoveActorDeltaPacket(class MoveActorDeltaData const &);

};