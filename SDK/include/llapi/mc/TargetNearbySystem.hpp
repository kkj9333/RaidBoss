/**
 * @file  TargetNearbySystem.hpp
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
 * @brief MC class TargetNearbySystem.
 *
 */
class TargetNearbySystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYSYSTEM
public:
    class TargetNearbySystem& operator=(class TargetNearbySystem const &) = delete;
    TargetNearbySystem(class TargetNearbySystem const &) = delete;
    TargetNearbySystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -248055287
     */
    virtual ~TargetNearbySystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@TargetNearbySystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1867867073
     */
    virtual void tick(class EntityRegistry &);

};