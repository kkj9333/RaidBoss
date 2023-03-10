/**
 * @file  AgeableComponent.hpp
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
 * @brief MC class AgeableComponent.
 *
 */
class AgeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLECOMPONENT
public:
    class AgeableComponent& operator=(class AgeableComponent const &) = delete;
    AgeableComponent(class AgeableComponent const &) = delete;
    AgeableComponent() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData@AgeableComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1306129592
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getAge@AgeableComponent@@QEBAHXZ
     * @hash   -788170552
     */
    MCAPI int getAge() const;
    /**
     * @symbol ?getInteraction@AgeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   914975829
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?readAdditionalSaveData@AgeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1816393298
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setAge@AgeableComponent@@QEAAXH@Z
     * @hash   -1209829098
     */
    MCAPI void setAge(int);

};