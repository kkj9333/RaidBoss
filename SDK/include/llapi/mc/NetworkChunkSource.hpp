/**
 * @file  NetworkChunkSource.hpp
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
 * @brief MC class NetworkChunkSource.
 *
 */
class NetworkChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKSOURCE
public:
    class NetworkChunkSource& operator=(class NetworkChunkSource const &) = delete;
    NetworkChunkSource(class NetworkChunkSource const &) = delete;
    NetworkChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   419301540
     */
    virtual ~NetworkChunkSource();
    /**
     * @vftbl  3
     * @symbol ?getExistingChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     * @hash   1094419360
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @vftbl  7
     * @symbol ?createNewChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
     * @hash   1631057902
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl  8
     * @symbol ?getOrLoadChunk@NetworkChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
     * @hash   1916360345
     */
    virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl  18
     * @symbol ?acquireDiscarded@NetworkChunkSource@@UEAAXV?$unique_ptr@VLevelChunk@@ULevelChunkFinalDeleter@@@std@@@Z
     * @hash   -381307856
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @vftbl  23
     * @symbol ?getChunkMap@NetworkChunkSource@@UEAAPEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
     * @hash   1767682206
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /**
     * @vftbl  24
     * @symbol ?getStorage@NetworkChunkSource@@UEBAAEBV?$unordered_map@VChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$weak_ptr@VLevelChunk@@@std@@@std@@@3@@std@@XZ
     * @hash   1574943905
     */
    virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /**
     * @vftbl  26
     * @symbol ?canCreateViews@NetworkChunkSource@@UEBA_NXZ
     * @hash   -1685917104
     */
    virtual bool canCreateViews() const;
    /**
     * @symbol ??0NetworkChunkSource@@QEAA@AEAVDimension@@@Z
     * @hash   2010960631
     */
    MCAPI NetworkChunkSource(class Dimension &);

};