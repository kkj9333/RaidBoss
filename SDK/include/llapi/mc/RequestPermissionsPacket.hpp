/**
 * @file  RequestPermissionsPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestPermissionsPacket.
 *
 */
class RequestPermissionsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTPERMISSIONSPACKET
public:
    class RequestPermissionsPacket& operator=(class RequestPermissionsPacket const &) = delete;
    RequestPermissionsPacket(class RequestPermissionsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1035689433
     */
    virtual ~RequestPermissionsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@RequestPermissionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -957221599
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@RequestPermissionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -403004466
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@RequestPermissionsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -66591207
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@RequestPermissionsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   657176473
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RequestPermissionsPacket@@QEAA@XZ
     * @hash   323574857
     */
    MCAPI RequestPermissionsPacket();
    /**
     * @symbol ?getCustomAbilityValue@RequestPermissionsPacket@@QEBA_NW4AbilitiesIndex@@@Z
     * @hash   -875267493
     */
    MCAPI bool getCustomAbilityValue(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getPlayerPermissions@RequestPermissionsPacket@@QEBA?AW4PlayerPermissionLevel@@XZ
     * @hash   -916905342
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?getTargetPlayerId@RequestPermissionsPacket@@QEBA?AUActorUniqueID@@XZ
     * @hash   1567774702
     */
    MCAPI struct ActorUniqueID getTargetPlayerId() const;

};