/**
 * @file  ChalkboardBlockActor.hpp
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
 * @brief MC class ChalkboardBlockActor.
 *
 */
class ChalkboardBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR
public:
    class ChalkboardBlockActor& operator=(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1562142525
     */
    virtual ~ChalkboardBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@ChalkboardBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   228778202
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@ChalkboardBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1096639497
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   995230755
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1967978725
     */
    virtual void onChanged(class BlockSource &);
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
     * @vftbl  28
     * @symbol ?getImmersiveReaderText@ChalkboardBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     * @hash   -1585113785
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
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
     * @vftbl  37
     * @symbol ?_getUpdatePacket@ChalkboardBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -1029103492
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@ChalkboardBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   138397446
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0ChalkboardBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   91382838
     */
    MCAPI ChalkboardBlockActor(class BlockPos const &);
    /**
     * @symbol ?getChalkboardSize@ChalkboardBlockActor@@QEBA?BW4ChalkboardSize@@XZ
     * @hash   -1760106486
     */
    MCAPI enum class ChalkboardSize const getChalkboardSize() const;
    /**
     * @symbol ?getLocked@ChalkboardBlockActor@@QEBA_NXZ
     * @hash   1853206442
     */
    MCAPI bool getLocked() const;
    /**
     * @symbol ?getRotation@ChalkboardBlockActor@@QEBAHAEAVBlockSource@@@Z
     * @hash   1330867985
     */
    MCAPI int getRotation(class BlockSource &) const;
    /**
     * @symbol ?getText@ChalkboardBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -147706660
     */
    MCAPI std::string const & getText() const;
    /**
     * @symbol ?getTextCharCount@ChalkboardBlockActor@@QEBAHXZ
     * @hash   -625359032
     */
    MCAPI int getTextCharCount() const;
    /**
     * @symbol ?setText@ChalkboardBlockActor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   852509646
     */
    MCAPI void setText(std::string const &);
    /**
     * @symbol ?validate@ChalkboardBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   2143787700
     */
    MCAPI void validate(class BlockSource &);
    /**
     * @symbol ?calculateAllBlocks@ChalkboardBlockActor@@SA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@W4ChalkboardSize@@H@Z
     * @hash   -297330301
     */
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const &, enum class ChalkboardSize, int);
    /**
     * @symbol ?canCreateChalkboard@ChalkboardBlockActor@@SA_NPEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EHAEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVItemStack@@_N@Z
     * @hash   1268220291
     */
    MCAPI static bool canCreateChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, std::vector<class BlockPos> &, class ItemStack const &, bool);
    /**
     * @symbol ?convertFromEntity@ChalkboardBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVCompoundTag@@@Z
     * @hash   -506897855
     */
    MCAPI static class ChalkboardBlockActor * convertFromEntity(class BlockSource &, class CompoundTag const &);
    /**
     * @symbol ?createChalkboard@ChalkboardBlockActor@@SAPEAV1@PEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EH_NAEBVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -558942298
     */
    MCAPI static class ChalkboardBlockActor * createChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, bool, class ItemStack const &, std::string);

//private:
    /**
     * @symbol ?_findChalkboard@ChalkboardBlockActor@@CA?AUChalkboardFinder@1@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1166357616
     */
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder _findChalkboard(class BlockSource &, class BlockPos const &);

private:

};