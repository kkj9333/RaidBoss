/**
 * @file  MoveTowardsClosestSpaceSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsClosestSpaceSystem.
 *
 */
class MoveTowardsClosestSpaceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSCLOSESTSPACESYSTEM
public:
    class MoveTowardsClosestSpaceSystem& operator=(class MoveTowardsClosestSpaceSystem const &) = delete;
    MoveTowardsClosestSpaceSystem(class MoveTowardsClosestSpaceSystem const &) = delete;
    MoveTowardsClosestSpaceSystem() = delete;
#endif

public:
    /**
     * @symbol ?moveTowardsClosestSpace@MoveTowardsClosestSpaceSystem@@SAXAEBVAABB@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVIConstBlockSource@@AEBVGetCollisionShapeInterface@@AEAVVec3@@@Z
     * @hash   1876095850
     */
    MCAPI static void moveTowardsClosestSpace(class AABB const &, std::vector<class AABB> const &, class IConstBlockSource const &, class GetCollisionShapeInterface const &, class Vec3 &);

};