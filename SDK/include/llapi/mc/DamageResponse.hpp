/**
 * @file  DamageResponse.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageResponse.
 *
 */
class DamageResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGERESPONSE
public:
    class DamageResponse& operator=(class DamageResponse const &) = delete;
    DamageResponse(class DamageResponse const &) = delete;
    DamageResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   199855002
     */
    virtual ~DamageResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@DamageResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -621365031
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@DamageResponse@@UEBAXAEAVRenderParams@@@Z
     * @hash   1397929605
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@DamageResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   1850853879
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @symbol ?NameID@DamageResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -744886881
     */
    MCAPI static std::string const NameID;

//private:
    /**
     * @symbol ?repairOrHurtItem@DamageResponse@@AEBAXAEBHAEAVRenderParams@@@Z
     * @hash   2022546139
     */
    MCAPI void repairOrHurtItem(int const &, class RenderParams &) const;

private:

};