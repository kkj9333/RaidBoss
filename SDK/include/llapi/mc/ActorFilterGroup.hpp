/**
 * @file  ActorFilterGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterGroup.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorFilterGroup.
 *
 */
class ActorFilterGroup : public FilterGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct LegacyMapping {
    LegacyMapping() = delete;
    LegacyMapping(LegacyMapping const&) = delete;
    LegacyMapping(LegacyMapping const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFILTERGROUP
public:
    ActorFilterGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1662836996
     */
    virtual ~ActorFilterGroup();
    /**
     * @vftbl  1
     * @symbol ?_createSubgroup@ActorFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
     * @hash   1279594893
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum class FilterGroup::CollectionType) const;
    /**
     * @vftbl  3
     * @symbol ?_handleUnknownMember@ActorFilterGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     * @hash   291136729
     */
    virtual bool _handleUnknownMember(std::string const &, class Json::Value const &);
    /**
     * @symbol ??0ActorFilterGroup@@QEAA@AEBV0@@Z
     * @hash   632480049
     */
    MCAPI ActorFilterGroup(class ActorFilterGroup const &);
    /**
     * @symbol ?evaluateActor@ActorFilterGroup@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
     * @hash   2132138790
     */
    MCAPI bool evaluateActor(class Actor const &, class VariantParameterList const &) const;
    /**
     * @symbol ??4ActorFilterGroup@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1913196700
     */
    MCAPI class ActorFilterGroup & operator=(class ActorFilterGroup const &);
    /**
     * @symbol ?initialize@ActorFilterGroup@@SAXXZ
     * @hash   -2058001421
     */
    MCAPI static void initialize();

//protected:
    /**
     * @symbol ?_addLegacyFilter@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBULegacyMapping@1@AEBVFilterInput@@@Z
     * @hash   2118769548
     */
    MCAPI bool _addLegacyFilter(std::string const &, struct ActorFilterGroup::LegacyMapping const &, class FilterInput const &);
    /**
     * @symbol ?_processLegacyArray@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
     * @hash   19433562
     */
    MCAPI bool _processLegacyArray(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);
    /**
     * @symbol ?_processLegacyMember@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
     * @hash   1902437255
     */
    MCAPI bool _processLegacyMember(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);

protected:

};