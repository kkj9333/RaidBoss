#pragma once
#include <RegCommandAPI.h>
#include <Global.h>
#include <DynamicCommandAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <PlayerInfoAPI.h>
#include "CustomRaidmanager.hpp"
#include <FormUI.h>
#include <mc/Dimension.hpp>

struct mdimid :public AutomaticID<class Dimension, int> {

};
template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, mdimid>()
{
    //from CommandRegistry::addEnumValues_AutomaticID_Dimension_int___anonymous_namespace_::DimensionConverte
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@V?$AutomaticID@VDimension@@H@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    return id;
};
//

template <>
inline RegisterCommandHelper::ParseFn CommandRegistry::getParseFn<mdimid>() {
    bool (CommandRegistry:: * ptr)(void*, CommandRegistry::ParseToken const&,
        CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;
    *(void**)&ptr = dlsym_real(
        "??$parse@V?$AutomaticID@VDimension@@H@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin"
        "@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string"
        "@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits"
        "@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z");
    return ptr;
}

using namespace RegisterCommandHelper;
class RaidbossCommand : public Command
{

    std::string raidname;
    bool isOpset;
    bool isroundset;
    bool isdimset;
    bool ispercentageset;
    CommandPosition pos1;
    CommandPosition pos2;
    std::string title="uninititle";
    mdimid dim;
    int round=10;
    float percentage=0;
    enum class baseOperation :int
    {
        create = 0,
        remove = 1,
        list = 2,
        updatetitle =3,
        updatepercentage = 4,
        updatecolor = 5,
    } operation;
    bool updatetitle;
    bool updatepercentage;
    bool updatecolor;
    bool updateroundnum;
    BossEventColour col;
public:

    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        ServerPlayer* sp = ori.getPlayer();
        int dimid = dim;
        AABB area; BlockPos p1, p2; 

        BlockPos center;
        if (!isOpset) {
        }
        else {
#define max(x,y) (x>y?x:y)
#define min(x,y) (x>y?y:x)
            switch (operation)
            {
            case baseOperation::create:
                p1= pos1.getBlockPos(0, ori, { 0, 0, 0 }), p2 = pos2.getBlockPos(0, ori, { 0, 0, 0 });
                area = { {min(p1.x,p2.x),min(p1.y,p2.y),min(p1.z,p2.z)},{max(p1.x,p2.x),max(p1.y,p2.y),max(p1.z,p2.z)} };
                center = area.getCenter().toBlockPos();
                if (!isdimset)
                    dimid = ori.getDimension()->getDimensionId();
                if(!REvent::manager().createNewRaidBoss(raidname, center, dimid, area, percentage, title, round))
                    output.error("already exist");
                break;
            case baseOperation::remove:
                if(!REvent::manager().removeRaidBoss(raidname))
                    output.error("not found");
                break;
            case baseOperation::list:
                output.addMessage(REvent::manager().getlist());
                break;
            case baseOperation::updatecolor:

                if (updatecolor)
                {
                    if (!REvent::manager().updatecolor(raidname, col))
                        output.error("failed to update color");
                }
                break;
            case baseOperation::updatetitle:
                if (updatetitle) {
                    if (!REvent::manager().updatetitle(raidname, title))
                        output.error("failed to update title");
                }
                break;
            case baseOperation::updatepercentage:
                if (updatepercentage) {
                    if (!REvent::manager().updatepercentage(raidname, percentage))
                        output.error("failed to update percentage");
                }
                break;
            default:
                break;
            }
        }
        //
#undef max(x,y)
#undef min(x,y) 
    }

    static void setup(CommandRegistry* registry)
    {
        // Register Cmd
        registry->registerCommand("raidboss", "a custom bossevent system", CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->addEnum<baseOperation>("edoption0", {
            {"list", baseOperation::list},
            }
        );
        registry->addEnum<baseOperation>("edoption1", {
            {"remove", baseOperation::remove},
            }
        );
        registry->addEnum<baseOperation>("edoption2", {
            {"create", baseOperation::create},
            }
        );
        registry->addEnum<baseOperation>("updatecolor", {
            {"updatecolor", baseOperation::updatecolor},
            }
        );
        registry->addEnum<baseOperation>("updatetitle", {
            {"updatetitle", baseOperation::updatetitle},
            }
        );
        registry->addEnum<baseOperation>("updatepercentage", {
            {"updatepercentage", baseOperation::updatepercentage},
            }
        );
        registry->addEnum<BossEventColour>("bosseventcolor", {
            {"grey", BossEventColour::Grey},
            {"blue", BossEventColour::Blue},
            {"green", BossEventColour::Green},
            {"purple", BossEventColour::Purple},
            {"red", BossEventColour::Red},
            {"white", BossEventColour::White},
            {"yellow", BossEventColour::Yellow},
            }
        );
        auto eventnamepa = makeMandatory(&RaidbossCommand::raidname, "event");
        auto healthperpa = makeMandatory(&RaidbossCommand::percentage, "percentage", &RaidbossCommand::updatepercentage);
        auto roundpa = makeMandatory(&RaidbossCommand::round, "roundnum", &RaidbossCommand::updateroundnum);
        auto titlepa = makeMandatory(&RaidbossCommand::title, "titlename", &RaidbossCommand::updatetitle);
        auto colorpa = makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::col, "color","bosseventcolor", &RaidbossCommand::updatecolor);
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "t", "updatetitle", &RaidbossCommand::isOpset),
            eventnamepa,
            titlepa
            );
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "c", "updatecolor", &RaidbossCommand::isOpset),
            eventnamepa,
            colorpa
            );
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "p", "updatepercentage", &RaidbossCommand::isOpset),
            eventnamepa,
            healthperpa
            );
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "list", "edoption0", &RaidbossCommand::isOpset)
        );
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "remove", "edoption1", &RaidbossCommand::isOpset),
            eventnamepa);
        registry->registerOverload<RaidbossCommand>(
            "raidboss",
            makeMandatory<CommandParameterDataType::ENUM>(&RaidbossCommand::operation, "create", "edoption2", &RaidbossCommand::isOpset),
            eventnamepa,
            makeMandatory(&RaidbossCommand::pos1, "from"),
            makeMandatory(&RaidbossCommand::pos2, "to"),
            makeMandatory(&RaidbossCommand::title, "titlename"),
            makeOptional(&RaidbossCommand::percentage, "percentage", &RaidbossCommand::ispercentageset),
            makeOptional(&RaidbossCommand::dim, "dimid", &RaidbossCommand::isdimset),
            makeOptional(&RaidbossCommand::round, "roundnum",&RaidbossCommand::isroundset )
            );
            //makeOptional(&VirtualBoxCommand::mayxuid, "playerxuid|playername", &IVshopCommand::isxuid_set)
    }
};



//#include <MC/TakePictureCommand.hpp>
//#include <MC/ResourceUriCommand.hpp>
//#include <MC/LessonCommand.hpp>
inline void RegisterCommands()
{
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        RaidbossCommand::setup(ev.mCommandRegistry);
        return true;
        });
}