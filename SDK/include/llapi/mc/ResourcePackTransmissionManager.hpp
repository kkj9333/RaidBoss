/**
 * @file  ResourcePackTransmissionManager.hpp
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
 * @brief MC class ResourcePackTransmissionManager.
 *
 */
class ResourcePackTransmissionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKTRANSMISSIONMANAGER
public:
    class ResourcePackTransmissionManager& operator=(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager() = delete;
#endif

public:
    /**
     * @symbol ??0ResourcePackTransmissionManager@@QEAA@AEAVScheduler@@@Z
     * @hash   387755557
     */
    MCAPI ResourcePackTransmissionManager(class Scheduler &);
    /**
     * @symbol ?cleanupResourcePackManager@ResourcePackTransmissionManager@@QEAAXAEBVNetworkIdentifier@@@Z
     * @hash   -368822368
     */
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const &);
    /**
     * @symbol ?getResourcePackUploadManager@ResourcePackTransmissionManager@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -194799891
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol ?update@ResourcePackTransmissionManager@@QEAAXXZ
     * @hash   1670398789
     */
    MCAPI void update();
    /**
     * @symbol ??1ResourcePackTransmissionManager@@QEAA@XZ
     * @hash   1715018494
     */
    MCAPI ~ResourcePackTransmissionManager();

};