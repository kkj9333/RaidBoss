/**
 * @file  BreakDoorAnnotationSystem.hpp
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
 * @brief MC class BreakDoorAnnotationSystem.
 *
 */
class BreakDoorAnnotationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONSYSTEM
public:
    class BreakDoorAnnotationSystem& operator=(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem(class BreakDoorAnnotationSystem const &) = delete;
    BreakDoorAnnotationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1794039289
     */
    virtual ~BreakDoorAnnotationSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BreakDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -809472501
     */
    virtual void tick(class EntityRegistry &);

};