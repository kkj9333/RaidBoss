/**
 * @file  FilterTextPacket.hpp
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
 * @brief MC class FilterTextPacket.
 *
 */
class FilterTextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEXTPACKET
public:
    class FilterTextPacket& operator=(class FilterTextPacket const &) = delete;
    FilterTextPacket(class FilterTextPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -992757129
     */
    virtual ~FilterTextPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@FilterTextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   274327441
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@FilterTextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1761252926
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@FilterTextPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1546312183
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@FilterTextPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -502769335
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0FilterTextPacket@@QEAA@XZ
     * @hash   893579465
     */
    MCAPI FilterTextPacket();
    /**
     * @symbol ??0FilterTextPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   220636681
     */
    MCAPI FilterTextPacket(std::string const &, bool);

};