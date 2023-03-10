/**
 * @file  CommandResponse.hpp
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
 * @brief MC class CommandResponse.
 *
 */
class CommandResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDRESPONSE
public:
    class CommandResponse& operator=(class CommandResponse const &) = delete;
    CommandResponse(class CommandResponse const &) = delete;
    CommandResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1303288070
     */
    virtual ~CommandResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@CommandResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -785791011
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@CommandResponse@@UEBAXAEAVRenderParams@@@Z
     * @hash   1363959105
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@CommandResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   1110199739
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;

};