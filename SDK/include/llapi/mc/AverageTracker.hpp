/**
 * @file  AverageTracker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AverageTracker.
 *
 */
class AverageTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVERAGETRACKER
public:
    class AverageTracker& operator=(class AverageTracker const &) = delete;
    AverageTracker(class AverageTracker const &) = delete;
    AverageTracker() = delete;
#endif

public:
    /**
     * @symbol ?addSample@AverageTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   -773952025
     */
    MCAPI void addSample(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};