/**
 * @file  GameTestResultsPacket.hpp
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
 * @brief MC class GameTestResultsPacket.
 *
 */
class GameTestResultsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTRESULTSPACKET
public:
    class GameTestResultsPacket& operator=(class GameTestResultsPacket const &) = delete;
    GameTestResultsPacket(class GameTestResultsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   959210664
     */
    virtual ~GameTestResultsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@GameTestResultsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -143793900
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@GameTestResultsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1250401217
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@GameTestResultsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1916823322
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@GameTestResultsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1894775590
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0GameTestResultsPacket@@QEAA@XZ
     * @hash   -1713156250
     */
    MCAPI GameTestResultsPacket();
    /**
     * @symbol ??0GameTestResultsPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_N@Z
     * @hash   1452616078
     */
    MCAPI GameTestResultsPacket(std::string const &, std::string const &, bool);

};