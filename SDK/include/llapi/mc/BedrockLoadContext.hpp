/**
 * @file  BedrockLoadContext.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BedrockLoadContext.
 *
 */
class BedrockLoadContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOADCONTEXT
public:
    class BedrockLoadContext& operator=(class BedrockLoadContext const &) = delete;
    BedrockLoadContext(class BedrockLoadContext const &) = delete;
    BedrockLoadContext() = delete;
#endif

public:
    /**
     * @symbol ??0BedrockLoadContext@@QEAA@AEBVSemVersion@@@Z
     * @hash   -1872402422
     */
    MCAPI BedrockLoadContext(class SemVersion const &);
    /**
     * @symbol ??1BedrockLoadContext@@QEAA@XZ
     * @hash   -1178971955
     */
    MCAPI ~BedrockLoadContext();

};