/**
 * @file  SideBySideCrossEntityRemapSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideCrossEntityRemapSystem.
 *
 */
class SideBySideCrossEntityRemapSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECROSSENTITYREMAPSYSTEM
public:
    class SideBySideCrossEntityRemapSystem& operator=(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem() = delete;
#endif

public:
    /**
     * @symbol ?_remapContext@SideBySideCrossEntityRemapSystem@@SAXAEAVStrictEntityContext@@AEBUSideBySideRemappingComponent@@@Z
     * @hash   1692085875
     */
    MCAPI static void _remapContext(class StrictEntityContext &, struct SideBySideRemappingComponent const &);

//private:
    /**
     * @symbol ?_removeNullStrictEntityContexts@SideBySideCrossEntityRemapSystem@@CAXAEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
     * @hash   1813487080
     */
    MCAPI static void _removeNullStrictEntityContexts(std::vector<class StrictEntityContext> &);

private:

};