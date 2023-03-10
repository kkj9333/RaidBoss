/**
 * @file  PoweredBlockComponent.hpp
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
 * @brief MC class PoweredBlockComponent.
 *
 */
class PoweredBlockComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POWEREDBLOCKCOMPONENT
public:
    class PoweredBlockComponent& operator=(class PoweredBlockComponent const &) = delete;
    PoweredBlockComponent(class PoweredBlockComponent const &) = delete;
    PoweredBlockComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1017733442
     */
    virtual ~PoweredBlockComponent();
    /**
     * @vftbl  1
     * @symbol ?getStrength@PoweredBlockComponent@@UEBAHXZ
     * @hash   -423294338
     */
    virtual int getStrength() const;
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@PoweredBlockComponent@@UEBA_NXZ
     * @hash   316313779
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  11
     * @symbol ?addSource@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   -1552936328
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   451440068
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@PoweredBlockComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   1136493684
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  17
     * @hash   -228886166
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -214179022
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  23
     * @symbol ?getCircuitComponentType@PoweredBlockComponent@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   -1265366494
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POWEREDBLOCKCOMPONENT
    /**
     * @symbol ?hasChildrenSource@PoweredBlockComponent@@UEBA_NXZ
     * @hash   691366024
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @symbol ??0PoweredBlockComponent@@QEAA@E@Z
     * @hash   1205780796
     */
    MCAPI PoweredBlockComponent(unsigned char);

};