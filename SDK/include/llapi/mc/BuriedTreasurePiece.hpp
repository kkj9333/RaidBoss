/**
 * @file  BuriedTreasurePiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuriedTreasurePiece.
 *
 */
class BuriedTreasurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREPIECE
public:
    class BuriedTreasurePiece& operator=(class BuriedTreasurePiece const &) = delete;
    BuriedTreasurePiece(class BuriedTreasurePiece const &) = delete;
    BuriedTreasurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1829572508
     */
    virtual ~BuriedTreasurePiece();
    /**
     * @vftbl  2
     * @symbol ?getType@BuriedTreasurePiece@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -2020505163
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@BuriedTreasurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1287645501
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

//private:
    /**
     * @symbol ?_isCovered@BuriedTreasurePiece@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   617602109
     */
    MCAPI bool _isCovered(class BlockSource const &, class BlockPos const &) const;

private:

};