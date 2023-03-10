/**
 * @file  MolangProgramBuildState.hpp
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
 * @brief MC structure MolangProgramBuildState.
 *
 */
struct MolangProgramBuildState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGPROGRAMBUILDSTATE
public:
    struct MolangProgramBuildState& operator=(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState() = delete;
#endif

public:
    /**
     * @symbol ?allocateInstruction@MolangProgramBuildState@@QEAA_KXZ
     * @hash   -1062854341
     */
    MCAPI unsigned __int64 allocateInstruction();
    /**
     * @symbol ?emplaceInstruction@MolangProgramBuildState@@QEAAXV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
     * @hash   -1445197347
     */
    MCAPI void emplaceInstruction(class std::function<void (struct MolangEvalParams &)>);
    /**
     * @symbol ?emplaceInstruction@MolangProgramBuildState@@QEAAX_KV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
     * @hash   -311438983
     */
    MCAPI void emplaceInstruction(unsigned __int64, class std::function<void (struct MolangEvalParams &)>);
    /**
     * @symbol ?insertJumpWithMaddAtIndex@MolangProgramBuildState@@QEAAX_K0MM@Z
     * @hash   -985402895
     */
    MCAPI void insertJumpWithMaddAtIndex(unsigned __int64, unsigned __int64, float, float);
    /**
     * @symbol ?numInstructions@MolangProgramBuildState@@QEBA_KXZ
     * @hash   39554459
     */
    MCAPI unsigned __int64 numInstructions() const;
    /**
     * @symbol ?pushReturnValue@MolangProgramBuildState@@QEAAXXZ
     * @hash   1481576771
     */
    MCAPI void pushReturnValue();
    /**
     * @symbol ?setReturnValue@MolangProgramBuildState@@QEAAXM@Z
     * @hash   1330968152
     */
    MCAPI void setReturnValue(float);
    /**
     * @symbol ??1MolangProgramBuildState@@QEAA@XZ
     * @hash   -129534221
     */
    MCAPI ~MolangProgramBuildState();

};