/**
 * @file  IWebviewTelemetry.hpp
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
 * @brief MC class IWebviewTelemetry.
 *
 */
class IWebviewTelemetry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    class IWebviewTelemetry& operator=(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   78255511
     */
    virtual ~IWebviewTelemetry();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?onDownloadBegin@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -1792787123
     */
    virtual void onDownloadBegin(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  7
     * @hash   -1311050489
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?onDownloadComplete@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -1478958017
     */
    virtual void onDownloadComplete(struct WebviewDownloadInfo const &);
    /**
     * @vftbl  9
     * @symbol ?onDownloadCanceled@IWebviewTelemetry@@UEAAXAEBUWebviewDownloadInfo@@@Z
     * @hash   -441648049
     */
    virtual void onDownloadCanceled(struct WebviewDownloadInfo const &);
    /**
     * @symbol ??0IWebviewTelemetry@@QEAA@AEBVIMinecraftEventing@@@Z
     * @hash   2139821506
     */
    MCAPI IWebviewTelemetry(class IMinecraftEventing const &);

};