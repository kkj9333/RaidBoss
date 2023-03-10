/**
 * @file  ActorInfo.hpp
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
 * @brief MC structure ActorInfo.
 *
 */
struct ActorInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINFO
public:
    ActorInfo() = delete;
#endif

public:
    /**
     * @symbol ??0ActorInfo@@QEAA@AEBU0@@Z
     * @hash   1964670789
     */
    MCAPI ActorInfo(struct ActorInfo const &);
    /**
     * @symbol ?load@ActorInfo@@QEAAXPEBVCompoundTag@@@Z
     * @hash   817353637
     */
    MCAPI void load(class CompoundTag const *);
    /**
     * @symbol ??4ActorInfo@@QEAAAEAU0@AEBU0@@Z
     * @hash   811428350
     */
    MCAPI struct ActorInfo & operator=(struct ActorInfo const &);
    /**
     * @symbol ?save@ActorInfo@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1019360318
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1ActorInfo@@QEAA@XZ
     * @hash   -1853812849
     */
    MCAPI ~ActorInfo();

};