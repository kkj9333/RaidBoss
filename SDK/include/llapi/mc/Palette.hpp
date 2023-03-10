/**
 * @file  Palette.hpp
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
 * @brief MC class Palette.
 *
 */
class Palette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PALETTE
public:
    class Palette& operator=(class Palette const &) = delete;
    Palette(class Palette const &) = delete;
    Palette() = delete;
#endif

public:
    /**
     * @symbol ?BLACK@Palette@@2VColor@mce@@B
     * @hash   -1311600623
     */
    MCAPI static class mce::Color const BLACK;
    /**
     * @symbol ?BLUE@Palette@@2VColor@mce@@B
     * @hash   1590742739
     */
    MCAPI static class mce::Color const BLUE;
    /**
     * @symbol ?BROWN@Palette@@2VColor@mce@@B
     * @hash   -886414271
     */
    MCAPI static class mce::Color const BROWN;
    /**
     * @symbol ?CYAN@Palette@@2VColor@mce@@B
     * @hash   1325157971
     */
    MCAPI static class mce::Color const CYAN;
    /**
     * @symbol ?GRAY@Palette@@2VColor@mce@@B
     * @hash   -1599152589
     */
    MCAPI static class mce::Color const GRAY;
    /**
     * @symbol ?GREEN@Palette@@2VColor@mce@@B
     * @hash   340599409
     */
    MCAPI static class mce::Color const GREEN;
    /**
     * @symbol ?LIGHT_BLUE@Palette@@2VColor@mce@@B
     * @hash   1483609395
     */
    MCAPI static class mce::Color const LIGHT_BLUE;
    /**
     * @symbol ?LIGHT_GREEN@Palette@@2VColor@mce@@B
     * @hash   1318123281
     */
    MCAPI static class mce::Color const LIGHT_GREEN;
    /**
     * @symbol ?MAGENTA@Palette@@2VColor@mce@@B
     * @hash   1286720961
     */
    MCAPI static class mce::Color const MAGENTA;
    /**
     * @symbol ?ORANGE@Palette@@2VColor@mce@@B
     * @hash   -1009459597
     */
    MCAPI static class mce::Color const ORANGE;
    /**
     * @symbol ?PINK@Palette@@2VColor@mce@@B
     * @hash   1285286915
     */
    MCAPI static class mce::Color const PINK;
    /**
     * @symbol ?PURPLE@Palette@@2VColor@mce@@B
     * @hash   -1565868093
     */
    MCAPI static class mce::Color const PURPLE;
    /**
     * @symbol ?RED@Palette@@2VColor@mce@@B
     * @hash   542873345
     */
    MCAPI static class mce::Color const RED;
    /**
     * @symbol ?SILVER@Palette@@2VColor@mce@@B
     * @hash   -1179655101
     */
    MCAPI static class mce::Color const SILVER;
    /**
     * @symbol ?WHITE@Palette@@2VColor@mce@@B
     * @hash   -1299969695
     */
    MCAPI static class mce::Color const WHITE;
    /**
     * @symbol ?YELLOW@Palette@@2VColor@mce@@B
     * @hash   2075097699
     */
    MCAPI static class mce::Color const YELLOW;
    /**
     * @symbol ?fromByte@Palette@@SA?AW4PaletteColor@@E@Z
     * @hash   -928298060
     */
    MCAPI static enum class PaletteColor fromByte(unsigned char);
    /**
     * @symbol ?getColor@Palette@@SAAEBVColor@mce@@W4PaletteColor@@@Z
     * @hash   -1167673047
     */
    MCAPI static class mce::Color const & getColor(enum class PaletteColor);

};