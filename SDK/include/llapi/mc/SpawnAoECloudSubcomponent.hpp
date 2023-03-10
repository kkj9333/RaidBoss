/**
 * @file  SpawnAoECloudSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnAoECloudSubcomponent.
 *
 */
class SpawnAoECloudSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNAOECLOUDSUBCOMPONENT
public:
    class SpawnAoECloudSubcomponent& operator=(class SpawnAoECloudSubcomponent const &) = delete;
    SpawnAoECloudSubcomponent(class SpawnAoECloudSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   341606244
     */
    virtual ~SpawnAoECloudSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@SpawnAoECloudSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -1468383870
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@SpawnAoECloudSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   949827127
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@SpawnAoECloudSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -538954836
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@SpawnAoECloudSubcomponent@@UEAAPEBDXZ
     * @hash   1911785991
     */
    virtual char const * getName();
    /**
     * @symbol ??0SpawnAoECloudSubcomponent@@QEAA@XZ
     * @hash   1042943490
     */
    MCAPI SpawnAoECloudSubcomponent();

};