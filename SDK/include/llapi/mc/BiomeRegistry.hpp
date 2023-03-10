/**
 * @file  BiomeRegistry.hpp
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
 * @brief MC class BiomeRegistry.
 *
 */
class BiomeRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct BiomeParent {
    BiomeParent() = delete;
    BiomeParent(BiomeParent const&) = delete;
    BiomeParent(BiomeParent const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEREGISTRY
public:
    class BiomeRegistry& operator=(class BiomeRegistry const &) = delete;
    BiomeRegistry(class BiomeRegistry const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEREGISTRY
    /**
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
     * @hash   -416326318
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @symbol ?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     * @hash   589367944
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
#endif
    /**
     * @symbol ??0BiomeRegistry@@QEAA@XZ
     * @hash   272400633
     */
    MCAPI BiomeRegistry();
    /**
     * @symbol ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
     * @hash   -801983513
     */
    MCAPI void forEachBiome(class std::function<void (class Biome &)>) const;
    /**
     * @symbol ?getTagRegistry@BiomeRegistry@@QEAAAEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     * @hash   1181329859
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> & getTagRegistry();
    /**
     * @symbol ?getTagRegistry@BiomeRegistry@@QEBAAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
     * @hash   -1314438595
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const & getTagRegistry() const;
    /**
     * @symbol ?initServerFromPacks@BiomeRegistry@@QEAAXAEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
     * @hash   -1531810673
     */
    MCAPI void initServerFromPacks(class ResourcePackManager &, class IWorldRegistriesProvider &);
    /**
     * @symbol ?isRegistrationFinished@BiomeRegistry@@QEBA_NXZ
     * @hash   -2079377642
     */
    MCAPI bool isRegistrationFinished() const;
    /**
     * @symbol ?lookupByHash@BiomeRegistry@@QEBAPEAVBiome@@AEBVHashedString@@@Z
     * @hash   -1746009592
     */
    MCAPI class Biome * lookupByHash(class HashedString const &) const;
    /**
     * @symbol ?lookupById@BiomeRegistry@@QEBAPEAVBiome@@H@Z
     * @hash   -1230874128
     */
    MCAPI class Biome * lookupById(int) const;
    /**
     * @symbol ?lookupByName@BiomeRegistry@@QEBAPEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1312524742
     */
    MCAPI class Biome * lookupByName(std::string const &) const;
    /**
     * @symbol ?registerBiome@BiomeRegistry@@QEAAAEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2047897103
     */
    MCAPI class Biome & registerBiome(std::string const &);
    /**
     * @symbol ?registrationFinished@BiomeRegistry@@QEAAXXZ
     * @hash   425191177
     */
    MCAPI void registrationFinished();

//private:
    /**
     * @symbol ?_addToInheritanceTree@BiomeRegistry@@AEAA_NAEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -226678001
     */
    MCAPI bool _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &, class Json::Value &&, class SemVersion const &);
    /**
     * @symbol ?_buildInheritanceTree@BiomeRegistry@@AEAA?AV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEAVResourcePackManager@@@Z
     * @hash   1223963375
     */
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent> _buildInheritanceTree(class ResourcePackManager &);
    /**
     * @symbol ?_initTagRegistry@BiomeRegistry@@AEAAXXZ
     * @hash   1165673447
     */
    MCAPI void _initTagRegistry();
    /**
     * @symbol ?_loadSingleBiome@BiomeRegistry@@AEAA_NAEAVResourcePackManager@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   364478196
     */
    MCAPI bool _loadSingleBiome(class ResourcePackManager &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, std::string const &);
    /**
     * @symbol ?_mergeDataInheritance@BiomeRegistry@@AEAAXAEAVValue@Json@@AEAVSemVersion@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBUBiomeParent@1@@Z
     * @hash   -605402743
     */
    MCAPI void _mergeDataInheritance(class Json::Value &, class SemVersion &, class InheritanceTree<struct BiomeRegistry::BiomeParent> &, struct BiomeRegistry::BiomeParent const &);

private:

};