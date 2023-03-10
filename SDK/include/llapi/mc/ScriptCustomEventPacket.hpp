/**
 * @file  ScriptCustomEventPacket.hpp
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
 * @brief MC class ScriptCustomEventPacket.
 *
 */
class ScriptCustomEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCUSTOMEVENTPACKET
public:
    class ScriptCustomEventPacket& operator=(class ScriptCustomEventPacket const &) = delete;
    ScriptCustomEventPacket(class ScriptCustomEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1767331156
     */
    virtual ~ScriptCustomEventPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ScriptCustomEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -114306040
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ScriptCustomEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1107259723
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ScriptCustomEventPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   943231666
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ScriptCustomEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1445354370
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ScriptCustomEventPacket@@QEAA@XZ
     * @hash   -237208878
     */
    MCAPI ScriptCustomEventPacket();

};