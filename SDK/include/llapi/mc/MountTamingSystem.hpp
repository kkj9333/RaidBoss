/**
 * @file  MountTamingSystem.hpp
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
 * @brief MC class MountTamingSystem.
 *
 */
class MountTamingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGSYSTEM
public:
    class MountTamingSystem& operator=(class MountTamingSystem const &) = delete;
    MountTamingSystem(class MountTamingSystem const &) = delete;
    MountTamingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -295782760
     */
    virtual ~MountTamingSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@MountTamingSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1097583142
     */
    virtual void tick(class EntityRegistry &);

};