/**
 * @file  ScriptMinecraftUIModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftUIModuleFactory.
 *
 */
class ScriptMinecraftUIModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTUIMODULEFACTORY
public:
    class ScriptMinecraftUIModuleFactory& operator=(class ScriptMinecraftUIModuleFactory const &) = delete;
    ScriptMinecraftUIModuleFactory(class ScriptMinecraftUIModuleFactory const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   326860850
     */
    virtual ~ScriptMinecraftUIModuleFactory();
    /**
     * @symbol ??0ScriptMinecraftUIModuleFactory@@QEAA@XZ
     * @hash   -422194412
     */
    MCAPI ScriptMinecraftUIModuleFactory();
    /**
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftUIModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1842592584
     */
    MCAPI static std::string getModuleUUIDAsString();

//private:
    /**
     * @symbol ?_addVersions@ScriptMinecraftUIModuleFactory@@AEAAXXZ
     * @hash   601480801
     */
    MCAPI void _addVersions();
    /**
     * @symbol ?_generateBindings@ScriptMinecraftUIModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVersion@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
     * @hash   -1333769610
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(std::string const &, struct Scripting::Version const &, bool, std::vector<std::string> const &);

private:
    /**
     * @symbol ?LegacyModuleName@ScriptMinecraftUIModuleFactory@@0PEBDEB
     * @hash   1608013443
     */
    MCAPI static char const * LegacyModuleName;
    /**
     * @symbol ?ModuleName@ScriptMinecraftUIModuleFactory@@0PEBDEB
     * @hash   1327764290
     */
    MCAPI static char const * ModuleName;
    /**
     * @symbol ?ModuleUUID@ScriptMinecraftUIModuleFactory@@0VUUID@mce@@B
     * @hash   -2097747407
     */
    MCAPI static class mce::UUID const ModuleUUID;

};