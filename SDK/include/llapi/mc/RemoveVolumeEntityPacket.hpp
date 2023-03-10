/**
 * @file  RemoveVolumeEntityPacket.hpp
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
 * @brief MC class RemoveVolumeEntityPacket.
 *
 */
class RemoveVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEVOLUMEENTITYPACKET
public:
    class RemoveVolumeEntityPacket& operator=(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   222079731
     */
    virtual ~RemoveVolumeEntityPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@RemoveVolumeEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   980727605
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@RemoveVolumeEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   822470114
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@RemoveVolumeEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   124844613
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@RemoveVolumeEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1540602011
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RemoveVolumeEntityPacket@@QEAA@AEAVEntityContext@@@Z
     * @hash   1677324348
     */
    MCAPI RemoveVolumeEntityPacket(class EntityContext &);

};