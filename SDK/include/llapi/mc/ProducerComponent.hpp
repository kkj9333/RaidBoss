/**
 * @file  ProducerComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProducerComponent.
 *
 */
class ProducerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRODUCERCOMPONENT
public:
    class ProducerComponent& operator=(class ProducerComponent const &) = delete;
    ProducerComponent(class ProducerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1838042151
     */
    virtual ~ProducerComponent();
    /**
     * @vftbl  3
     * @symbol ?setStrength@ProducerComponent@@UEAAXH@Z
     * @hash   -225901808
     */
    virtual void setStrength(int);
    /**
     * @vftbl  8
     * @symbol ?canStopPower@ProducerComponent@@UEBA_NXZ
     * @hash   -256012144
     */
    virtual bool canStopPower() const;
    /**
     * @vftbl  9
     * @symbol ?setStopPower@ProducerComponent@@UEAAX_N@Z
     * @hash   -911591009
     */
    virtual void setStopPower(bool);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@ProducerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   113076539
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@ProducerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   202817053
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
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
     * @symbol ?getCircuitComponentType@ProducerComponent@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   151787083
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl  25
     * @symbol ?getPoweroutDirection@SidePoweredComponent@@UEBAEXZ
     * @hash   -1316499826
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0ProducerComponent@@QEAA@XZ
     * @hash   1588212919
     */
    MCAPI ProducerComponent();
    /**
     * @symbol ?allowAttachments@ProducerComponent@@QEAAX_N@Z
     * @hash   155388178
     */
    MCAPI void allowAttachments(bool);

};