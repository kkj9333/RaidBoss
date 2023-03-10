/**
 * @file  InsideBlockEventMap.hpp
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
 * @brief MC class InsideBlockEventMap.
 *
 */
class InsideBlockEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKEVENTMAP
public:
    class InsideBlockEventMap& operator=(class InsideBlockEventMap const &) = delete;
    InsideBlockEventMap() = delete;
#endif

public:
    /**
     * @symbol ??0InsideBlockEventMap@@QEAA@AEBVBlock@@_N11AEBVActorDefinitionTrigger@@2@Z
     * @hash   -1686636471
     */
    MCAPI InsideBlockEventMap(class Block const &, bool, bool, bool, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);
    /**
     * @symbol ??0InsideBlockEventMap@@QEAA@AEBV0@@Z
     * @hash   -1329674623
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    /**
     * @symbol ?getBlock@InsideBlockEventMap@@QEBA?AV?$not_null@PEBVBlock@@@gsl@@XZ
     * @hash   460101771
     */
    MCAPI class gsl::not_null<class Block const *> getBlock() const;
    /**
     * @symbol ?getEnteredEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
     * @hash   -2052098108
     */
    MCAPI class ActorDefinitionTrigger const & getEnteredEvent() const;
    /**
     * @symbol ?getExitedEvent@InsideBlockEventMap@@QEBAAEBVActorDefinitionTrigger@@XZ
     * @hash   -1426366250
     */
    MCAPI class ActorDefinitionTrigger const & getExitedEvent() const;
    /**
     * @symbol ?isActorCurrentlyInside@InsideBlockEventMap@@QEBA_NXZ
     * @hash   1249575306
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @symbol ?isIgnoringStates@InsideBlockEventMap@@QEBA_NXZ
     * @hash   1315147738
     */
    MCAPI bool isIgnoringStates() const;
    /**
     * @symbol ?isWatchingIfActorEnters@InsideBlockEventMap@@QEBA_NXZ
     * @hash   -684142552
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @symbol ?isWatchingIfActorExits@InsideBlockEventMap@@QEBA_NXZ
     * @hash   -1179802662
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @symbol ?setCurrentlyInside@InsideBlockEventMap@@QEAAX_N@Z
     * @hash   -1588992510
     */
    MCAPI void setCurrentlyInside(bool);
    /**
     * @symbol ?setWasInside@InsideBlockEventMap@@QEAAX_N@Z
     * @hash   -766810318
     */
    MCAPI void setWasInside(bool);
    /**
     * @symbol ?wasActorInsideLastTick@InsideBlockEventMap@@QEBA_NXZ
     * @hash   2048938858
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @symbol ??1InsideBlockEventMap@@QEAA@XZ
     * @hash   -1644519009
     */
    MCAPI ~InsideBlockEventMap();

};