/**
 * @file  NpcSceneDialogueData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NpcComponent.hpp"
#include "WeakEntityRef.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class NpcSceneDialogueData.
 *
 */
class NpcSceneDialogueData {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
public:
    WeakEntityRef mWer;
    string mString;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSCENEDIALOGUEDATA
public:
    class NpcSceneDialogueData& operator=(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -803659465
     */
    virtual ~NpcSceneDialogueData();
    /**
     * @vftbl  1
     * @symbol ?getDialogueText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   789997238
     */
    virtual std::string const & getDialogueText() const;
    /**
     * @vftbl  2
     * @hash   735828578
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getNameText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1140516649
     */
    virtual std::string const & getNameText() const;
    /**
     * @vftbl  4
     * @symbol ?getNameRawText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1722784607
     */
    virtual std::string const & getNameRawText() const;
    /**
     * @vftbl  5
     * @symbol ?getSceneName@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1112370860
     */
    virtual std::string const & getSceneName() const;
    /**
     * @vftbl  6
     * @hash   601898278
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   602821799
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?getActorUniqueID@NpcSceneDialogueData@@UEAA?AUActorUniqueID@@XZ
     * @hash   1326748952
     */
    virtual struct ActorUniqueID getActorUniqueID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
    /**
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEAAPEAUNpcActionsContainer@@XZ
     * @hash   -917405712
     */
    MCVAPI struct NpcActionsContainer * getActionsContainer();
    /**
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEBAPEBUNpcActionsContainer@@XZ
     * @hash   -1485447124
     */
    MCVAPI struct NpcActionsContainer const * getActionsContainer() const;
    /**
     * @symbol ?getActor@NpcSceneDialogueData@@UEAAPEAVActor@@XZ
     * @hash   1489095250
     */
    MCVAPI class Actor * getActor();
    /**
     * @symbol ?getActor@NpcSceneDialogueData@@UEBAPEBVActor@@XZ
     * @hash   771058894
     */
    MCVAPI class Actor const * getActor() const;
#endif
    /**
     * @symbol ??0NpcSceneDialogueData@@QEAA@VWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   214472147
     */
    MCAPI NpcSceneDialogueData(class WeakEntityRef, std::string const &);

};