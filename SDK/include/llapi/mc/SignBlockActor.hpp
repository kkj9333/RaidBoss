/**
 * @file  SignBlockActor.hpp
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
 * @brief MC class SignBlockActor.
 *
 */
class SignBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum class SignType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIGNBLOCKACTOR
public:
    class SignBlockActor& operator=(class SignBlockActor const &) = delete;
    SignBlockActor(class SignBlockActor const &) = delete;
    SignBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1882880847
     */
    virtual ~SignBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@SignBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1568242844
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@SignBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -476600965
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  8
     * @symbol ?onChanged@SignBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -79552179
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
     * @vftbl  19
     * @symbol ?getShadowRadius@SignBlockActor@@UEBAMAEAVBlockSource@@@Z
     * @hash   -958135215
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  28
     * @symbol ?getImmersiveReaderText@SignBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     * @hash   1476768281
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
     * @symbol ?_getUpdatePacket@SignBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -523706370
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@SignBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   1387523572
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0SignBlockActor@@QEAA@AEBVBlockPos@@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1206707782
     */
    MCAPI SignBlockActor(class BlockPos const &, enum class BlockActorType, std::string const &);
    /**
     * @symbol ?getMessage@SignBlockActor@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -650001504
     */
    MCAPI std::string const & getMessage();
    /**
     * @symbol ?getSignTextColor@SignBlockActor@@QEBAAEBVColor@mce@@XZ
     * @hash   -1604643316
     */
    MCAPI class mce::Color const & getSignTextColor() const;
    /**
     * @symbol ?isBug471852Resolved@SignBlockActor@@QEBA_NXZ
     * @hash   1459636824
     */
    MCAPI bool isBug471852Resolved() const;
    /**
     * @symbol ?resolveBug471852@SignBlockActor@@QEAAXXZ
     * @hash   -912988267
     */
    MCAPI void resolveBug471852();
    /**
     * @symbol ?setMessage@SignBlockActor@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   -1987229660
     */
    MCAPI void setMessage(std::string, std::string);
    /**
     * @symbol ?setMessage@SignBlockActor@@QEAAXVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1724528575
     */
    MCAPI void setMessage(class TextObjectRoot, std::string);
    /**
     * @symbol ?setSignTextColor@SignBlockActor@@QEAAXAEBVColor@mce@@@Z
     * @hash   1887821498
     */
    MCAPI void setSignTextColor(class mce::Color const &);
    /**
     * @symbol ?setType@SignBlockActor@@QEAAXW4SignType@1@@Z
     * @hash   2059298678
     */
    MCAPI void setType(enum class SignBlockActor::SignType);

};