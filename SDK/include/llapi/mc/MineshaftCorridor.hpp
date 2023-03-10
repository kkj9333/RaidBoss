/**
 * @file  MineshaftCorridor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MineshaftCorridor.
 *
 */
class MineshaftCorridor : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTCORRIDOR
public:
    class MineshaftCorridor& operator=(class MineshaftCorridor const &) = delete;
    MineshaftCorridor(class MineshaftCorridor const &) = delete;
    MineshaftCorridor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -258851745
     */
    virtual ~MineshaftCorridor();
    /**
     * @vftbl  2
     * @symbol ?getType@MineshaftCorridor@@UEBA?AW4StructurePieceType@@XZ
     * @hash   1002925514
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@MineshaftCorridor@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   2022274006
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@MineshaftCorridor@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1459870418
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@MineshaftCorridor@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   274530554
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?_placeCobWeb@MineshaftCorridor@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHH@Z
     * @hash   521783786
     */
    MCAPI void _placeCobWeb(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int);
    /**
     * @symbol ?_placeSupport@MineshaftCorridor@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHAEAVRandom@@@Z
     * @hash   774038773
     */
    MCAPI void _placeSupport(class BlockSource &, class BoundingBox const &, int, int, int, int, int, class Random &);

//private:
    /**
     * @symbol ?_fillPillarDownOrChainUp@MineshaftCorridor@@AEAAXAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
     * @hash   -572471311
     */
    MCAPI void _fillPillarDownOrChainUp(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @symbol ?_placeDoubleLowerOrUpperSupport@MineshaftCorridor@@AEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
     * @hash   -2131986034
     */
    MCAPI void _placeDoubleLowerOrUpperSupport(class BlockSource &, class BoundingBox const &, int, int, int);

private:

};