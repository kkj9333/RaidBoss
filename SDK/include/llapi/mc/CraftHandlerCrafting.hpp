/**
 * @file  CraftHandlerCrafting.hpp
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
 * @brief MC class CraftHandlerCrafting.
 *
 */
class CraftHandlerCrafting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERCRAFTING
public:
    class CraftHandlerCrafting& operator=(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1785220918
     */
    virtual ~CraftHandlerCrafting();
    /**
     * @vftbl  1
     * @symbol ?handleConsumedItem@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
     * @hash   245916817
     */
    virtual enum class ItemStackNetResult handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const &);
    /**
     * @vftbl  2
     * @symbol ?preHandleAction@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
     * @hash   -1193664135
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerCrafting@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     * @hash   -1057070432
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?_getLevelRecipes@CraftHandlerCrafting@@EEBAPEBVRecipes@@XZ
     * @hash   -606151494
     */
    virtual class Recipes const * _getLevelRecipes() const;
    /**
     * @symbol ??0CraftHandlerCrafting@@QEAA@_NAEAVPlayer@@AEAVItemStackRequestActionCraftHandler@@@Z
     * @hash   172956155
     */
    MCAPI CraftHandlerCrafting(bool, class Player &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @symbol ?_handleAutoCraft@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftRecipeAuto@@@Z
     * @hash   1437981109
     */
    MCAPI enum class ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const &);
    /**
     * @symbol ?_handleCraftOutput@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
     * @hash   -1311675919
     */
    MCAPI enum class ItemStackNetResult _handleCraftOutput(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};