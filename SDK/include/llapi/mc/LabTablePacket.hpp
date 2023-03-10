/**
 * @file  LabTablePacket.hpp
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
 * @brief MC class LabTablePacket.
 *
 */
class LabTablePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEPACKET
public:
    class LabTablePacket& operator=(class LabTablePacket const &) = delete;
    LabTablePacket(class LabTablePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -167743373
     */
    virtual ~LabTablePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LabTablePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   432792949
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LabTablePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1591841826
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LabTablePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   2019113093
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LabTablePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   975790453
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LabTablePacket@@QEAA@XZ
     * @hash   2075825189
     */
    MCAPI LabTablePacket();
    /**
     * @symbol ??0LabTablePacket@@QEAA@W4Type@0@AEBVBlockPos@@@Z
     * @hash   1901948532
     */
    MCAPI LabTablePacket(enum class LabTablePacket::Type, class BlockPos const &);
    /**
     * @symbol ??0LabTablePacket@@QEAA@AEBVBlockPos@@W4LabTableReactionType@@@Z
     * @hash   727643267
     */
    MCAPI LabTablePacket(class BlockPos const &, enum class LabTableReactionType);

};