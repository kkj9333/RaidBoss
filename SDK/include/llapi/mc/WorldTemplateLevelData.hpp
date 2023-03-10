/**
 * @file  WorldTemplateLevelData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplateLevelData.
 *
 */
class WorldTemplateLevelData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATELEVELDATA
public:
    class WorldTemplateLevelData& operator=(class WorldTemplateLevelData const &) = delete;
    WorldTemplateLevelData(class WorldTemplateLevelData const &) = delete;
#endif

public:
    /**
     * @symbol ??0WorldTemplateLevelData@@QEAA@_N0AEBVBaseGameVersion@@1@Z
     * @hash   1994166757
     */
    MCAPI WorldTemplateLevelData(bool, bool, class BaseGameVersion const &, class BaseGameVersion const &);
    /**
     * @symbol ??0WorldTemplateLevelData@@QEAA@XZ
     * @hash   -1272765474
     */
    MCAPI WorldTemplateLevelData();
    /**
     * @symbol ?getBaseGameVersion@WorldTemplateLevelData@@QEBAAEBVBaseGameVersion@@XZ
     * @hash   572397944
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol ?getContentIdentity@WorldTemplateLevelData@@QEBAAEBVContentIdentity@@XZ
     * @hash   -975145724
     */
    MCAPI class ContentIdentity const & getContentIdentity() const;
    /**
     * @symbol ?getTagData@WorldTemplateLevelData@@QEAAXAEBVCompoundTag@@@Z
     * @hash   282657554
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @symbol ?getWorldTemplateIdentity@WorldTemplateLevelData@@QEBAAEBUPackIdVersion@@XZ
     * @hash   575178876
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @symbol ?isFromWorldTemplate@WorldTemplateLevelData@@QEBA_NXZ
     * @hash   -914812548
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol ?isWorldTemplateOptionLocked@WorldTemplateLevelData@@QEBA_NXZ
     * @hash   -481131298
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol ?setBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
     * @hash   -581337706
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?setContentIdentity@WorldTemplateLevelData@@QEAAXAEBVContentIdentity@@@Z
     * @hash   589197122
     */
    MCAPI void setContentIdentity(class ContentIdentity const &);
    /**
     * @symbol ?setIsWorldTemplateOptionLocked@WorldTemplateLevelData@@QEAAX_N@Z
     * @hash   -1401418140
     */
    MCAPI void setIsWorldTemplateOptionLocked(bool);
    /**
     * @symbol ?setMaxBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
     * @hash   1030005512
     */
    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?setTagData@WorldTemplateLevelData@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1136005670
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @symbol ?setWorldTemplateIdentity@WorldTemplateLevelData@@QEAAXAEBUPackIdVersion@@@Z
     * @hash   -1183046742
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @symbol ??1WorldTemplateLevelData@@QEAA@XZ
     * @hash   -1093417220
     */
    MCAPI ~WorldTemplateLevelData();

//protected:
    /**
     * @symbol ?_getTagData@WorldTemplateLevelData@@IEAAXAEBVCompoundTag@@@Z
     * @hash   1038867436
     */
    MCAPI void _getTagData(class CompoundTag const &);
    /**
     * @symbol ?_setTagData@WorldTemplateLevelData@@IEBAXAEAVCompoundTag@@@Z
     * @hash   1866093802
     */
    MCAPI void _setTagData(class CompoundTag &) const;

protected:

};