/**
 * @file  CircuitSystem.hpp
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
 * @brief MC class CircuitSystem.
 *
 */
class CircuitSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSYSTEM
public:
    class CircuitSystem& operator=(class CircuitSystem const &) = delete;
    CircuitSystem(class CircuitSystem const &) = delete;
#endif

public:
    /**
     * @symbol ??0CircuitSystem@@QEAA@XZ
     * @hash   -1636751612
     */
    MCAPI CircuitSystem();
    /**
     * @symbol ?evaluate@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     * @hash   346449681
     */
    MCAPI void evaluate(class BlockSource *);
    /**
     * @symbol ?getStrength@CircuitSystem@@QEAAHAEBVBlockPos@@@Z
     * @hash   1800185207
     */
    MCAPI int getStrength(class BlockPos const &);
    /**
     * @symbol ?invalidatePos@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     * @hash   1012272076
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @symbol ?isAvailableAt@CircuitSystem@@QEAA_NAEBVBlockPos@@@Z
     * @hash   724053085
     */
    MCAPI bool isAvailableAt(class BlockPos const &);
    /**
     * @symbol ?preSetupPoweredBlocks@CircuitSystem@@QEAAXAEBVChunkPos@@@Z
     * @hash   1773439964
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @symbol ?removeComponents@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     * @hash   -366422646
     */
    MCAPI void removeComponents(class BlockPos const &);
    /**
     * @symbol ?setStrength@CircuitSystem@@QEAAXAEBVBlockPos@@H@Z
     * @hash   -1858924601
     */
    MCAPI void setStrength(class BlockPos const &, int);
    /**
     * @symbol ?updateBlocks@CircuitSystem@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   332365685
     */
    MCAPI void updateBlocks(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?updateDependencies@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     * @hash   1599264607
     */
    MCAPI void updateDependencies(class BlockSource *);

//private:
    /**
     * @symbol ?createComponent@CircuitSystem@@AEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@EV?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
     * @hash   -284450036
     */
    MCAPI class BaseCircuitComponent * createComponent(class BlockPos const &, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @symbol ?evaluateComponents@CircuitSystem@@AEAAX_N@Z
     * @hash   -2059281887
     */
    MCAPI void evaluateComponents(bool);
    /**
     * @symbol ?updateIndividualBlock@CircuitSystem@@AEAAXV?$not_null@PEAVBaseCircuitComponent@@@gsl@@AEBVBlockPos@@1AEAVBlockSource@@@Z
     * @hash   -1126512866
     */
    MCAPI void updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent *>, class BlockPos const &, class BlockPos const &, class BlockSource &);

private:

};