/**
 * @file  ProjectileDescription.hpp
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
 * @brief MC class ProjectileDescription.
 *
 */
class ProjectileDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEDESCRIPTION
public:
    class ProjectileDescription& operator=(class ProjectileDescription const &) = delete;
    ProjectileDescription(class ProjectileDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@ProjectileDescription@@UEBAPEBDXZ
     * @hash   -243967871
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   1280680865
     */
    virtual ~ProjectileDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@ProjectileDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -1698737854
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@ProjectileDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   1635461292
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @symbol ??0ProjectileDescription@@QEAA@XZ
     * @hash   2017088831
     */
    MCAPI ProjectileDescription();

};