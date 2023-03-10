/**
 * @file  CodeBuilderPacket.hpp
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
 * @brief MC class CodeBuilderPacket.
 *
 */
class CodeBuilderPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERPACKET
public:
    class CodeBuilderPacket& operator=(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2038970340
     */
    virtual ~CodeBuilderPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CodeBuilderPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1093108904
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CodeBuilderPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -284447435
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CodeBuilderPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   901484370
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CodeBuilderPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -925872190
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};