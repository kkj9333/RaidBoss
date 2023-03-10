/**
 * @file  ItemColorUtil.hpp
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
 * @brief MC namespace ItemColorUtil.
 *
 */
namespace ItemColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?fromBlockColor@ItemColorUtil@@YA?AW4ItemColor@@W4BlockColor@@@Z
     * @hash   -1036491608
     */
    MCAPI enum class ItemColor fromBlockColor(enum class BlockColor);
    /**
     * @symbol ?fromInt@ItemColorUtil@@YA?AW4ItemColor@@H@Z
     * @hash   357534976
     */
    MCAPI enum class ItemColor fromInt(int);
    /**
     * @symbol ?getName@ItemColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemColor@@@Z
     * @hash   -1424101388
     */
    MCAPI std::string const & getName(enum class ItemColor);
    /**
     * @symbol ?getRGBColor@ItemColorUtil@@YAHW4ItemColor@@@Z
     * @hash   653304772
     */
    MCAPI int getRGBColor(enum class ItemColor);

};