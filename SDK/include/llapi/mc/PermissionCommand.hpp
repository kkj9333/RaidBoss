/**
 * @file  PermissionCommand.hpp
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
 * @brief MC class PermissionCommand.
 *
 */
class PermissionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONCOMMAND
public:
    class PermissionCommand& operator=(class PermissionCommand const &) = delete;
    PermissionCommand(class PermissionCommand const &) = delete;
    PermissionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1680516022
     */
    virtual ~PermissionCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@PermissionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   598629751
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@PermissionCommand@@SAXAEAVCommandRegistry@@PEAVPermissionsFile@@@Z
     * @hash   158069218
     */
    MCAPI static void setup(class CommandRegistry &, class PermissionsFile *);

//private:
    /**
     * @symbol ?list@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   187175765
     */
    MCAPI void list(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?reload@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -118740688
     */
    MCAPI void reload(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?set@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1109666727
     */
    MCAPI void set(class CommandOrigin const &, class CommandOutput &) const;

private:
    /**
     * @symbol ?mPermissionsFile@PermissionCommand@@0PEAVPermissionsFile@@EA
     * @hash   384573855
     */
    MCAPI static class PermissionsFile * mPermissionsFile;

};