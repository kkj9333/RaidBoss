/**
 * @file  EffectCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EffectCommand.
 *
 */
class EffectCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EFFECTCOMMAND
public:
    class EffectCommand& operator=(class EffectCommand const &) = delete;
    EffectCommand(class EffectCommand const &) = delete;
    EffectCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1488176056
     */
    virtual ~EffectCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@EffectCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -609513975
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@EffectCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   749484000
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?clear@EffectCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -2048225274
     */
    MCAPI void clear(class CommandOrigin const &, class CommandOutput &) const;

private:

};