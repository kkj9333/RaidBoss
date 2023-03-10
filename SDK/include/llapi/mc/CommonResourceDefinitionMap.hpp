/**
 * @file  CommonResourceDefinitionMap.hpp
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
 * @brief MC class CommonResourceDefinitionMap.
 *
 */
class CommonResourceDefinitionMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMONRESOURCEDEFINITIONMAP
public:
    class CommonResourceDefinitionMap& operator=(class CommonResourceDefinitionMap const &) = delete;
    CommonResourceDefinitionMap(class CommonResourceDefinitionMap const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommonResourceDefinitionMap@@QEAA@XZ
     * @hash   -1790377764
     */
    MCAPI CommonResourceDefinitionMap();
    /**
     * @symbol ?getAnimateScriptArray@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@XZ
     * @hash   -2031302150
     */
    MCAPI std::vector<struct NamedMolangScript> const & getAnimateScriptArray() const;
    /**
     * @symbol ?getAnimationControllers@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorAnimationControllerPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorAnimationControllerPtr@@@std@@@4@@std@@XZ
     * @hash   -357419441
     */
    MCAPI class std::unordered_map<class HashedString, class ActorAnimationControllerPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorAnimationControllerPtr>>> const & getAnimationControllers() const;
    /**
     * @symbol ?getAnimations@CommonResourceDefinitionMap@@QEBAAEBV?$unordered_map@VHashedString@@VActorSkeletalAnimationPtr@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@VActorSkeletalAnimationPtr@@@std@@@4@@std@@XZ
     * @hash   1697935399
     */
    MCAPI class std::unordered_map<class HashedString, class ActorSkeletalAnimationPtr, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class ActorSkeletalAnimationPtr>>> const & getAnimations() const;
    /**
     * @symbol ?getVariableSettings@CommonResourceDefinitionMap@@QEBAAEBV?$vector@UMolangVariableSettings@@V?$allocator@UMolangVariableSettings@@@std@@@std@@XZ
     * @hash   -1143891618
     */
    MCAPI std::vector<struct MolangVariableSettings> const & getVariableSettings() const;
    /**
     * @symbol ?isCommonResourceDefinitionMapEmpty@CommonResourceDefinitionMap@@QEBA_NXZ
     * @hash   -1247983936
     */
    MCAPI bool isCommonResourceDefinitionMapEmpty() const;
    /**
     * @symbol ?mergeActorAnimateScriptArray@CommonResourceDefinitionMap@@QEAAXAEBV?$vector@UNamedMolangScript@@V?$allocator@UNamedMolangScript@@@std@@@std@@@Z
     * @hash   -1784444984
     */
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const &);
    /**
     * @symbol ?mergeAnimation@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorSkeletalAnimationPtr@@@Z
     * @hash   416080459
     */
    MCAPI void mergeAnimation(class HashedString const &, class ActorSkeletalAnimationPtr);
    /**
     * @symbol ?mergeAnimationController@CommonResourceDefinitionMap@@QEAAXAEBVHashedString@@VActorAnimationControllerPtr@@@Z
     * @hash   -640762035
     */
    MCAPI void mergeAnimationController(class HashedString const &, class ActorAnimationControllerPtr);

//private:
    /**
     * @symbol ?_getAnimationResourceDefinitionLock@CommonResourceDefinitionMap@@CAAEAVrecursive_mutex@std@@XZ
     * @hash   -2024929316
     */
    MCAPI static class std::recursive_mutex & _getAnimationResourceDefinitionLock();

private:

};