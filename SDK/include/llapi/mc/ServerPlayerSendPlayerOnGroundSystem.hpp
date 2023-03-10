/**
 * @file  ServerPlayerSendPlayerOnGroundSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerSendPlayerOnGroundSystem.
 *
 */
class ServerPlayerSendPlayerOnGroundSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERSENDPLAYERONGROUNDSYSTEM
public:
    class ServerPlayerSendPlayerOnGroundSystem& operator=(class ServerPlayerSendPlayerOnGroundSystem const &) = delete;
    ServerPlayerSendPlayerOnGroundSystem(class ServerPlayerSendPlayerOnGroundSystem const &) = delete;
    ServerPlayerSendPlayerOnGroundSystem() = delete;
#endif

public:
    /**
     * @symbol ?_sendPlayerOnGround@ServerPlayerSendPlayerOnGroundSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   2068043009
     */
    MCAPI static void _sendPlayerOnGround(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @symbol ?createSystem@ServerPlayerSendPlayerOnGroundSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   77588894
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};