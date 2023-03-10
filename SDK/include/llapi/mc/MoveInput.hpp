/**
 * @file  MoveInput.hpp
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
 * @brief MC class MoveInput.
 *
 */
class MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUT
public:
    class MoveInput& operator=(class MoveInput const &) = delete;
    MoveInput(class MoveInput const &) = delete;
    MoveInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1201871929
     */
    virtual ~MoveInput();
    /**
     * @vftbl  1
     * @symbol ?tick@MoveInput@@UEAAXAEAUIPlayerMovementProxy@@@Z
     * @hash   1041141361
     */
    virtual void tick(struct IPlayerMovementProxy &);
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
     * @symbol ?clearInputState@MoveInput@@UEAAXXZ
     * @hash   -349848414
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @hash   -1312897531
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?allowPicking@MoveInput@@UEAA_NMM@Z
     * @hash   -1753385496
     */
    virtual bool allowPicking(float, float);
    /**
     * @vftbl  7
     * @symbol ?setJumping@MoveInput@@UEAAX_N@Z
     * @hash   1957152444
     */
    virtual void setJumping(bool);
    /**
     * @vftbl  8
     * @symbol ?setAutoJumpingInWater@MoveInput@@UEAAX_N@Z
     * @hash   -1344030673
     */
    virtual void setAutoJumpingInWater(bool);
    /**
     * @vftbl  9
     * @symbol ?isChangeHeight@MoveInput@@UEBA_NXZ
     * @hash   -112899456
     */
    virtual bool isChangeHeight() const;
    /**
     * @vftbl  10
     * @symbol ?setSneakDown@MoveInput@@UEAAX_N@Z
     * @hash   797794922
     */
    virtual void setSneakDown(bool);
    /**
     * @vftbl  11
     * @symbol ?isPlayerMoving@MoveInput@@UEBA_NXZ
     * @hash   1037215512
     */
    virtual bool isPlayerMoving() const;
    /**
     * @vftbl  12
     * @symbol ?extractInputComponent@MoveInput@@UEBA?AUMoveInputComponent@@XZ
     * @hash   -180172301
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @vftbl  13
     * @symbol ?applyInputComponent@MoveInput@@UEAAXAEBUMoveInputComponent@@@Z
     * @hash   -239315205
     */
    virtual void applyInputComponent(struct MoveInputComponent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUT
    /**
     * @symbol ?clearMovementState@MoveInput@@UEAAXXZ
     * @hash   969794307
     */
    MCVAPI void clearMovementState();
    /**
     * @symbol ?render@MoveInput@@UEAAXM@Z
     * @hash   -1308973986
     */
    MCVAPI void render(float);
    /**
     * @symbol ?setKey@MoveInput@@UEAAXH_N@Z
     * @hash   79516280
     */
    MCVAPI void setKey(int, bool);
#endif

};