/**
 * @file  ScreenHandlerHUD.hpp
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
 * @brief MC class ScreenHandlerHUD.
 *
 */
class ScreenHandlerHUD {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERHUD
public:
    class ScreenHandlerHUD& operator=(class ScreenHandlerHUD const &) = delete;
    ScreenHandlerHUD(class ScreenHandlerHUD const &) = delete;
    ScreenHandlerHUD() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   172586403
     */
    virtual ~ScreenHandlerHUD();
    /**
     * @vftbl  1
     * @symbol ?handleAction@ScreenHandlerHUD@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
     * @hash   -1216619289
     */
    virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);

};