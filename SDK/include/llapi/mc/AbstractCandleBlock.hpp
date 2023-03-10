/**
 * @file  AbstractCandleBlock.hpp
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
 * @brief MC class AbstractCandleBlock.
 *
 */
class AbstractCandleBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCANDLEBLOCK
public:
    class AbstractCandleBlock& operator=(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2084069300
     */
    virtual ~AbstractCandleBlock();
    /**
     * @vftbl  19
     * @hash   -234496484
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
     * @symbol ?isWaterBlocking@AbstractCandleBlock@@UEBA_NXZ
     * @hash   -845289364
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
     * @hash   -145769276
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
     * @vftbl  62
     * @symbol ?canContainLiquid@AbstractCandleBlock@@UEBA_NXZ
     * @hash   506722506
     */
    virtual bool canContainLiquid() const;
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
     * @vftbl  100
     * @symbol ?neighborChanged@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1610191328
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  113
     * @symbol ?entityInside@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     * @hash   -445527400
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
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
     * @vftbl  151
     * @symbol ?animateTick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   790436163
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  153
     * @symbol ?getLightEmission@AbstractCandleBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
     * @hash   1917069014
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
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
     * @symbol ?tick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1186852964
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1626510864
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  192
     * @symbol ?_getNumCandles@AbstractCandleBlock@@MEBAHAEBVBlock@@@Z
     * @hash   1791682045
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     * @hash   419664596
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @vftbl  194
     * @symbol ?_tryLightOnFire@AbstractCandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   739957067
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  195
     * @hash   -389044195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @hash   1536977694
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @hash   1537501439
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  198
     * @hash   1538363456
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl  199
     * @hash   1539286977
     */
    virtual void __unk_vfn_199();
    /**
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2012044342
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCANDLEBLOCK
    /**
     * @symbol ?canBeSilkTouched@AbstractCandleBlock@@UEBA_NXZ
     * @hash   -950051984
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?hasVariableLighting@AbstractCandleBlock@@UEBA_NXZ
     * @hash   -275483796
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @symbol ?isInteractiveBlock@AbstractCandleBlock@@UEBA_NXZ
     * @hash   -1159027777
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0AbstractCandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   -1565118491
     */
    MCAPI AbstractCandleBlock(std::string const &, int, class Material const &);

//protected:
    /**
     * @symbol ?_checkForWaterlogging@AbstractCandleBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -784346454
     */
    MCAPI void _checkForWaterlogging(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_extinguish@AbstractCandleBlock@@IEBAXPEAVActor@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1668503068
     */
    MCAPI void _extinguish(class Actor *, class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canBeLit@AbstractCandleBlock@@KA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -964109048
     */
    MCAPI static bool _canBeLit(class Block const &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isLit@AbstractCandleBlock@@KA_NAEBVBlock@@@Z
     * @hash   1691507599
     */
    MCAPI static bool _isLit(class Block const &);

protected:

};