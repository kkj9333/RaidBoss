/**
 * @file  CommandArea.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandArea.
 *
 */
class CommandArea {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDAREA
public:
    class CommandArea& operator=(class CommandArea const &) = delete;
    CommandArea(class CommandArea const &) = delete;
    CommandArea() = delete;
#endif

public:
    /**
     * @symbol ??0CommandArea@@QEAA@V?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@@Z
     * @hash   -1612885493
     */
    MCAPI CommandArea(std::unique_ptr<class ChunkViewSource>);
    /**
     * @symbol ??1CommandArea@@QEAA@XZ
     * @hash   1971547684
     */
    MCAPI ~CommandArea();

};