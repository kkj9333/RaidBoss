/**
 * @file  KeyFrameTransformData.hpp
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
 * @brief MC class KeyFrameTransformData.
 *
 */
class KeyFrameTransformData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORMDATA
public:
    class KeyFrameTransformData& operator=(class KeyFrameTransformData const &) = delete;
    KeyFrameTransformData() = delete;
#endif

public:
    /**
     * @symbol ??0KeyFrameTransformData@@QEAA@AEBV0@@Z
     * @hash   467225297
     */
    MCAPI KeyFrameTransformData(class KeyFrameTransformData const &);
    /**
     * @symbol ?addChannelTransform@KeyFrameTransformData@@QEAAXAEBVExpressionNode@@H@Z
     * @hash   849017245
     */
    MCAPI void addChannelTransform(class ExpressionNode const &, int);
    /**
     * @symbol ??8KeyFrameTransformData@@QEBA_NAEBV0@@Z
     * @hash   1156814575
     */
    MCAPI bool operator==(class KeyFrameTransformData const &) const;

};