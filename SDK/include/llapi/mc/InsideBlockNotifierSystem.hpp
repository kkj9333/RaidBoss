/**
 * @file  InsideBlockNotifierSystem.hpp
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
 * @brief MC class InsideBlockNotifierSystem.
 *
 */
class InsideBlockNotifierSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERSYSTEM
public:
    class InsideBlockNotifierSystem& operator=(class InsideBlockNotifierSystem const &) = delete;
    InsideBlockNotifierSystem(class InsideBlockNotifierSystem const &) = delete;
    InsideBlockNotifierSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1484817044
     */
    virtual ~InsideBlockNotifierSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@InsideBlockNotifierSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1675330298
     */
    virtual void tick(class EntityRegistry &);

};