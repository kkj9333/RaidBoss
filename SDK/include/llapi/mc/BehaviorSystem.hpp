/**
 * @file  BehaviorSystem.hpp
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
 * @brief MC class BehaviorSystem.
 *
 */
class BehaviorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORSYSTEM
public:
    class BehaviorSystem& operator=(class BehaviorSystem const &) = delete;
    BehaviorSystem(class BehaviorSystem const &) = delete;
    BehaviorSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   890003819
     */
    virtual ~BehaviorSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BehaviorSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   260799121
     */
    virtual void tick(class EntityRegistry &);

};