/**
 * @file  CerealSchemaUpgradeSet.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealSchemaUpgradeSet.
 *
 */
class CerealSchemaUpgradeSet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADESET
public:
    class CerealSchemaUpgradeSet& operator=(class CerealSchemaUpgradeSet const &) = delete;
    CerealSchemaUpgradeSet(class CerealSchemaUpgradeSet const &) = delete;
    CerealSchemaUpgradeSet() = delete;
#endif

public:
    /**
     * @symbol ?findNext@CerealSchemaUpgradeSet@@QEBA?AU?$pair@V?$shared_ptr@VCerealSchemaUpgrade@@@std@@VSemVersion@@@std@@AEBVSemVersion@@@Z
     * @hash   513443407
     */
    MCAPI struct std::pair<class std::shared_ptr<class CerealSchemaUpgrade>, class SemVersion> findNext(class SemVersion const &) const;
    /**
     * @symbol ?forEach@CerealSchemaUpgradeSet@@QEAA_NV?$function@$$A6A_NV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z@std@@@Z
     * @hash   616990221
     */
    MCAPI bool forEach(class std::function<bool (class std::shared_ptr<class CerealSchemaUpgrade>)>);
    /**
     * @symbol ??1CerealSchemaUpgradeSet@@QEAA@XZ
     * @hash   1659604545
     */
    MCAPI ~CerealSchemaUpgradeSet();

};