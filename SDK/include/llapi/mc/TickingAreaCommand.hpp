/**
 * @file  TickingAreaCommand.hpp
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
 * @brief MC class TickingAreaCommand.
 *
 */
class TickingAreaCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREACOMMAND
public:
    class TickingAreaCommand& operator=(class TickingAreaCommand const &) = delete;
    TickingAreaCommand(class TickingAreaCommand const &) = delete;
    TickingAreaCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2001920739
     */
    virtual ~TickingAreaCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@TickingAreaCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1352415546
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?formatTickingAreaList@TickingAreaCommand@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@3@@Z
     * @hash   -545792143
     */
    MCAPI static std::string formatTickingAreaList(std::vector<struct TickingAreaDescription> const &);
    /**
     * @symbol ?setup@TickingAreaCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   2035232108
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_add@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -93236294
     */
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @symbol ?_list@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -2037100955
     */
    MCAPI void _list(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @symbol ?_preload@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -1216388446
     */
    MCAPI void _preload(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @symbol ?_remove@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   395713067
     */
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @symbol ?_removeAll@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     * @hash   -551368842
     */
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;

private:

};