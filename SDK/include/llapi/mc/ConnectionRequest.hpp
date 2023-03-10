/**
 * @file  ConnectionRequest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#include "UnverifiedCertificate.hpp"
#include "WebToken.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ConnectionRequest.
 *
 */
class ConnectionRequest {

#define AFTER_EXTRA
// Add Member There

public:
    std::unique_ptr<UnverifiedCertificate> mCertificateData;
    std::unique_ptr<Certificate> mCertificate;
    std::unique_ptr<WebToken> mRawToken;
    unsigned __int8 mClientSubId;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONNECTIONREQUEST
public:
    class ConnectionRequest& operator=(class ConnectionRequest const &) = delete;
    ConnectionRequest() = delete;
#endif

public:
    /**
     * @symbol ??0ConnectionRequest@@QEAA@AEBV0@@Z
     * @hash   -1538656495
     */
    MCAPI ConnectionRequest(class ConnectionRequest const &);
    /**
     * @symbol ?getAnimatedImageData@ConnectionRequest@@QEBA?AV?$vector@VAnimatedImageData@@V?$allocator@VAnimatedImageData@@@std@@@std@@XZ
     * @hash   -1421973006
     */
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;
    /**
     * @symbol ?getArmSize@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1073074764
     */
    MCAPI std::string getArmSize() const;
    /**
     * @symbol ?getCapeData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     * @hash   -2022314806
     */
    MCAPI std::vector<unsigned char> getCapeData() const;
    /**
     * @symbol ?getCapeId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1886960426
     */
    MCAPI std::string getCapeId() const;
    /**
     * @symbol ?getCapeImageHeight@ConnectionRequest@@QEBAGXZ
     * @hash   -1883145689
     */
    MCAPI unsigned short getCapeImageHeight() const;
    /**
     * @symbol ?getCapeImageWidth@ConnectionRequest@@QEBAGXZ
     * @hash   503271247
     */
    MCAPI unsigned short getCapeImageWidth() const;
    /**
     * @symbol ?getCertificate@ConnectionRequest@@QEBAPEBVCertificate@@XZ
     * @hash   -822290751
     */
    MCAPI class Certificate const * getCertificate() const;
    /**
     * @symbol ?getClientPlatformId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -921690230
     */
    MCAPI std::string getClientPlatformId() const;
    /**
     * @symbol ?getClientPlatformOfflineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -13872692
     */
    MCAPI std::string getClientPlatformOfflineId() const;
    /**
     * @symbol ?getClientPlatformOnlineId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1808159226
     */
    MCAPI std::string getClientPlatformOnlineId() const;
    /**
     * @symbol ?getClientRandomId@ConnectionRequest@@QEBA_KXZ
     * @hash   -467518633
     */
    MCAPI unsigned __int64 getClientRandomId() const;
    /**
     * @symbol ?getClientSubId@ConnectionRequest@@QEBA?AW4SubClientId@@XZ
     * @hash   1970596160
     */
    MCAPI enum class SubClientId getClientSubId() const;
    /**
     * @symbol ?getClientThirdPartyName@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1013278166
     */
    MCAPI std::string getClientThirdPartyName() const;
    /**
     * @symbol ?getDeviceId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1019742550
     */
    MCAPI std::string getDeviceId() const;
    /**
     * @symbol ?getDeviceOS@ConnectionRequest@@QEBA?AW4BuildPlatform@@XZ
     * @hash   514778760
     */
    MCAPI enum class BuildPlatform getDeviceOS() const;
    /**
     * @symbol ?getPersonaPieces@ConnectionRequest@@QEBA?AV?$vector@VSerializedPersonaPieceHandle@@V?$allocator@VSerializedPersonaPieceHandle@@@std@@@std@@XZ
     * @hash   -1523946596
     */
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;
    /**
     * @symbol ?getPieceTintColors@ConnectionRequest@@QEBA?AV?$unordered_map@W4PieceType@persona@@VTintMapColor@@U?$hash@W4PieceType@persona@@@std@@U?$equal_to@W4PieceType@persona@@@5@V?$allocator@U?$pair@$$CBW4PieceType@persona@@VTintMapColor@@@std@@@5@@std@@XZ
     * @hash   -1997717927
     */
    MCAPI class std::unordered_map<enum class persona::PieceType, class TintMapColor, struct std::hash<enum class persona::PieceType>, struct std::equal_to<enum class persona::PieceType>, class std::allocator<struct std::pair<enum class persona::PieceType const, class TintMapColor>>> getPieceTintColors() const;
    /**
     * @symbol ?getPlayFabId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -976820100
     */
    MCAPI std::string getPlayFabId() const;
    /**
     * @symbol ?getSelfSignedId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   700053354
     */
    MCAPI std::string getSelfSignedId() const;
    /**
     * @symbol ?getSkinAnimationData@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1470139652
     */
    MCAPI std::string getSkinAnimationData() const;
    /**
     * @symbol ?getSkinColor@ConnectionRequest@@QEBA?AVColor@mce@@XZ
     * @hash   -798685206
     */
    MCAPI class mce::Color getSkinColor() const;
    /**
     * @symbol ?getSkinData@ConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     * @hash   913046334
     */
    MCAPI std::vector<unsigned char> getSkinData() const;
    /**
     * @symbol ?getSkinGeometry@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   888416618
     */
    MCAPI std::string getSkinGeometry() const;
    /**
     * @symbol ?getSkinGeometryEngineVersion@ConnectionRequest@@QEBA?AVSemVersion@@XZ
     * @hash   50996790
     */
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;
    /**
     * @symbol ?getSkinId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2040103658
     */
    MCAPI std::string getSkinId() const;
    /**
     * @symbol ?getSkinImageHeight@ConnectionRequest@@QEBAGXZ
     * @hash   -1478502573
     */
    MCAPI unsigned short getSkinImageHeight() const;
    /**
     * @symbol ?getSkinImageWidth@ConnectionRequest@@QEBAGXZ
     * @hash   802704035
     */
    MCAPI unsigned short getSkinImageWidth() const;
    /**
     * @symbol ?getSkinResourcePatch@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   228271980
     */
    MCAPI std::string getSkinResourcePatch() const;
    /**
     * @symbol ?getTenantId@ConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -609221126
     */
    MCAPI std::string getTenantId() const;
    /**
     * @symbol ?isCapeOnClassicSkin@ConnectionRequest@@QEBA_NXZ
     * @hash   -1743732244
     */
    MCAPI bool isCapeOnClassicSkin() const;
    /**
     * @symbol ?isClientThirdPartyNameOnly@ConnectionRequest@@QEBA_NXZ
     * @hash   -672206674
     */
    MCAPI bool isClientThirdPartyNameOnly() const;
    /**
     * @symbol ?isEditorMode@ConnectionRequest@@QEBA_NXZ
     * @hash   -113611154
     */
    MCAPI bool isEditorMode() const;
    /**
     * @symbol ?isEduMode@ConnectionRequest@@QEBA_NXZ
     * @hash   1522952028
     */
    MCAPI bool isEduMode() const;
    /**
     * @symbol ?isPersonaSkin@ConnectionRequest@@QEBA_NXZ
     * @hash   212369100
     */
    MCAPI bool isPersonaSkin() const;
    /**
     * @symbol ?isPremiumSkin@ConnectionRequest@@QEBA_NXZ
     * @hash   533997100
     */
    MCAPI bool isPremiumSkin() const;
    /**
     * @symbol ?isTrustedSkin@ConnectionRequest@@QEBA_NXZ
     * @hash   -619537620
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol ?toString@ConnectionRequest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -913521188
     */
    MCAPI std::string toString();
    /**
     * @symbol ?verify@ConnectionRequest@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_J@Z
     * @hash   -189773684
     */
    MCAPI bool verify(std::vector<std::string> const &, __int64);
    /**
     * @symbol ?verifySelfSigned@ConnectionRequest@@QEAA_NXZ
     * @hash   438806366
     */
    MCAPI bool verifySelfSigned();
    /**
     * @symbol ??1ConnectionRequest@@QEAA@XZ
     * @hash   140353997
     */
    MCAPI ~ConnectionRequest();
    /**
     * @symbol ?fromString@ConnectionRequest@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   213806689
     */
    MCAPI static class ConnectionRequest fromString(std::string const &);

//private:
    /**
     * @symbol ??0ConnectionRequest@@AEAA@V?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
     * @hash   -293942093
     */
    MCAPI ConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);
    /**
     * @symbol ?validate@ConnectionRequest@@AEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@V23@_J@Z
     * @hash   -4070809
     */
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, __int64) const;

private:

};