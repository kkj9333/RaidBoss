/**
 * @file  GrantXPSubcomponent.hpp
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
 * @brief MC class GrantXPSubcomponent.
 *
 */
class GrantXPSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRANTXPSUBCOMPONENT
public:
    class GrantXPSubcomponent& operator=(class GrantXPSubcomponent const &) = delete;
    GrantXPSubcomponent(class GrantXPSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1952510143
     */
    virtual ~GrantXPSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@GrantXPSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   774767223
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@GrantXPSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   2110459666
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@GrantXPSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   1322989969
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@GrantXPSubcomponent@@UEAAPEBDXZ
     * @hash   442620012
     */
    virtual char const * getName();
    /**
     * @symbol ??0GrantXPSubcomponent@@QEAA@XZ
     * @hash   -1764288803
     */
    MCAPI GrantXPSubcomponent();

};