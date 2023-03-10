/**
 * @file  NetherFortressPiece.hpp
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
 * @brief MC class NetherFortressPiece.
 *
 */
class NetherFortressPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSPIECE
public:
    class NetherFortressPiece& operator=(class NetherFortressPiece const &) = delete;
    NetherFortressPiece(class NetherFortressPiece const &) = delete;
    NetherFortressPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1666911302
     */
    virtual ~NetherFortressPiece();
    /**
     * @vftbl  4
     * @symbol ?postProcess@NetherFortressPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -25515595
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@NetherFortressPiece@@UEBAXAEAVLevelChunk@@@Z
     * @hash   1480428949
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol ??0NetherFortressPiece@@QEAA@H@Z
     * @hash   11688823
     */
    MCAPI NetherFortressPiece(int);
    /**
     * @symbol ?findAndCreateBridgePieceFactory@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     * @hash   1403266983
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @symbol ?generateAndAddPiece@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH_N@Z
     * @hash   400966777
     */
    MCAPI class StructurePiece * generateAndAddPiece(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int, bool);
    /**
     * @symbol ?generateChildForward@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     * @hash   -2079697198
     */
    MCAPI class StructurePiece * generateChildForward(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol ?generateChildLeft@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     * @hash   1584486612
     */
    MCAPI class StructurePiece * generateChildLeft(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol ?generateChildRight@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     * @hash   -1163454592
     */
    MCAPI class StructurePiece * generateChildRight(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol ?generatePiece@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAVNBStartPiece@@AEAV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     * @hash   -526640636
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(class NBStartPiece &, std::vector<class PieceWeight> &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};