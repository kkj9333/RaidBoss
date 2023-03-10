/**
 * @file  AddPlayerPacket.hpp
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
 * @brief MC class AddPlayerPacket.
 *
 */
class AddPlayerPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPLAYERPACKET
public:
    class AddPlayerPacket& operator=(class AddPlayerPacket const &) = delete;
    AddPlayerPacket(class AddPlayerPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1383008936
     */
    virtual ~AddPlayerPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AddPlayerPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2004388484
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AddPlayerPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   234145073
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AddPlayerPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -328400202
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AddPlayerPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   389194838
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AddPlayerPacket@@QEAA@XZ
     * @hash   -826256746
     */
    MCAPI AddPlayerPacket();
    /**
     * @symbol ??0AddPlayerPacket@@QEAA@AEAVPlayer@@@Z
     * @hash   -1108310837
     */
    MCAPI AddPlayerPacket(class Player &);

};