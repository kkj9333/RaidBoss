/**
 * @file  BribeableComponent.hpp
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
 * @brief MC class BribeableComponent.
 *
 */
class BribeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLECOMPONENT
public:
    class BribeableComponent& operator=(class BribeableComponent const &) = delete;
    BribeableComponent(class BribeableComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BribeableComponent@@QEAA@XZ
     * @hash   906576003
     */
    MCAPI BribeableComponent();
    /**
     * @symbol ?addAdditionalSaveData@BribeableComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -257709640
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?clientBribeCheck@BribeableComponent@@QEAA_NAEAVActor@@@Z
     * @hash   87378801
     */
    MCAPI bool clientBribeCheck(class Actor &);
    /**
     * @symbol ?getBribeCooldown@BribeableComponent@@QEAAAEAHXZ
     * @hash   -1425743769
     */
    MCAPI int & getBribeCooldown();
    /**
     * @symbol ?getBribeTimer@BribeableComponent@@QEAAAEAHXZ
     * @hash   -1573795451
     */
    MCAPI int & getBribeTimer();
    /**
     * @symbol ?getInteraction@BribeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   -872424533
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?readAdditionalSaveData@BribeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2038941464
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?resetBribe@BribeableComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1312282358
     */
    MCAPI void resetBribe(class Actor &);

//private:
    /**
     * @symbol ?_bribe@BribeableComponent@@AEAAXAEAVActor@@AEAVPlayer@@@Z
     * @hash   1143302358
     */
    MCAPI void _bribe(class Actor &, class Player &);
    /**
     * @symbol ?_canBribe@BribeableComponent@@AEAA_NAEBVItemStack@@@Z
     * @hash   1541129482
     */
    MCAPI bool _canBribe(class ItemStack const &);

private:

};