/**
 * @file  TagMemoryChunk.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <memory>

#undef BEFORE_EXTRA

/**
 * @brief MC structure TagMemoryChunk.
 *
 */
struct TagMemoryChunk {

#define AFTER_EXTRA
// Add Member There
public:
    size_t capacity = 0;
    size_t size = 0;
    std::unique_ptr<char[]> data;

#define DISABLE_CONSTRUCTOR_PREVENTION_TAGMEMORYCHUNK
    TagMemoryChunk() = delete;

    LIAPI TagMemoryChunk(char data[], size_t size);
    LIAPI TagMemoryChunk(const TagMemoryChunk& a1);
    LIAPI TagMemoryChunk(TagMemoryChunk&& a1);

    LIAPI void operator=(const TagMemoryChunk& a1);
    LIAPI void operator=(TagMemoryChunk&& a1);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGMEMORYCHUNK
public:
    struct TagMemoryChunk& operator=(struct TagMemoryChunk const &) = delete;
    TagMemoryChunk(struct TagMemoryChunk const &) = delete;
    TagMemoryChunk() = delete;
#endif

public:
    /**
     * @symbol ?copy@TagMemoryChunk@@QEBA?AU1@XZ
     * @hash   2129394253
     */
    MCAPI struct TagMemoryChunk copy() const;
    /**
     * @symbol ??9TagMemoryChunk@@QEBA_NAEBU0@@Z
     * @hash   211384406
     */
    MCAPI bool operator!=(struct TagMemoryChunk const &) const;
    /**
     * @symbol ??1TagMemoryChunk@@QEAA@XZ
     * @hash   -1133710820
     */
    MCAPI ~TagMemoryChunk();

};