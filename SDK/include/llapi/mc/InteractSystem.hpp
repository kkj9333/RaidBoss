/**
 * @file  InteractSystem.hpp
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
 * @brief MC class InteractSystem.
 *
 */
class InteractSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTSYSTEM
public:
    class InteractSystem& operator=(class InteractSystem const &) = delete;
    InteractSystem(class InteractSystem const &) = delete;
    InteractSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   925677647
     */
    virtual ~InteractSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@InteractSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1302796277
     */
    virtual void tick(class EntityRegistry &);

};