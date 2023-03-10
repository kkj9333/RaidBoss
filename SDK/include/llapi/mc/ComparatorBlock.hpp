/**
 * @file  ComparatorBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorBlock.
 *
 */
class ComparatorBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCK
public:
    class ComparatorBlock& operator=(class ComparatorBlock const &) = delete;
    ComparatorBlock(class ComparatorBlock const &) = delete;
    ComparatorBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   858806821
     */
    virtual ~ComparatorBlock();
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
     * @vftbl  51
     * @symbol ?isSignalSource@ComparatorBlock@@UEBA_NXZ
     * @hash   -1226975426
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  59
     * @symbol ?getDirectSignal@ComparatorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -1240264020
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
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
     * @vftbl  64
     * @symbol ?shouldConnectToRedstone@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   972639376
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -910686018
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   431933217
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  92
     * @symbol ?mayPlace@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1355483945
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   573950057
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@ComparatorBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1102044579
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@ComparatorBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -156215338
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  116
     * @symbol ?triggerEvent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     * @hash   -540222889
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
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
     * @vftbl  146
     * @symbol ?getVariant@ComparatorBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -533878505
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  147
     * @symbol ?canSpawnOn@ComparatorBlock@@UEBA_NPEAVActor@@@Z
     * @hash   654952326
     */
    virtual bool canSpawnOn(class Actor *) const;
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
     * @vftbl  169
     * @symbol ?onPlace@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1297341523
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1599484355
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1626510864
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@ComparatorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -180227268
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  179
     * @symbol ?canSurvive@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   909291545
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@ComparatorBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -861324987
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORBLOCK
    /**
     * @symbol ?isInteractiveBlock@ComparatorBlock@@UEBA_NXZ
     * @hash   996653350
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0ComparatorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     * @hash   -1610487552
     */
    MCAPI ComparatorBlock(std::string const &, int, bool);

//private:
    /**
     * @symbol ?_installCircuit@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   -1601707709
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @symbol ?_refreshOutputState@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -641956953
     */
    MCAPI void _refreshOutputState(class BlockSource &, class BlockPos const &, int) const;

private:

};