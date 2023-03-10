/**
 * @file  ResourcePackFileUploadManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"
#include "FileUploadManager.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackFileUploadManager.
 *
 */
class ResourcePackFileUploadManager : public FileUploadManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEUPLOADMANAGER
public:
    class ResourcePackFileUploadManager& operator=(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -12980713
     */
    virtual ~ResourcePackFileUploadManager();
    /**
     * @vftbl  2
     * @symbol ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
     * @hash   -1710158280
     */
    virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &);
    /**
     * @symbol ??0ResourcePackFileUploadManager@@QEAA@AEAVTaskGroup@@V?$shared_ptr@VIFileChunkUploader@@@std@@@Z
     * @hash   -133802426
     */
    MCAPI ResourcePackFileUploadManager(class TaskGroup &, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @symbol ?uploadResourcePack@ResourcePackFileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@_N2W4PackType@@@Z
     * @hash   -805256801
     */
    MCAPI void uploadResourcePack(std::string const &, class ResourceLocation const &, bool, bool, enum class PackType);

//private:
    /**
     * @symbol ?_uploadPackToRealmStorage@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
     * @hash   171895417
     */
    MCAPI void _uploadPackToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &);
    /**
     * @symbol ?_uploadResourcePackFolder@ResourcePackFileUploadManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceLocation@@AEBVPath@Core@@AEBVValue@Json@@@Z
     * @hash   1247782797
     */
    MCAPI void _uploadResourcePackFolder(std::string const &, class ResourceLocation const &, class Core::Path const &, class Json::Value const &);

private:

};