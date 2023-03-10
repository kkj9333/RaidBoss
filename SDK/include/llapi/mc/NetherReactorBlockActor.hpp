/**
 * @file  NetherReactorBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherReactorBlockActor.
 *
 */
class NetherReactorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERREACTORBLOCKACTOR
public:
    class NetherReactorBlockActor& operator=(class NetherReactorBlockActor const &) = delete;
    NetherReactorBlockActor(class NetherReactorBlockActor const &) = delete;
    NetherReactorBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -266147200
     */
    virtual ~NetherReactorBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@NetherReactorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1330832137
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@NetherReactorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -156737720
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol ??0NetherReactorBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   1175490501
     */
    MCAPI NetherReactorBlockActor(class BlockPos const &);

};