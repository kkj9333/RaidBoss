/**
 * @file  HudContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HudContainerModel.
 *
 */
class HudContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMODEL
public:
    class HudContainerModel& operator=(class HudContainerModel const &) = delete;
    HudContainerModel(class HudContainerModel const &) = delete;
    HudContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@HudContainerModel@@UEAAXH@Z
     * @hash   12112267
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @hash   -601893811
     */
    virtual ~HudContainerModel();
    /**
     * @vftbl  6
     * @hash   -1311974010
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?getContainerWeakRef@HudContainerModel@@UEBA?AVContainerWeakRef@@XZ
     * @hash   -335634298
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol ?isValid@HudContainerModel@@UEAA_NXZ
     * @hash   -142110628
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @hash   -230733208
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -284791380
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol ?_getContainer@HudContainerModel@@EEBAPEAVContainer@@XZ
     * @hash   -363385136
     */
    virtual class Container * _getContainer() const;
    /**
     * @symbol ??0HudContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
     * @hash   -535941999
     */
    MCAPI HudContainerModel(enum class ContainerEnumName, class Player &);

//private:
    /**
     * @symbol ?_refreshContainer@HudContainerModel@@AEAAXXZ
     * @hash   1723305986
     */
    MCAPI void _refreshContainer();

private:

};