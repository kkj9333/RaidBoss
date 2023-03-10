/**
 * @file  InstantaneousAttributeBuff.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeBuff.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantaneousAttributeBuff.
 *
 */
class InstantaneousAttributeBuff : public AttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTANEOUSATTRIBUTEBUFF
public:
    class InstantaneousAttributeBuff& operator=(class InstantaneousAttributeBuff const &) = delete;
    InstantaneousAttributeBuff(class InstantaneousAttributeBuff const &) = delete;
    InstantaneousAttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -184511901
     */
    virtual ~InstantaneousAttributeBuff();
    /**
     * @vftbl  1
     * @symbol ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
     * @hash   858404219
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl  2
     * @symbol ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
     * @hash   1450610344
     */
    virtual bool isSerializable() const;
    /**
     * @symbol ??0InstantaneousAttributeBuff@@QEAA@MW4AttributeBuffType@@@Z
     * @hash   1771254525
     */
    MCAPI InstantaneousAttributeBuff(float, enum class AttributeBuffType);
    /**
     * @symbol ??0InstantaneousAttributeBuff@@QEAA@MAEBVActorDamageSource@@@Z
     * @hash   -1585424821
     */
    MCAPI InstantaneousAttributeBuff(float, class ActorDamageSource const &);

};