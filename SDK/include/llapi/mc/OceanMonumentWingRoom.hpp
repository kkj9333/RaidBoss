/**
 * @file  OceanMonumentWingRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentWingRoom.
 *
 */
class OceanMonumentWingRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTWINGROOM
public:
    class OceanMonumentWingRoom& operator=(class OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom(class OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2124434137
     */
    virtual ~OceanMonumentWingRoom();
    /**
     * @vftbl  2
     * @symbol ?getType@OceanMonumentWingRoom@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -288623168
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentWingRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -117254152
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@OceanMonumentWingRoom@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   60609332
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

};