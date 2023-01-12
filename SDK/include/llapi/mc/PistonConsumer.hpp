/**
 * @file  PistonConsumer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ConsumerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PistonConsumer.
 *
 */
class PistonConsumer : public ConsumerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONCONSUMER
public:
    class PistonConsumer& operator=(class PistonConsumer const &) = delete;
    PistonConsumer(class PistonConsumer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1503313959
     */
    virtual ~PistonConsumer();
    /**
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@PistonConsumer@@UEBA_NXZ
     * @hash   -393186331
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  11
     * @symbol ?addSource@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   -1997692163
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   -1595974017
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  17
     * @hash   -228886166
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -206721662
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  23
     * @symbol ?getCircuitComponentType@PistonConsumer@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   -1928852969
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol ??0PistonConsumer@@QEAA@XZ
     * @hash   -785253621
     */
    MCAPI PistonConsumer();
    /**
     * @symbol ?setBlockPowerFace@PistonConsumer@@QEAAXE@Z
     * @hash   -6837671
     */
    MCAPI void setBlockPowerFace(unsigned char);

};