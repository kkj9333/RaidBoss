/**
 * @file  MultifaceBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultifaceBlock.
 *
 */
class MultifaceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEBLOCK
public:
    class MultifaceBlock& operator=(class MultifaceBlock const &) = delete;
    MultifaceBlock(class MultifaceBlock const &) = delete;
    MultifaceBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -371304863
     */
    virtual ~MultifaceBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@MultifaceBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   112367095
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?isWaterBlocking@MultifaceBlock@@UEBA_NXZ
     * @hash   -1492439277
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -153226636
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  57
     * @symbol ?sanitizeFillBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     * @hash   2094623114
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  91
     * @symbol ?mayPlace@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   828644098
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1073104999
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   133079222
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  142
     * @symbol ?getVisualShapeInWorld@MultifaceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   -44029783
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1083118861
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  177
     * @symbol ?clip@MultifaceBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     * @hash   -813101687
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl  179
     * @symbol ?canSurvive@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   516020313
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  192
     * @symbol ?getMultifaceBlock@SculkVeinBlock@@UEBAAEBVBlock@@XZ
     * @hash   -2129323703
     */
    virtual class Block const & getMultifaceBlock() const = 0;
    /**
     * @vftbl  193
     * @symbol ?getMultifaceSpreader@SculkVeinBlock@@UEBAAEBVMultifaceSpreader@@XZ
     * @hash   -1684502093
     */
    virtual class MultifaceSpreader const & getMultifaceSpreader() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEBLOCK
    /**
     * @symbol ?isMultifaceBlock@MultifaceBlock@@UEBA_NXZ
     * @hash   1708588402
     */
    MCVAPI bool isMultifaceBlock() const;
#endif
    /**
     * @symbol ??0MultifaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   1607606302
     */
    MCAPI MultifaceBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?removeFace@MultifaceBlock@@QEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@E_N@Z
     * @hash   -763357691
     */
    MCAPI void removeFace(class IBlockWorldGenAPI &, class BlockSource *, class Block const &, class BlockPos const &, unsigned char, bool) const;
    /**
     * @symbol ?MULTIFACE_ALL@MultifaceBlock@@2HB
     * @hash   1340377755
     */
    MCAPI static int const MULTIFACE_ALL;
    /**
     * @symbol ?MULTIFACE_DOWN@MultifaceBlock@@2HB
     * @hash   -129351599
     */
    MCAPI static int const MULTIFACE_DOWN;
    /**
     * @symbol ?MULTIFACE_EAST@MultifaceBlock@@2HB
     * @hash   1708078389
     */
    MCAPI static int const MULTIFACE_EAST;
    /**
     * @symbol ?MULTIFACE_NORTH@MultifaceBlock@@2HB
     * @hash   332068431
     */
    MCAPI static int const MULTIFACE_NORTH;
    /**
     * @symbol ?MULTIFACE_SIDES@MultifaceBlock@@2HB
     * @hash   589517111
     */
    MCAPI static int const MULTIFACE_SIDES;
    /**
     * @symbol ?MULTIFACE_SOUTH@MultifaceBlock@@2HB
     * @hash   -1793654457
     */
    MCAPI static int const MULTIFACE_SOUTH;
    /**
     * @symbol ?MULTIFACE_UP@MultifaceBlock@@2HB
     * @hash   -430506827
     */
    MCAPI static int const MULTIFACE_UP;
    /**
     * @symbol ?MULTIFACE_WEST@MultifaceBlock@@2HB
     * @hash   -1029123731
     */
    MCAPI static int const MULTIFACE_WEST;
    /**
     * @symbol ?convertOldMultifaceToNewMultifaceValue@MultifaceBlock@@SAHH@Z
     * @hash   2141788871
     */
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);
    /**
     * @symbol ?getBlockForPlacement@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -588660770
     */
    MCAPI static class Block const & getBlockForPlacement(class Block const &, class Block const &, class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?getBlockForPlacementWorldGen@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
     * @hash   802336974
     */
    MCAPI static class Block const & getBlockForPlacementWorldGen(class Block const &, class Block const &, class IBlockWorldGenAPI &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?getMultifaceValueFromFace@MultifaceBlock@@SAHE@Z
     * @hash   -645641414
     */
    MCAPI static int getMultifaceValueFromFace(unsigned char);
    /**
     * @symbol ?hasFace@MultifaceBlock@@SA_NAEBVBlock@@E@Z
     * @hash   -686898445
     */
    MCAPI static bool hasFace(class Block const &, unsigned char);

//protected:
    /**
     * @symbol ?_canSpread@MultifaceBlock@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     * @hash   -479577348
     */
    MCAPI bool _canSpread(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_getNumSides@MultifaceBlock@@IEBAHAEBVBlock@@@Z
     * @hash   -1375050419
     */
    MCAPI int _getNumSides(class Block const &) const;

//private:
    /**
     * @symbol ?_removeBlock@MultifaceBlock@@AEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   -1790492004
     */
    MCAPI void _removeBlock(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, bool) const;

protected:

private:

};