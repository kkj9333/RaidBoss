/**
 * @file  TickNextTickData.hpp
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
 * @brief MC class TickNextTickData.
 *
 */
class TickNextTickData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKNEXTTICKDATA
public:
    class TickNextTickData& operator=(class TickNextTickData const &) = delete;
    TickNextTickData(class TickNextTickData const &) = delete;
    TickNextTickData() = delete;
#endif

public:
    /**
     * @symbol ??0TickNextTickData@@QEAA@AEBVBlockPos@@AEBVBlock@@AEBUTick@@H@Z
     * @hash   1228424477
     */
    MCAPI TickNextTickData(class BlockPos const &, class Block const &, struct Tick const &, int);
    /**
     * @symbol ??8TickNextTickData@@QEBA_NAEBV0@@Z
     * @hash   -777728624
     */
    MCAPI bool operator==(class TickNextTickData const &) const;
    /**
     * @symbol ??OTickNextTickData@@QEBA_NAEBV0@@Z
     * @hash   -1209411181
     */
    MCAPI bool operator>(class TickNextTickData const &) const;

};