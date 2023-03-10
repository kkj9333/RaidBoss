/**
 * @file  RealmsUnknownPackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RealmsUnknownPackSource.
 *
 */
class RealmsUnknownPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REALMSUNKNOWNPACKSOURCE
public:
    class RealmsUnknownPackSource& operator=(class RealmsUnknownPackSource const &) = delete;
    RealmsUnknownPackSource(class RealmsUnknownPackSource const &) = delete;
    RealmsUnknownPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1766564504
     */
    virtual ~RealmsUnknownPackSource();
    /**
     * @vftbl  1
     * @hash   411138817
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   412062338
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getPackOrigin@RealmsUnknownPackSource@@UEBA?AW4PackOrigin@@XZ
     * @hash   -1052024356
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl  4
     * @symbol ?getPackType@RealmsUnknownPackSource@@UEBA?AW4PackType@@XZ
     * @hash   1877985948
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl  5
     * @symbol ?load@RealmsUnknownPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   -1865417447
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REALMSUNKNOWNPACKSOURCE
    /**
     * @symbol ?forEachPack@RealmsUnknownPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     * @hash   1790518194
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @symbol ?forEachPackConst@RealmsUnknownPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     * @hash   357607825
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @symbol ??0RealmsUnknownPackSource@@QEAA@W4PackType@@W4PackOrigin@@@Z
     * @hash   372010502
     */
    MCAPI RealmsUnknownPackSource(enum class PackType, enum class PackOrigin);

};