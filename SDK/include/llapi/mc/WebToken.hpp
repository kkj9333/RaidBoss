/**
 * @file  WebToken.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WebToken.
 *
 */
class WebToken {

#define AFTER_EXTRA
// Add Member There

public:
    std::string mHeader;
    Json::Value mHeaderInfo;
    std::string mData;
    Json::Value mDataInfo;
    std::string mSignature;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBTOKEN
public:
    class WebToken& operator=(class WebToken const &) = delete;
    WebToken(class WebToken const &) = delete;
    WebToken() = delete;
#endif

public:
    /**
     * @symbol ??0WebToken@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -448177750
     */
    MCAPI WebToken(std::string);
    /**
     * @symbol ?toString@WebToken@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1310200554
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?verifyWithIncludedKey@WebToken@@QEBA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1847590998
     */
    MCAPI bool verifyWithIncludedKey(std::vector<std::string> const &) const;
    /**
     * @symbol ??1WebToken@@QEAA@XZ
     * @hash   1739324335
     */
    MCAPI ~WebToken();
    /**
     * @symbol ?createFromData@WebToken@@SA?AV?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBVValue@Json@@AEBVPrivateKeyManager@@@Z
     * @hash   631270956
     */
    MCAPI static std::unique_ptr<class WebToken> createFromData(class Json::Value const &, class PrivateKeyManager const &);

//private:
    /**
     * @symbol ?_parse@WebToken@@AEAAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   694023988
     */
    MCAPI void _parse(class Json::Value &, std::string const &);
    /**
     * @symbol ?_signatureToDER@WebToken@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2060882063
     */
    MCAPI std::string _signatureToDER() const;
    /**
     * @symbol ?_DERToBinary@WebToken@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@H@Z
     * @hash   279305960
     */
    MCAPI static std::string _DERToBinary(std::string const &, int);

private:

};