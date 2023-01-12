/**
 * @file  WeatherCommand.hpp
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
 * @brief MC class WeatherCommand.
 *
 */
class WeatherCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEATHERCOMMAND
public:
    class WeatherCommand& operator=(class WeatherCommand const &) = delete;
    WeatherCommand(class WeatherCommand const &) = delete;
    WeatherCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -108183551
     */
    virtual ~WeatherCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@WeatherCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1659426780
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@WeatherCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1519064132
     */
    MCAPI static void setup(class CommandRegistry &);

};