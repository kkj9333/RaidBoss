/**
 * @file  VanillaDimensions.hpp
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
 * @brief MC class VanillaDimensions.
 *
 */
class VanillaDimensions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLADIMENSIONS
public:
    class VanillaDimensions& operator=(class VanillaDimensions const &) = delete;
    VanillaDimensions(class VanillaDimensions const &) = delete;
    VanillaDimensions() = delete;
#endif

public:
    /**
     * @symbol ?Nether@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     * @hash   -553408163
     */
    MCAPI static class AutomaticID<class Dimension, int> const Nether;
    /**
     * @symbol ?Overworld@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     * @hash   1813721783
     */
    MCAPI static class AutomaticID<class Dimension, int> const Overworld;
    /**
     * @symbol ?TheEnd@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     * @hash   -975532383
     */
    MCAPI static class AutomaticID<class Dimension, int> const TheEnd;
    /**
     * @symbol ?TheEndSpawnPoint@VanillaDimensions@@2VVec3@@B
     * @hash   1104417655
     */
    MCAPI static class Vec3 const TheEndSpawnPoint;
    /**
     * @symbol ?Undefined@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     * @hash   80719363
     */
    MCAPI static class AutomaticID<class Dimension, int> const Undefined;
    /**
     * @symbol ?convertPointBetweenDimensions@VanillaDimensions@@SA_NAEBVVec3@@AEAV2@V?$AutomaticID@VDimension@@H@@2AEBVDimensionConversionData@@@Z
     * @hash   -1680617033
     */
    MCAPI static bool convertPointBetweenDimensions(class Vec3 const &, class Vec3 &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, class DimensionConversionData const &);
    /**
     * @symbol ?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z
     * @hash   -1847187687
     */
    MCAPI static class AutomaticID<class Dimension, int> fromSerializedInt(int);
    /**
     * @symbol ?fromString@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1369488451
     */
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const &);
    /**
     * @symbol ?toSerializedInt@VanillaDimensions@@SAHAEBV?$AutomaticID@VDimension@@H@@@Z
     * @hash   424516525
     */
    MCAPI static int toSerializedInt(class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol ?toString@VanillaDimensions@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1817198463
     */
    MCAPI static std::string const toString(class AutomaticID<class Dimension, int> const &);

//protected:

protected:
    /**
     * @symbol ?DimensionMap@VanillaDimensions@@1V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@@@B
     * @hash   1808525243
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, class AutomaticID<class Dimension, int>> const DimensionMap;

};