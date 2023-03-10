/**
 * @file  DispenserBlock.hpp
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
 * @brief MC class DispenserBlock.
 *
 */
class DispenserBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPENSERBLOCK
public:
    class DispenserBlock& operator=(class DispenserBlock const &) = delete;
    DispenserBlock(class DispenserBlock const &) = delete;
    DispenserBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   83441058
     */
    virtual ~DispenserBlock();
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
     * @hash   -182779308
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
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -908594851
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1227409424
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@DispenserBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   804309490
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@DispenserBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -1479317657
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1482441588
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol ?getComparatorSignal@DispenserBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   130996030
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol ?getVariant@DispenserBlock@@UEBAHAEBVBlock@@@Z
     * @hash   372243496
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  149
     * @symbol ?getMappedFace@DispenserBlock@@UEBAEEAEBVBlock@@@Z
     * @hash   -1345497002
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@DispenserBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   934944095
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  163
     * @symbol ?onRemove@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   698358439
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @symbol ?onPlace@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1119116524
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1057337758
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1626510864
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@DispenserBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -189326819
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@DispenserBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -86411402
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  193
     * @symbol ?getTickDelay@DispenserBlock@@UEBAHXZ
     * @hash   -262295565
     */
    virtual int getTickDelay() const;
    /**
     * @vftbl  194
     * @symbol ?dispenseFrom@DispenserBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   448109924
     */
    virtual void dispenseFrom(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERBLOCK
    /**
     * @symbol ?hasComparatorSignal@DispenserBlock@@UEBA_NXZ
     * @hash   831431368
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?isContainerBlock@DispenserBlock@@UEBA_NXZ
     * @hash   1243766470
     */
    MCVAPI bool isContainerBlock() const;
    /**
     * @symbol ?isInteractiveBlock@DispenserBlock@@UEBA_NXZ
     * @hash   -1233351899
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0DispenserBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   355922934
     */
    MCAPI DispenserBlock(std::string const &, int);
    /**
     * @symbol ?ejectItem@DispenserBlock@@SAXAEAVBlockSource@@AEBVVec3@@EAEBVItemStack@@@Z
     * @hash   -704918970
     */
    MCAPI static void ejectItem(class BlockSource &, class Vec3 const &, unsigned char, class ItemStack const &);

//protected:
    /**
     * @symbol ?ejectItem@DispenserBlock@@IEBAXAEAVBlockSource@@AEBVVec3@@EAEBVItemStack@@AEAVContainer@@H@Z
     * @hash   -770937281
     */
    MCAPI void ejectItem(class BlockSource &, class Vec3 const &, unsigned char, class ItemStack const &, class Container &, int) const;
    /**
     * @symbol ?getDispensePosition@DispenserBlock@@IEBA?AVVec3@@AEAVBlockSource@@AEBV2@@Z
     * @hash   434290662
     */
    MCAPI class Vec3 getDispensePosition(class BlockSource &, class Vec3 const &) const;
    /**
     * @symbol ?getFacing@DispenserBlock@@IEBAEAEBVBlock@@@Z
     * @hash   1855949613
     */
    MCAPI unsigned char getFacing(class Block const &) const;

protected:

};