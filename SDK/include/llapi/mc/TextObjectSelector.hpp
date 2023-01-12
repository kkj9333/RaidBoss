/**
 * @file  TextObjectSelector.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectSelector.
 *
 */
class TextObjectSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSELECTOR
public:
    class TextObjectSelector& operator=(class TextObjectSelector const &) = delete;
    TextObjectSelector(class TextObjectSelector const &) = delete;
    TextObjectSelector() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2095547115
     */
    virtual ~TextObjectSelector();
    /**
     * @vftbl  1
     * @symbol ?asString@TextObjectSelector@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1116837986
     */
    virtual std::string asString() const;
    /**
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectSelector@@UEBA?AVValue@Json@@XZ
     * @hash   1648463890
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl  3
     * @symbol ?resolve@TextObjectSelector@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     * @hash   -31074931
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol ??0TextObjectSelector@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1093468672
     */
    MCAPI TextObjectSelector(std::string);
    /**
     * @symbol ?RAW_TEXT_SELECTOR_KEY@TextObjectSelector@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   2021325003
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;
    /**
     * @symbol ?RAW_TEXT_SELECTOR_STAR@TextObjectSelector@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1154226435
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;

};