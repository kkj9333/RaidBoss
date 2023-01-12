/**
 * @file  ShowProfilePacket.hpp
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
 * @brief MC class ShowProfilePacket.
 *
 */
class ShowProfilePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWPROFILEPACKET
public:
    class ShowProfilePacket& operator=(class ShowProfilePacket const &) = delete;
    ShowProfilePacket(class ShowProfilePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2039655778
     */
    virtual ~ShowProfilePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ShowProfilePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1411498074
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ShowProfilePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1016186105
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ShowProfilePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -2025604704
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ShowProfilePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1204033232
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ShowProfilePacket@@QEAA@XZ
     * @hash   -2027346432
     */
    MCAPI ShowProfilePacket();

};