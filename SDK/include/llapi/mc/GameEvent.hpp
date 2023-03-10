/**
 * @file  GameEvent.hpp
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
 * @brief MC class GameEvent.
 *
 */
class GameEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENT
public:
    class GameEvent& operator=(class GameEvent const &) = delete;
    GameEvent(class GameEvent const &) = delete;
    GameEvent() = delete;
#endif

public:
    /**
     * @symbol ?getRadius@GameEvent@@QEBAMXZ
     * @hash   -1615489226
     */
    MCAPI float getRadius() const;
    /**
     * @symbol ?getRadiusSqrd@GameEvent@@QEBAMXZ
     * @hash   208479526
     */
    MCAPI float getRadiusSqrd() const;
    /**
     * @symbol ?getType@GameEvent@@QEBA?BW4GameEventType@GameEventConfig@@XZ
     * @hash   -317780666
     */
    MCAPI enum class GameEventConfig::GameEventType const getType() const;
    /**
     * @symbol ?isCategory@GameEvent@@QEBA_NW4GameEventCategory@GameEventConfig@@@Z
     * @hash   -1132425601
     */
    MCAPI bool isCategory(enum class GameEventConfig::GameEventCategory) const;

};