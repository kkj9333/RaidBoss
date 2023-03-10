/**
 * @file  ParticleEffectResponse.hpp
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
 * @brief MC class ParticleEffectResponse.
 *
 */
class ParticleEffectResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEEFFECTRESPONSE
public:
    class ParticleEffectResponse& operator=(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2019519970
     */
    virtual ~ParticleEffectResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@ParticleEffectResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2088172639
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@ParticleEffectResponse@@UEBAXAEAVRenderParams@@@Z
     * @hash   1750724413
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@ParticleEffectResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   -1261003217
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @symbol ?NameID@ParticleEffectResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1352329073
     */
    MCAPI static std::string const NameID;

};