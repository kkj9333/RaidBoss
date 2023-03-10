/**
 * @file  StackResultStorageEntity.hpp
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
 * @brief MC class StackResultStorageEntity.
 *
 */
class StackResultStorageEntity {

#define AFTER_EXTRA
// Add Member There
public:

inline class EntityContext& getStackRef() {
    return _getStackRef();
}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEENTITY
public:
    class StackResultStorageEntity& operator=(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity(class StackResultStorageEntity const &) = delete;
    StackResultStorageEntity() = delete;
#endif

public:

//protected:
    /**
     * @symbol ??0StackResultStorageEntity@@IEAA@AEBVWeakStorageEntity@@@Z
     * @hash   -1030812928
     */
    MCAPI StackResultStorageEntity(class WeakStorageEntity const &);
    /**
     * @symbol ??0StackResultStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
     * @hash   1632147979
     */
    MCAPI StackResultStorageEntity(class OwnerStorageEntity const &);
    /**
     * @symbol ??0StackResultStorageEntity@@IEAA@$$QEAV0@@Z
     * @hash   -1470527976
     */
    MCAPI StackResultStorageEntity(class StackResultStorageEntity &&);
    /**
     * @symbol ?_getStackRef@StackResultStorageEntity@@IEBAAEAVEntityContext@@XZ
     * @hash   1265077185
     */
    MCAPI class EntityContext & _getStackRef() const;
    /**
     * @symbol ?_hasValue@StackResultStorageEntity@@IEBA_NXZ
     * @hash   -1370199399
     */
    MCAPI bool _hasValue() const;

protected:

};