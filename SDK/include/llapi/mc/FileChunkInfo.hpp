/**
 * @file  FileChunkInfo.hpp
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
 * @brief MC structure FileChunkInfo.
 *
 */
struct FileChunkInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKINFO
public:
    struct FileChunkInfo& operator=(struct FileChunkInfo const &) = delete;
    FileChunkInfo(struct FileChunkInfo const &) = delete;
    FileChunkInfo() = delete;
#endif

public:
    /**
     * @symbol ??0FileChunkInfo@@QEAA@H_K0@Z
     * @hash   -514826350
     */
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64);
    /**
     * @symbol ?isValid@FileChunkInfo@@QEBA_NXZ
     * @hash   1899092784
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?size@FileChunkInfo@@QEBAHXZ
     * @hash   -1900604056
     */
    MCAPI int size() const;

};