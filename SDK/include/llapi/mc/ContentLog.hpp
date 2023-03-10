/**
 * @file  ContentLog.hpp
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
 * @brief MC class ContentLog.
 *
 */
class ContentLog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOG
public:
    class ContentLog& operator=(class ContentLog const &) = delete;
    ContentLog(class ContentLog const &) = delete;
#endif

public:
    /**
     * @symbol ??0ContentLog@@QEAA@XZ
     * @hash   -1431938601
     */
    MCAPI ContentLog();
    /**
     * @symbol ?isEnabled@ContentLog@@QEBA_NXZ
     * @hash   1346266280
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?log@ContentLog@@QEAAX_NW4LogLevel@@W4LogArea@@ZZ
     * @hash   1040030857
     */
    MCAPI void log(bool, enum class LogLevel, enum class LogArea, ...);
    /**
     * @symbol ?unregisterEndPoint@ContentLog@@QEAAXV?$not_null@PEAVContentLogEndPoint@@@gsl@@@Z
     * @hash   585906449
     */
    MCAPI void unregisterEndPoint(class gsl::not_null<class ContentLogEndPoint *>);
    /**
     * @symbol ?updateEnabledStatus@ContentLog@@QEAAXXZ
     * @hash   -1511025501
     */
    MCAPI void updateEnabledStatus();
    /**
     * @symbol ?getLogAreaName@ContentLog@@SAPEBDW4LogArea@@@Z
     * @hash   -1978486668
     */
    MCAPI static char const * getLogAreaName(enum class LogArea);
    /**
     * @symbol ?getLogLevelName@ContentLog@@SAPEBDW4LogLevel@@@Z
     * @hash   1225378442
     */
    MCAPI static char const * getLogLevelName(enum class LogLevel);

//private:
    /**
     * @symbol ?_writeToLog@ContentLog@@AEAAX_NW4LogArea@@W4LogLevel@@AEAPEAD@Z
     * @hash   805143927
     */
    MCAPI void _writeToLog(bool, enum class LogArea, enum class LogLevel, char *&);

private:

};