/**
 * @file  ActorLimitedLifetimeComponent.hpp
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
 * @brief MC class ActorLimitedLifetimeComponent.
 *
 */
class ActorLimitedLifetimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLIMITEDLIFETIMECOMPONENT
public:
    class ActorLimitedLifetimeComponent& operator=(class ActorLimitedLifetimeComponent const &) = delete;
    ActorLimitedLifetimeComponent(class ActorLimitedLifetimeComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0ActorLimitedLifetimeComponent@@QEAA@XZ
     * @hash   1198442331
     */
    MCAPI ActorLimitedLifetimeComponent();
    /**
     * @symbol ?addAdditionalSaveData@ActorLimitedLifetimeComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
     * @hash   254620601
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @symbol ?readAdditionalSaveData@ActorLimitedLifetimeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
     * @hash   -1040656117
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @symbol ?convertFromLegacyData@ActorLimitedLifetimeComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
     * @hash   1657955092
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @symbol ?needsLegacyConversion@ActorLimitedLifetimeComponent@@SA_NAEBVCompoundTag@@@Z
     * @hash   -1502710463
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

};