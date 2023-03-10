/**
 * @file  DolphinMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DolphinMoveControl.
 *
 */
class DolphinMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOLPHINMOVECONTROL
public:
    class DolphinMoveControl& operator=(class DolphinMoveControl const &) = delete;
    DolphinMoveControl(class DolphinMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -844032936
     */
    virtual ~DolphinMoveControl();
    /**
     * @vftbl  2
     * @symbol ?tick@DolphinMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     * @hash   1769752728
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol ??0DolphinMoveControl@@QEAA@XZ
     * @hash   -2142259142
     */
    MCAPI DolphinMoveControl();

//private:
    /**
     * @symbol ?_calcRotX@DolphinMoveControl@@AEAAMMMM@Z
     * @hash   1768324375
     */
    MCAPI float _calcRotX(float, float, float);
    /**
     * @symbol ?_calcRotY@DolphinMoveControl@@AEAAMMM@Z
     * @hash   -555475652
     */
    MCAPI float _calcRotY(float, float);
    /**
     * @symbol ?_clearOfObstacles@DolphinMoveControl@@AEBA_NAEBVMob@@MMH@Z
     * @hash   1771073388
     */
    MCAPI bool _clearOfObstacles(class Mob const &, float, float, int) const;
    /**
     * @symbol ?_isInWater@DolphinMoveControl@@AEBA_NAEBVMob@@@Z
     * @hash   1561684983
     */
    MCAPI bool _isInWater(class Mob const &) const;
    /**
     * @symbol ?_setupBreach@DolphinMoveControl@@AEAAXAEAVMob@@@Z
     * @hash   451688719
     */
    MCAPI void _setupBreach(class Mob &);

private:

};