/**
 * @file  PortalForcer.hpp
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
 * @brief MC class PortalForcer.
 *
 */
class PortalForcer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALFORCER
public:
    class PortalForcer& operator=(class PortalForcer const &) = delete;
    PortalForcer(class PortalForcer const &) = delete;
    PortalForcer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1538731203
     */
    virtual ~PortalForcer();
    /**
     * @vftbl  1
     * @symbol ?deserialize@PortalForcer@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1682482855
     */
    virtual void deserialize(class CompoundTag const &);
    /**
     * @vftbl  2
     * @symbol ?serialize@PortalForcer@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1081407192
     */
    virtual void serialize(class CompoundTag &) const;
    /**
     * @symbol ??0PortalForcer@@QEAA@AEAVLevel@@@Z
     * @hash   -968989710
     */
    MCAPI PortalForcer(class Level &);
    /**
     * @symbol ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@AEBVPortalShape@@@Z
     * @hash   -56027652
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const &);
    /**
     * @symbol ?addPortalRecord@PortalForcer@@QEAAAEBVPortalRecord@@V?$AutomaticID@VDimension@@H@@V2@@Z
     * @hash   -185449129
     */
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord);
    /**
     * @symbol ?createPortal@PortalForcer@@QEAAAEBVPortalRecord@@AEBVActor@@H@Z
     * @hash   2144450578
     */
    MCAPI class PortalRecord const & createPortal(class Actor const &, int);
    /**
     * @symbol ?findPortal@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV3@@Z
     * @hash   -304482576
     */
    MCAPI bool findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;
    /**
     * @symbol ?force@PortalForcer@@QEAAXAEAVActor@@AEBUDimensionTransitionComponent@@@Z
     * @hash   -178725587
     */
    MCAPI void force(class Actor &, struct DimensionTransitionComponent const &);
    /**
     * @symbol ?portalRecordExists@PortalForcer@@QEBA_NV?$AutomaticID@VDimension@@H@@AEBVPortalRecord@@@Z
     * @hash   1663614046
     */
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const &) const;
    /**
     * @symbol ?removeMisalignedPortalRecords@PortalForcer@@QEAAXAEAVBlockSource@@AEBVPortalShape@@AEBVPortalRecord@@@Z
     * @hash   862678748
     */
    MCAPI void removeMisalignedPortalRecords(class BlockSource &, class PortalShape const &, class PortalRecord const &);
    /**
     * @symbol ?removePortalRecord@PortalForcer@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   203673167
     */
    MCAPI void removePortalRecord(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?PORTAL_FILE_ID@PortalForcer@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -962940285
     */
    MCAPI static std::string const PORTAL_FILE_ID;

//private:
    /**
     * @symbol ?_findPortal@PortalForcer@@AEBA?AV?$optional@VPortalRecord@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@HAEAV5@@Z
     * @hash   -110502731
     */
    MCAPI class std::optional<class PortalRecord> _findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;

private:

};