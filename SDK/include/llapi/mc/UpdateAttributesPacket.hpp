/**
 * @file  UpdateAttributesPacket.hpp
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
 * @brief MC class UpdateAttributesPacket.
 *
 */
class UpdateAttributesPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEATTRIBUTESPACKET
public:
    class UpdateAttributesPacket& operator=(class UpdateAttributesPacket const &) = delete;
    UpdateAttributesPacket(class UpdateAttributesPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1614367858
     */
    virtual ~UpdateAttributesPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@UpdateAttributesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -405446650
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@UpdateAttributesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   315338419
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@UpdateAttributesPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1482260756
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@UpdateAttributesPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   429716548
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0UpdateAttributesPacket@@QEAA@XZ
     * @hash   1601884484
     */
    MCAPI UpdateAttributesPacket();
    /**
     * @symbol ??0UpdateAttributesPacket@@QEAA@AEBVActor@@AEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@@Z
     * @hash   1364014082
     */
    MCAPI UpdateAttributesPacket(class Actor const &, std::vector<class AttributeInstanceHandle> const &);

};