/**
 * @file  HashedString.hpp
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
 * @brief MC class HashedString.
 *
 */
class HashedString {

#define AFTER_EXTRA
// Add Member There
    uint64_t hash;
    std::string str;
    int64_t unk;

public:
    //HashedString(HashedString const& hstr)
    //    : str(hstr.getString())
    //    , unk(0)
    //    , hash(computeHash(str)) {
    //}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASHEDSTRING
public:
    HashedString() = delete;
#endif

public:
    /**
     * @symbol ??0HashedString@@QEAA@_KPEBD@Z
     * @hash   804126954
     */
    MCAPI HashedString(unsigned __int64, char const *);
    /**
     * @symbol ??0HashedString@@QEAA@PEBD@Z
     * @hash   -1216323938
     */
    MCAPI HashedString(char const *);
    /**
     * @symbol ??0HashedString@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   645837031
     */
    MCAPI HashedString(std::string const &);
    /**
     * @symbol ??0HashedString@@QEAA@AEBV0@@Z
     * @hash   1096668481
     */
    MCAPI HashedString(class HashedString const &);
    /**
     * @symbol ??0HashedString@@QEAA@$$T@Z
     * @hash   -1245625173
     */
    MCAPI HashedString(std::nullptr_t);
    /**
     * @symbol ??0HashedString@@QEAA@$$QEAV0@@Z
     * @hash   -1249658459
     */
    MCAPI HashedString(class HashedString &&);
    /**
     * @symbol ?c_str@HashedString@@QEBAPEBDXZ
     * @hash   801948441
     */
    MCAPI char const * c_str() const;
    /**
     * @symbol ?clear@HashedString@@QEAAXXZ
     * @hash   710284899
     */
    MCAPI void clear();
    /**
     * @symbol ?empty@HashedString@@QEBA_NXZ
     * @hash   -2069957282
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?getHash@HashedString@@QEBA_KXZ
     * @hash   -212033001
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?getString@HashedString@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -581658084
     */
    MCAPI std::string const & getString() const;
    /**
     * @symbol ?isEmpty@HashedString@@QEBA_NXZ
     * @hash   -615752182
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??BHashedString@@QEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1300813296
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @symbol ??9HashedString@@QEBA_NAEBV0@@Z
     * @hash   532963500
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @symbol ??MHashedString@@QEBA_NAEBV0@@Z
     * @hash   1534132272
     */
    MCAPI bool operator<(class HashedString const &) const;
    /**
     * @symbol ??4HashedString@@QEAAAEAV0@AEBV0@@Z
     * @hash   966324644
     */
    MCAPI class HashedString & operator=(class HashedString const &);
    /**
     * @symbol ??4HashedString@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1293215368
     */
    MCAPI class HashedString & operator=(class HashedString &&);
    /**
     * @symbol ??8HashedString@@QEBA_NAEBV0@@Z
     * @hash   -398176343
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @symbol ??1HashedString@@QEAA@XZ
     * @hash   1757266072
     */
    MCAPI ~HashedString();
    /**
     * @symbol ?bindType@HashedString@@SAXXZ
     * @hash   -792832573
     */
    MCAPI static void bindType();
    /**
     * @symbol ?computeHash@HashedString@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1233155762
     */
    MCAPI static unsigned __int64 computeHash(std::string const &);
    /**
     * @symbol ?computeHash@HashedString@@SA_KPEBD@Z
     * @hash   728302305
     */
    MCAPI static unsigned __int64 computeHash(char const *);
    /**
     * @symbol ?defaultErrorValue@HashedString@@2V1@A
     * @hash   114310710
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @symbol ?getEmptyString@HashedString@@SAAEBV1@XZ
     * @hash   -1334499301
     */
    MCAPI static class HashedString const & getEmptyString();

};