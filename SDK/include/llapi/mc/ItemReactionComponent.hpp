/**
 * @file  ItemReactionComponent.hpp
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
 * @brief MC class ItemReactionComponent.
 *
 */
class ItemReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREACTIONCOMPONENT
public:
    class ItemReactionComponent& operator=(class ItemReactionComponent const &) = delete;
    ItemReactionComponent(class ItemReactionComponent const &) = delete;
    ItemReactionComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -91847601
     */
    virtual ~ItemReactionComponent();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?_onEnd@ItemReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
     * @hash   -635476563
     */
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);

};