/**
 * @file  NBCastleSmallCorridorLeftTurnPiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBCastleSmallCorridorLeftTurnPiece.
 *
 */
class NBCastleSmallCorridorLeftTurnPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORLEFTTURNPIECE
public:
    class NBCastleSmallCorridorLeftTurnPiece& operator=(class NBCastleSmallCorridorLeftTurnPiece const &) = delete;
    NBCastleSmallCorridorLeftTurnPiece(class NBCastleSmallCorridorLeftTurnPiece const &) = delete;
    NBCastleSmallCorridorLeftTurnPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1517718097
     */
    virtual ~NBCastleSmallCorridorLeftTurnPiece();
    /**
     * @vftbl  2
     * @symbol ?getType@NBCastleSmallCorridorLeftTurnPiece@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -11807738
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@NBCastleSmallCorridorLeftTurnPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   316734506
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@NBCastleSmallCorridorLeftTurnPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1266848190
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};