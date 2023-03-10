/**
 * @file  SerializerTraits.hpp
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
 * @brief MC structure SerializerTraits.
 *
 */
struct SerializerTraits {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERTRAITS
public:
    struct SerializerTraits& operator=(struct SerializerTraits const &) = delete;
#endif

public:
    /**
     * @symbol ??0SerializerTraits@@QEAA@XZ
     * @hash   -95126589
     */
    MCAPI SerializerTraits();
    /**
     * @symbol ??0SerializerTraits@@QEAA@AEBU0@@Z
     * @hash   1198879087
     */
    MCAPI SerializerTraits(struct SerializerTraits const &);
    /**
     * @symbol ??0SerializerTraits@@QEAA@$$QEAU0@@Z
     * @hash   -563056709
     */
    MCAPI SerializerTraits(struct SerializerTraits &&);
    /**
     * @symbol ?help@SerializerTraits@@QEAAAEAU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1944968983
     */
    MCAPI struct SerializerTraits & help(std::string const &);
    /**
     * @symbol ?name@SerializerTraits@@QEAAAEAU1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   223980269
     */
    MCAPI struct SerializerTraits & name(std::string);
    /**
     * @symbol ??4SerializerTraits@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   489458178
     */
    MCAPI struct SerializerTraits & operator=(struct SerializerTraits &&);
    /**
     * @symbol ?validate@SerializerTraits@@QEAAAEAU1@V?$function@$$A6A_NAEAVmeta_any@entt@@AEAVSerializerContext@@@Z@std@@@Z
     * @hash   -1902389020
     */
    MCAPI struct SerializerTraits & validate(class std::function<bool (class entt::meta_any &, class SerializerContext &)>);
    /**
     * @symbol ??1SerializerTraits@@QEAA@XZ
     * @hash   -819400015
     */
    MCAPI ~SerializerTraits();

//private:
    /**
     * @symbol ?performValidation@SerializerTraits@@AEBA_NVmeta_any@entt@@AEAVSerializerContext@@@Z
     * @hash   -854517281
     */
    MCAPI bool performValidation(class entt::meta_any, class SerializerContext &) const;

};