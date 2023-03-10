/**
 * @file  PerlinNoise.hpp
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
 * @brief MC class PerlinNoise.
 *
 */
class PerlinNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERLINNOISE
public:
    class PerlinNoise& operator=(class PerlinNoise const &) = delete;
    PerlinNoise() = delete;
#endif

public:
    /**
     * @symbol ??0PerlinNoise@@QEAA@IHH@Z
     * @hash   -2144872045
     */
    MCAPI PerlinNoise(unsigned int, int, int);
    /**
     * @symbol ??0PerlinNoise@@QEAA@AEAVIRandom@@UYBlendingBugSettings@@HH@Z
     * @hash   928686910
     */
    MCAPI PerlinNoise(class IRandom &, struct YBlendingBugSettings, int, int);
    /**
     * @symbol ??0PerlinNoise@@QEAA@AEAVIRandom@@HH@Z
     * @hash   -2053066769
     */
    MCAPI PerlinNoise(class IRandom &, int, int);
    /**
     * @symbol ??0PerlinNoise@@QEAA@AEBV0@@Z
     * @hash   -187497727
     */
    MCAPI PerlinNoise(class PerlinNoise const &);
    /**
     * @symbol ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec2@@HH1M@Z
     * @hash   2019287610
     */
    MCAPI void getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float) const;
    /**
     * @symbol ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec3@@HHH1@Z
     * @hash   1669354687
     */
    MCAPI void getRegion(float *, class Vec3 const &, int, int, int, class Vec3 const &) const;
    /**
     * @symbol ?getValue@PerlinNoise@@QEBAMAEBVVec3@@@Z
     * @hash   1042305543
     */
    MCAPI float getValue(class Vec3 const &) const;
    /**
     * @symbol ?getValueNormalized@PerlinNoise@@QEBAMAEBVVec3@@@Z
     * @hash   -1831915849
     */
    MCAPI float getValueNormalized(class Vec3 const &) const;
    /**
     * @symbol ??1PerlinNoise@@QEAA@XZ
     * @hash   1012878626
     */
    MCAPI ~PerlinNoise();

//private:
    /**
     * @symbol ?_init@PerlinNoise@@AEAAXAEAVIRandom@@UYBlendingBugSettings@@@Z
     * @hash   348579688
     */
    MCAPI void _init(class IRandom &, struct YBlendingBugSettings);

private:

};