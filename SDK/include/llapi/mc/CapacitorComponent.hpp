/**
 * @file  CapacitorComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CapacitorComponent.
 *
 */
class CapacitorComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPACITORCOMPONENT
public:
    class CapacitorComponent& operator=(class CapacitorComponent const &) = delete;
    CapacitorComponent(class CapacitorComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -833224795
     */
    virtual ~CapacitorComponent();
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
     * @symbol ?getCircuitComponentType@CapacitorComponent@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   443899739
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl  25
     * @symbol ?getPoweroutDirection@CapacitorComponent@@UEBAEXZ
     * @hash   -1301715554
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0CapacitorComponent@@QEAA@XZ
     * @hash   1461810039
     */
    MCAPI CapacitorComponent();

};