/**
 * @file  TickingAreaList.hpp
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
 * @brief MC class TickingAreaList.
 *
 */
class TickingAreaList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALIST
public:
    class TickingAreaList& operator=(class TickingAreaList const &) = delete;
    TickingAreaList(class TickingAreaList const &) = delete;
    TickingAreaList() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   891949918
     */
    virtual ~TickingAreaList();
    /**
     * @vftbl  1
     * @symbol ?removeDistantEntityAreasAndCheckForRemoved@TickingAreaList@@UEAA_NAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@V?$function@$$A6AXAEBVITickingArea@@@Z@3@AEAVLevelStorage@@@Z
     * @hash   1656989070
     */
    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const &, class std::function<void (class ITickingArea const &)>, class LevelStorage &);

};