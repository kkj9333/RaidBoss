/**
 * @file  MobSpawnHerdInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MobSpawnHerdInfo.
 *
 */
struct MobSpawnHerdInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNHERDINFO
public:
    struct MobSpawnHerdInfo& operator=(struct MobSpawnHerdInfo const &) = delete;
    MobSpawnHerdInfo(struct MobSpawnHerdInfo const &) = delete;
    MobSpawnHerdInfo() = delete;
#endif

public:
    /**
     * @symbol ??0MobSpawnHerdInfo@@QEAA@IIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I0I@Z
     * @hash   131696869
     */
    MCAPI MobSpawnHerdInfo(unsigned int, unsigned int, std::string const &, unsigned int, std::string const &, unsigned int);
    /**
     * @symbol ??1MobSpawnHerdInfo@@QEAA@XZ
     * @hash   656749874
     */
    MCAPI ~MobSpawnHerdInfo();

};