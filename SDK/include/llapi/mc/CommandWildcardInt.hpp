/**
 * @file  CommandWildcardInt.hpp
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
 * @brief MC class CommandWildcardInt.
 *
 */
class CommandWildcardInt {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDWILDCARDINT
public:
    class CommandWildcardInt& operator=(class CommandWildcardInt const &) = delete;
    CommandWildcardInt(class CommandWildcardInt const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommandWildcardInt@@QEAA@XZ
     * @hash   -50510106
     */
    MCAPI CommandWildcardInt();
    /**
     * @symbol ?getValue@CommandWildcardInt@@QEBAHXZ
     * @hash   229454616
     */
    MCAPI int getValue() const;
    /**
     * @symbol ?isWildcard@CommandWildcardInt@@QEBA_NXZ
     * @hash   -1514661518
     */
    MCAPI bool isWildcard() const;

};