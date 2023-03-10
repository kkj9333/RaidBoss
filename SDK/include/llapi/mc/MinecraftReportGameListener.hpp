/**
 * @file  MinecraftReportGameListener.hpp
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
 * @brief MC class MinecraftReportGameListener.
 *
 */
class MinecraftReportGameListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTREPORTGAMELISTENER
public:
    class MinecraftReportGameListener& operator=(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener(class MinecraftReportGameListener const &) = delete;
    MinecraftReportGameListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1236440181
     */
    virtual ~MinecraftReportGameListener();
    /**
     * @vftbl  1
     * @symbol ?onTestStructureLoaded@MinecraftReportGameListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     * @hash   949225079
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @vftbl  2
     * @symbol ?onTestPassed@MinecraftReportGameListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     * @hash   -1791226115
     */
    virtual void onTestPassed(class gametest::BaseGameTestInstance &);
    /**
     * @vftbl  3
     * @symbol ?onTestFailed@MinecraftReportGameListener@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
     * @hash   189715184
     */
    virtual void onTestFailed(class gametest::BaseGameTestInstance &);
    /**
     * @symbol ??0MinecraftReportGameListener@@QEAA@AEAVMinecraftGameTestInstance@@AEAVGameTestTicker@gametest@@@Z
     * @hash   1321814431
     */
    MCAPI MinecraftReportGameListener(class MinecraftGameTestInstance &, class gametest::GameTestTicker &);

//private:
    /**
     * @symbol ?_generateErrorDescription@MinecraftReportGameListener@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUGameTestError@gametest@@@Z
     * @hash   225048194
     */
    MCAPI std::string _generateErrorDescription(struct gametest::GameTestError const &) const;
    /**
     * @symbol ?_reportFailure@MinecraftReportGameListener@@AEAAXAEBUGameTestError@gametest@@AEAVBlockSource@@@Z
     * @hash   -1577872092
     */
    MCAPI void _reportFailure(struct gametest::GameTestError const &, class BlockSource &);
    /**
     * @symbol ?_say@MinecraftReportGameListener@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   -1352985151
     */
    MCAPI void _say(std::string const &, std::string const &);
    /**
     * @symbol ?_spawnBeacon@MinecraftReportGameListener@@AEAAXAEBVBlock@@@Z
     * @hash   -1519410985
     */
    MCAPI void _spawnBeacon(class Block const &);
    /**
     * @symbol ?_spawnLectern@MinecraftReportGameListener@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1462605604
     */
    MCAPI void _spawnLectern(std::string const &);
    /**
     * @symbol ?_visualizeFailedTest@MinecraftReportGameListener@@AEAAXAEBUGameTestError@gametest@@AEAVBlockSource@@@Z
     * @hash   -1890875967
     */
    MCAPI void _visualizeFailedTest(struct gametest::GameTestError const &, class BlockSource &);

private:

};