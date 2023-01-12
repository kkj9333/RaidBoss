/**
 * @file  StructureAnimationAction.hpp
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
 * @brief MC class StructureAnimationAction.
 *
 */
class StructureAnimationAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONACTION
public:
    class StructureAnimationAction& operator=(class StructureAnimationAction const &) = delete;
    StructureAnimationAction(class StructureAnimationAction const &) = delete;
    StructureAnimationAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   60726961
     */
    virtual ~StructureAnimationAction();
    /**
     * @vftbl  1
     * @symbol ?execute@StructureAnimationAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     * @hash   -1353174704
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @vftbl  2
     * @symbol ?serialize@StructureAnimationAction@@UEAAXAEAVCompoundTag@@@Z
     * @hash   919284813
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @vftbl  3
     * @symbol ??8StructureAnimationAction@@UEBA_NAEAVIRequestAction@@@Z
     * @hash   -217074796
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol ??0StructureAnimationAction@@QEAA@V?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1239789139
     */
    MCAPI StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ??0StructureAnimationAction@@QEAA@AEBVStructureSettings@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2037582667
     */
    MCAPI StructureAnimationAction(class StructureSettings const &, class AutomaticID<class Dimension, int>, class BlockPos const &, std::string const &);
    /**
     * @symbol ?isValidTag@StructureAnimationAction@@SA_NAEBVCompoundTag@@@Z
     * @hash   826047761
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @symbol ?load@StructureAnimationAction@@SA?AV?$unique_ptr@VStructureAnimationAction@@U?$default_delete@VStructureAnimationAction@@@std@@@std@@AEBVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1191151416
     */
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const &, std::string const &);

};