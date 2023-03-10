/**
 * @file  PackSourceReport.hpp
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
 * @brief MC class PackSourceReport.
 *
 */
class PackSourceReport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCEREPORT
public:
    class PackSourceReport& operator=(class PackSourceReport const &) = delete;
#endif

public:
    /**
     * @symbol ??0PackSourceReport@@QEAA@XZ
     * @hash   -145879964
     */
    MCAPI PackSourceReport();
    /**
     * @symbol ??0PackSourceReport@@QEAA@AEBV0@@Z
     * @hash   -869641071
     */
    MCAPI PackSourceReport(class PackSourceReport const &);
    /**
     * @symbol ?addReport@PackSourceReport@@QEAAXAEBUPackIdVersion@@$$QEAVPackReport@@@Z
     * @hash   -1132287533
     */
    MCAPI void addReport(struct PackIdVersion const &, class PackReport &&);
    /**
     * @symbol ?getReports@PackSourceReport@@QEBAAEBV?$unordered_map@UPackIdVersion@@VPackReport@@U?$hash@UPackIdVersion@@@std@@U?$equal_to@UPackIdVersion@@@4@V?$allocator@U?$pair@$$CBUPackIdVersion@@VPackReport@@@std@@@4@@std@@XZ
     * @hash   -415468631
     */
    MCAPI class std::unordered_map<struct PackIdVersion, class PackReport, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, class PackReport>>> const & getReports() const;
    /**
     * @symbol ?hasErrors@PackSourceReport@@QEBA_NXZ
     * @hash   35485754
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol ??1PackSourceReport@@QEAA@XZ
     * @hash   1713274402
     */
    MCAPI ~PackSourceReport();

};