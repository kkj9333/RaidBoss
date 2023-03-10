/**
 * @file  PageContent.hpp
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
 * @brief MC structure PageContent.
 *
 */
struct PageContent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAGECONTENT
public:
    PageContent(struct PageContent const &) = delete;
    PageContent() = delete;
#endif

public:
    /**
     * @symbol ?createTag@PageContent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   178696414
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    /**
     * @symbol ??4PageContent@@QEAAAEAU0@AEBU0@@Z
     * @hash   -199440642
     */
    MCAPI struct PageContent & operator=(struct PageContent const &);
    /**
     * @symbol ??1PageContent@@QEAA@XZ
     * @hash   200528982
     */
    MCAPI ~PageContent();
    /**
     * @symbol ?BLANK_PAGE@PageContent@@2U1@B
     * @hash   434967532
     */
    MCAPI static struct PageContent const BLANK_PAGE;
    /**
     * @symbol ?read@PageContent@@SA?AU1@AEBVCompoundTag@@@Z
     * @hash   -1634708474
     */
    MCAPI static struct PageContent read(class CompoundTag const &);
    /**
     * @symbol ?write@PageContent@@SAXAEBU1@AEAVCompoundTag@@@Z
     * @hash   -1409147452
     */
    MCAPI static void write(struct PageContent const &, class CompoundTag &);

};