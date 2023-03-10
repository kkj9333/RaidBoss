/**
 * @file  NetworkChunkPublisher.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkChunkPublisher.
 *
 */
class NetworkChunkPublisher {

#define AFTER_EXTRA
// Add Member There
public:
    ChunkViewSource* getChunkViewSource() {
        // in function NetworkChunkPublisher::clearRegion
        // - Call ChunkViewSource::clear(ChunkViewSource* this);

        return *((ChunkViewSource**)((__int64)this + 0xE0));
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHER
public:
    class NetworkChunkPublisher& operator=(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher(class NetworkChunkPublisher const &) = delete;
    NetworkChunkPublisher() = delete;
#endif

public:
    /**
     * @symbol ??0NetworkChunkPublisher@@QEAA@AEAVLevel@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
     * @hash   1635141280
     */
    MCAPI NetworkChunkPublisher(class Level &, class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol ?addSavedChunk@NetworkChunkPublisher@@QEAAXAEBVChunkPos@@@Z
     * @hash   2032375350
     */
    MCAPI void addSavedChunk(class ChunkPos const &);
    /**
     * @symbol ?clearRegion@NetworkChunkPublisher@@QEAAXXZ
     * @hash   1578799175
     */
    MCAPI void clearRegion();
    /**
     * @symbol ?destroyRegion@NetworkChunkPublisher@@QEAAXXZ
     * @hash   379835857
     */
    MCAPI void destroyRegion();
    /**
     * @symbol ?getChunksSentSinceStart@NetworkChunkPublisher@@QEBAHXZ
     * @hash   -1188065088
     */
    MCAPI int getChunksSentSinceStart() const;
    /**
     * @symbol ?is2DPositionRelevant@NetworkChunkPublisher@@QEBA_NAEBVBlockPos@@@Z
     * @hash   -1594154177
     */
    MCAPI bool is2DPositionRelevant(class BlockPos const &) const;
    /**
     * @symbol ?moveRegion@NetworkChunkPublisher@@QEAAXAEBVBlockPos@@IAEBVVec3@@W4ChunkSourceViewGenerateMode@ChunkSource@@M@Z
     * @hash   -1262095106
     */
    MCAPI void moveRegion(class BlockPos const &, unsigned int, class Vec3 const &, enum class ChunkSource::ChunkSourceViewGenerateMode, float);
    /**
     * @symbol ?prepareRegion@NetworkChunkPublisher@@QEAAXAEAVChunkSource@@AEBVChunkPos@@@Z
     * @hash   -898726439
     */
    MCAPI void prepareRegion(class ChunkSource &, class ChunkPos const &);
    /**
     * @symbol ?sendQueuedChunks@NetworkChunkPublisher@@QEAAXXZ
     * @hash   -2087943131
     */
    MCAPI void sendQueuedChunks();
    /**
     * @symbol ?setServerSettings@NetworkChunkPublisher@@QEAAXAEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@@Z
     * @hash   156306233
     */
    MCAPI void setServerSettings(class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &);

//private:
    /**
     * @symbol ?_sendQueuedChunk@NetworkChunkPublisher@@AEAA_NAEBVChunkPos@@PEAVTransferBuilder@Server@ClientBlobCache@@@Z
     * @hash   -233239825
     */
    MCAPI bool _sendQueuedChunk(class ChunkPos const &, class ClientBlobCache::Server::TransferBuilder *);
    /**
     * @symbol ?_serializeAndCache@NetworkChunkPublisher@@AEAAXAEAVLevelChunkPacket@@AEAVTransferBuilder@Server@ClientBlobCache@@$$QEAV?$function@$$A6AXAEAVVarIntDataOutput@@@Z@std@@@Z
     * @hash   986532060
     */
    MCAPI void _serializeAndCache(class LevelChunkPacket &, class ClientBlobCache::Server::TransferBuilder &, class std::function<void (class VarIntDataOutput &)> &&);

private:

};