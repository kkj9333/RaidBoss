/**
 * @file  BoolOption.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Option.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoolOption.
 *
 */
class BoolOption : public Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOLOPTION
public:
    class BoolOption& operator=(class BoolOption const &) = delete;
    BoolOption(class BoolOption const &) = delete;
    BoolOption() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1767820873
     */
    virtual ~BoolOption();
    /**
     * @vftbl  1
     * @symbol ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     * @hash   499592581
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>> &);
    /**
     * @vftbl  2
     * @symbol ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   949806958
     */
    virtual void load(std::string const &);
    /**
     * @symbol ??0BoolOption@@QEAA@W4OptionID@@W4OptionOwnerType@@W4OptionResetFlags@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3_N@Z
     * @hash   1986125453
     */
    MCAPI BoolOption(enum class OptionID, enum class OptionOwnerType, enum class OptionResetFlags, std::string const &, std::string const &, bool);
    /**
     * @symbol ?getValue@BoolOption@@QEBA_NXZ
     * @hash   -1341233578
     */
    MCAPI bool getValue() const;
    /**
     * @symbol ?set@BoolOption@@QEAAX_N0@Z
     * @hash   -1733512918
     */
    MCAPI void set(bool, bool);

//private:
    /**
     * @symbol ?_set@BoolOption@@AEAAX_N0@Z
     * @hash   984512928
     */
    MCAPI void _set(bool, bool);

private:

};