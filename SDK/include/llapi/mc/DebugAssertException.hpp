/**
 * @file  DebugAssertException.hpp
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
 * @brief MC class DebugAssertException.
 *
 */
class DebugAssertException {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGASSERTEXCEPTION
public:
    class DebugAssertException& operator=(class DebugAssertException const &) = delete;
    DebugAssertException() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1341439456
     */
    virtual ~DebugAssertException();
    /**
     * @vftbl  1
     * @symbol ?what@DebugAssertException@@UEBAPEBDXZ
     * @hash   772397353
     */
    virtual char const * what() const;
    /**
     * @symbol ??0DebugAssertException@@QEAA@PEBD00H00@Z
     * @hash   1151961325
     */
    MCAPI DebugAssertException(char const *, char const *, char const *, int, char const *, char const *);
    /**
     * @symbol ??0DebugAssertException@@QEAA@AEBV0@@Z
     * @hash   2048632673
     */
    MCAPI DebugAssertException(class DebugAssertException const &);
    /**
     * @symbol ?isEnabled@DebugAssertException@@SA_NXZ
     * @hash   -117583300
     */
    MCAPI static bool isEnabled();

//private:

private:
    /**
     * @symbol ?WHAT@DebugAssertException@@0QEBDEB
     * @hash   -1103673668
     */
    MCAPI static char const *const WHAT;

};