/**
 * @file  RedstoneTorchCapacitor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RedstoneTorchCapacitor.
 *
 */
class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1858449276
     */
    virtual ~RedstoneTorchCapacitor();
    /**
     * @vftbl  1
     * @symbol ?getStrength@RedstoneTorchCapacitor@@UEBAHXZ
     * @hash   -2141877224
     */
    virtual int getStrength() const;
    /**
     * @vftbl  10
     * @symbol ?removeSource@RedstoneTorchCapacitor@@UEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     * @hash   1747723436
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @vftbl  11
     * @symbol ?addSource@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   -618334126
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   -121444886
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@RedstoneTorchCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   -1097184354
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  15
     * @symbol ?cacheValues@RedstoneTorchCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   248642151
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  16
     * @symbol ?updateDependencies@RedstoneTorchCapacitor@@EEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     * @hash   -411878326
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @hash   -228886166
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol ?isHalfPulse@RedstoneTorchCapacitor@@UEBA_NXZ
     * @hash   1495172026
     */
    virtual bool isHalfPulse() const;
    /**
     * @vftbl  20
     * @hash   -206721662
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  23
     * @symbol ?getCircuitComponentType@RedstoneTorchCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   140170524
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl  25
     * @symbol ?getPoweroutDirection@RedstoneTorchCapacitor@@UEBAEXZ
     * @hash   1082029199
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0RedstoneTorchCapacitor@@QEAA@XZ
     * @hash   -720087354
     */
    MCAPI RedstoneTorchCapacitor();
    /**
     * @symbol ?resetBurnOutCount@RedstoneTorchCapacitor@@QEAAXXZ
     * @hash   181646419
     */
    MCAPI void resetBurnOutCount();
    /**
     * @symbol ?setOn@RedstoneTorchCapacitor@@QEAAX_N@Z
     * @hash   -80757058
     */
    MCAPI void setOn(bool);

//private:
    /**
     * @symbol ?FindStrongestStrength@RedstoneTorchCapacitor@@AEAAHAEBVBlockPos@@AEAVCircuitSystem@@AEA_N@Z
     * @hash   1828752058
     */
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:

};