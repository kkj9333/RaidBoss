/**
 * @file  DoorItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "DoorBlock.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoorItem.
 *
 */
class DoorItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORITEM
public:
    class DoorItem& operator=(class DoorItem const &) = delete;
    DoorItem(class DoorItem const &) = delete;
    DoorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -715018069
     */
    virtual ~DoorItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  132
     * @symbol ?_useOn@DoorItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -222874065
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0DoorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4DoorType@DoorBlock@@@Z
     * @hash   -2046007820
     */
    MCAPI DoorItem(std::string const &, int, enum class DoorBlock::DoorType);
    /**
     * @symbol ?place@DoorItem@@SA_NPEAVBlockSource@@HHHHPEBVBlock@@@Z
     * @hash   -1152600704
     */
    MCAPI static bool place(class BlockSource *, int, int, int, int, class Block const *);

};