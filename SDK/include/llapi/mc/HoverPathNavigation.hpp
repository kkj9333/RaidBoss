/**
 * @file  HoverPathNavigation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PathNavigation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoverPathNavigation.
 *
 */
class HoverPathNavigation : public PathNavigation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERPATHNAVIGATION
public:
    class HoverPathNavigation& operator=(class HoverPathNavigation const &) = delete;
    HoverPathNavigation(class HoverPathNavigation const &) = delete;
    HoverPathNavigation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   533084483
     */
    virtual ~HoverPathNavigation();
    /**
     * @vftbl  1
     * @symbol ?initializeInternal@HoverPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
     * @hash   304110838
     */
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);
    /**
     * @vftbl  2
     * @symbol ?tick@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   957893761
     */
    virtual void tick(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  3
     * @symbol ?getTempMobPos@HoverPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
     * @hash   1823887301
     */
    virtual class Vec3 getTempMobPos(class Mob const &) const;
    /**
     * @vftbl  4
     * @symbol ?createPath@HoverPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEBVVec3@@@Z
     * @hash   756128442
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Vec3 const &);
    /**
     * @vftbl  5
     * @symbol ?createPath@HoverPathNavigation@@MEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVNavigationComponent@@AEAVMob@@AEAVActor@@@Z
     * @hash   -1322212081
     */
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent &, class Mob &, class Actor &);
    /**
     * @vftbl  9
     * @symbol ?stop@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   -1345403274
     */
    virtual void stop(class NavigationComponent &, class Mob &);
    /**
     * @vftbl  11
     * @symbol ?canUpdatePath@HoverPathNavigation@@MEBA_NAEBVMob@@@Z
     * @hash   2047988717
     */
    virtual bool canUpdatePath(class Mob const &) const;
    /**
     * @vftbl  12
     * @symbol ?updatePath@HoverPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
     * @hash   1181057986
     */
    virtual void updatePath(class NavigationComponent &, class Mob &);

};