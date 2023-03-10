/**
 * @file  CreativeItemRegistry.hpp
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
 * @brief MC class CreativeItemRegistry.
 *
 */
class CreativeItemRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMREGISTRY
public:
    class CreativeItemRegistry& operator=(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry(class CreativeItemRegistry const &) = delete;
#endif

public:
    /**
     * @symbol ??0CreativeItemRegistry@@QEAA@XZ
     * @hash   -1329997333
     */
    MCAPI CreativeItemRegistry();
    /**
     * @symbol ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@@Z
     * @hash   -1987975105
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?findCreativeItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBVItemInstance@@@Z
     * @hash   -1648282404
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class ItemInstance const &);
    /**
     * @symbol ?getCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@W4CreativeItemCategory@@@Z
     * @hash   -1222549502
     */
    MCAPI class CreativeItemGroupCategory * getCreativeCategory(enum class CreativeItemCategory);
    /**
     * @symbol ?getCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@I@Z
     * @hash   1891400428
     */
    MCAPI class CreativeGroupInfo * getCreativeGroup(unsigned int);
    /**
     * @symbol ?getCreativeItemEntries@CreativeItemRegistry@@QEAAAEBV?$vector@VCreativeItemEntry@@V?$allocator@VCreativeItemEntry@@@std@@@std@@XZ
     * @hash   -517790500
     */
    MCAPI std::vector<class CreativeItemEntry> const & getCreativeItemEntries();
    /**
     * @symbol ?getItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@I@Z
     * @hash   -1139251872
     */
    MCAPI class CreativeItemEntry * getItemEntry(unsigned int);
    /**
     * @symbol ?newCreativeCategory@CreativeItemRegistry@@QEAAPEAVCreativeItemGroupCategory@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
     * @hash   370007809
     */
    MCAPI class CreativeItemGroupCategory * newCreativeCategory(std::string const &, enum class CreativeItemCategory);
    /**
     * @symbol ?newCreativeGroup@CreativeItemRegistry@@QEAAPEAVCreativeGroupInfo@@W4CreativeItemCategory@@AEBVHashedString@@AEBVItemInstance@@@Z
     * @hash   -1045250582
     */
    MCAPI class CreativeGroupInfo * newCreativeGroup(enum class CreativeItemCategory, class HashedString const &, class ItemInstance const &);
    /**
     * @symbol ?newItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@@Z
     * @hash   1521900348
     */
    MCAPI class CreativeItemEntry * newItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &);
    /**
     * @symbol ?resetGroups@CreativeItemRegistry@@QEAAXXZ
     * @hash   -403647917
     */
    MCAPI void resetGroups();
    /**
     * @symbol ?updateItemEntry@CreativeItemRegistry@@QEAAPEAVCreativeItemEntry@@IAEBVItemInstance@@@Z
     * @hash   -1117026771
     */
    MCAPI class CreativeItemEntry * updateItemEntry(unsigned int, class ItemInstance const &);
    /**
     * @symbol ?updateNetIdMap@CreativeItemRegistry@@QEAAXXZ
     * @hash   723744245
     */
    MCAPI void updateNetIdMap();
    /**
     * @symbol ?current@CreativeItemRegistry@@SAPEAV1@XZ
     * @hash   -1963743159
     */
    MCAPI static class CreativeItemRegistry * current();
    /**
     * @symbol ?forEachCreativeItemInstance@CreativeItemRegistry@@SAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
     * @hash   351131024
     */
    MCAPI static void forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);
    /**
     * @symbol ?mCreativeListMutex@CreativeItemRegistry@@2Vmutex@std@@A
     * @hash   -1500954257
     */
    MCAPI static class std::mutex mCreativeListMutex;
    /**
     * @symbol ?reset@CreativeItemRegistry@@SAXXZ
     * @hash   131067585
     */
    MCAPI static void reset();
    /**
     * @symbol ?setCurrentRegistry@CreativeItemRegistry@@SAX$$QEAV?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@@Z
     * @hash   -410683398
     */
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry> &&);

//private:
    /**
     * @symbol ?_forEachCreativeItemInstance@CreativeItemRegistry@@AEAAXV?$function@$$A6A_NAEAVItemInstance@@@Z@std@@@Z
     * @hash   1702629446
     */
    MCAPI void _forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);

private:
    /**
     * @symbol ?mCurrentRegistry@CreativeItemRegistry@@0V?$unique_ptr@VCreativeItemRegistry@@U?$default_delete@VCreativeItemRegistry@@@std@@@std@@A
     * @hash   1771864799
     */
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

};