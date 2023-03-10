/**
 * @file  EditorTickFilterSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EditorTickFilterSystem.
 *
 */
class EditorTickFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORTICKFILTERSYSTEM
public:
    class EditorTickFilterSystem& operator=(class EditorTickFilterSystem const &) = delete;
    EditorTickFilterSystem(class EditorTickFilterSystem const &) = delete;
    EditorTickFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?_addPauseTickNeeded@EditorTickFilterSystem@@SAXAEAVStrictEntityContext@@AEAVActorTickNeededComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UEditorActorPauseTickNeededComponent@@@@@Z
     * @hash   1007920811
     */
    MCAPI static void _addPauseTickNeeded(class StrictEntityContext &, class ActorTickNeededComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EditorActorPauseTickNeededComponent> &);
    /**
     * @symbol ?createAddPauseTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   73971376
     */
    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();
    /**
     * @symbol ?createRemoveActorTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   114364074
     */
    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();

};