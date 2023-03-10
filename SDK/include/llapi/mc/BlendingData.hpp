/**
 * @file  BlendingData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlendingData.
 *
 */
class BlendingData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDINGDATA
public:
    class BlendingData& operator=(class BlendingData const &) = delete;
    BlendingData(class BlendingData const &) = delete;
    BlendingData() = delete;
#endif

public:
    /**
     * @symbol ?createDataForStorage@BlendingData@@QEBA?AUPersistentBlendData@@W4BlendVersion@@@Z
     * @hash   132917103
     */
    MCAPI struct PersistentBlendData createDataForStorage(enum class BlendVersion) const;
    /**
     * @symbol ?getBiome@BlendingData@@QEBA?AV?$ScalarOptional@E@@HHH@Z
     * @hash   1054845340
     */
    MCAPI class ScalarOptional<unsigned char> getBiome(int, int, int) const;
    /**
     * @symbol ?getBlockType@BlendingData@@QEBA?AW4BlendingBlockType@@HHH@Z
     * @hash   -1617133525
     */
    MCAPI enum class BlendingBlockType getBlockType(int, int, int) const;
    /**
     * @symbol ?getDensity@BlendingData@@QEBA?AV?$ScalarOptional@M@@HHH@Z
     * @hash   302585513
     */
    MCAPI class ScalarOptional<float> getDensity(int, int, int) const;
    /**
     * @symbol ?getHeight@BlendingData@@QEBA?AV?$ScalarOptional@F@@HH@Z
     * @hash   -794602835
     */
    MCAPI class ScalarOptional<short> getHeight(int, int) const;
    /**
     * @symbol ?hasBlendDataAt@BlendingData@@QEBA_NHH@Z
     * @hash   -1679577704
     */
    MCAPI bool hasBlendDataAt(int, int) const;

};