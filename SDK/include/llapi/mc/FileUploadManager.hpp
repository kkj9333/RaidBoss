/**
 * @file  FileUploadManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileUploadManager.
 *
 */
class FileUploadManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEUPLOADMANAGER
public:
    class FileUploadManager& operator=(class FileUploadManager const &) = delete;
    FileUploadManager(class FileUploadManager const &) = delete;
    FileUploadManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1419574754
     */
    virtual ~FileUploadManager();
    /**
     * @vftbl  1
     * @symbol ?getUploadProgress@FileUploadManager@@UEBAMXZ
     * @hash   459502770
     */
    virtual float getUploadProgress() const;
    /**
     * @vftbl  2
     * @symbol ?uploadFileToRealmStorage@ResourcePackFileUploadManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@H0@Z
     * @hash   2017177756
     */
    virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, int, std::string const &) = 0;
    /**
     * @symbol ??0FileUploadManager@@QEAA@AEAVTaskGroup@@V?$shared_ptr@VIFileChunkUploader@@@std@@@Z
     * @hash   1568598285
     */
    MCAPI FileUploadManager(class TaskGroup &, class std::shared_ptr<class IFileChunkUploader>);
    /**
     * @symbol ?addCallbackQueue@FileUploadManager@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   92815798
     */
    MCAPI void addCallbackQueue(class std::function<void (void)>);
    /**
     * @symbol ?setFailed@FileUploadManager@@QEAAXW4UploadError@@@Z
     * @hash   -1161828358
     */
    MCAPI void setFailed(enum class UploadError);
    /**
     * @symbol ?setUseStream@FileUploadManager@@QEAAX_N@Z
     * @hash   -2009170980
     */
    MCAPI void setUseStream(bool);
    /**
     * @symbol ?update@FileUploadManager@@QEAAXXZ
     * @hash   143648389
     */
    MCAPI void update();
    /**
     * @symbol ?uploadChunk@FileUploadManager@@QEAAXH@Z
     * @hash   401656958
     */
    MCAPI void uploadChunk(int);
    /**
     * @symbol ?uploadFile@FileUploadManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@_NAEBVValue@Json@@@Z
     * @hash   846481273
     */
    MCAPI void uploadFile(std::string const &, class Core::Path const &, bool, class Json::Value const &);

//protected:
    /**
     * @symbol ?_generateMultiPartHelper@FileUploadManager@@IEAAXXZ
     * @hash   -429578055
     */
    MCAPI void _generateMultiPartHelper();
    /**
     * @symbol ?_resumeUpload@FileUploadManager@@IEAAXXZ
     * @hash   351205392
     */
    MCAPI void _resumeUpload();
    /**
     * @symbol ?_uploadChunk@FileUploadManager@@IEAAXAEBUFileChunkInfo@@@Z
     * @hash   -1917644403
     */
    MCAPI void _uploadChunk(struct FileChunkInfo const &);
    /**
     * @symbol ?_uploadStream@FileUploadManager@@IEAAXXZ
     * @hash   -222295789
     */
    MCAPI void _uploadStream();

//private:

protected:
    /**
     * @symbol ?CHUNK_UPLOAD_SIZE@FileUploadManager@@1HB
     * @hash   48087683
     */
    MCAPI static int const CHUNK_UPLOAD_SIZE;

private:
    /**
     * @symbol ?BOUNDARY@FileUploadManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   2108270501
     */
    MCAPI static std::string const BOUNDARY;

};