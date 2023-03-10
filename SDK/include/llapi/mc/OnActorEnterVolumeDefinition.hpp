/**
 * @file  OnActorEnterVolumeDefinition.hpp
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
 * @brief MC structure OnActorEnterVolumeDefinition.
 *
 */
struct OnActorEnterVolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORENTERVOLUMEDEFINITION
public:
    struct OnActorEnterVolumeDefinition& operator=(struct OnActorEnterVolumeDefinition const &) = delete;
    OnActorEnterVolumeDefinition(struct OnActorEnterVolumeDefinition const &) = delete;
    OnActorEnterVolumeDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@OnActorEnterVolumeDefinition@@QEBAXAEAVEntityContext@@AEAVOnActorEnterVolumeComponent@@@Z
     * @hash   2089810289
     */
    MCAPI void initialize(class EntityContext &, class OnActorEnterVolumeComponent &) const;
    /**
     * @symbol ??1OnActorEnterVolumeDefinition@@QEAA@XZ
     * @hash   -2030060807
     */
    MCAPI ~OnActorEnterVolumeDefinition();
    /**
     * @symbol ?NAME@OnActorEnterVolumeDefinition@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1089268285
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol ?bindType@OnActorEnterVolumeDefinition@@SAXXZ
     * @hash   -1589560381
     */
    MCAPI static void bindType();

};