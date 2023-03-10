/**
 * @file  ActorDefinitionDiffList.hpp
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
 * @brief MC class ActorDefinitionDiffList.
 *
 */
class ActorDefinitionDiffList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONDIFFLIST
public:
    class ActorDefinitionDiffList& operator=(class ActorDefinitionDiffList const &) = delete;
    ActorDefinitionDiffList(class ActorDefinitionDiffList const &) = delete;
    ActorDefinitionDiffList() = delete;
#endif

public:
    /**
     * @symbol ??0ActorDefinitionDiffList@@QEAA@AEAVActorDefinitionGroup@@@Z
     * @hash   -2055800256
     */
    MCAPI ActorDefinitionDiffList(class ActorDefinitionGroup &);
    /**
     * @symbol ?addDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1581533636
     */
    MCAPI void addDefinition(std::string const &);
    /**
     * @symbol ?addPendingPropertyChange@ActorDefinitionDiffList@@QEAAX_KV?$variant@HM_N_K@std@@@Z
     * @hash   1599896658
     */
    MCAPI void addPendingPropertyChange(unsigned __int64, class std::variant<int, float, bool, unsigned __int64>);
    /**
     * @symbol ?buildAdditiveDescriptionFrom@ActorDefinitionDiffList@@QEBA?AVActorDefinitionDescriptor@@_K0@Z
     * @hash   -1103084070
     */
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64) const;
    /**
     * @symbol ?clearChangedDescription@ActorDefinitionDiffList@@QEAAXXZ
     * @hash   1826197423
     */
    MCAPI void clearChangedDescription();
    /**
     * @symbol ?clearDefinitions@ActorDefinitionDiffList@@QEAAXXZ
     * @hash   2034764201
     */
    MCAPI void clearDefinitions();
    /**
     * @symbol ?definitionListToString@ActorDefinitionDiffList@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1908314127
     */
    MCAPI std::string definitionListToString(std::string const &) const;
    /**
     * @symbol ?getAddedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
     * @hash   -1793118584
     */
    MCAPI class DefinitionInstanceGroup const & getAddedDefinitionGroup() const;
    /**
     * @symbol ?getAddedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
     * @hash   1290559920
     */
    MCAPI class DefinitionInstanceGroup & getAddedDefinitionGroupMutable();
    /**
     * @symbol ?getChangedDescription@ActorDefinitionDiffList@@QEAAAEAVActorDefinitionDescriptor@@XZ
     * @hash   1245283558
     */
    MCAPI class ActorDefinitionDescriptor & getChangedDescription();
    /**
     * @symbol ?getDefinitionStack@ActorDefinitionDiffList@@QEBAAEBV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@XZ
     * @hash   -723891486
     */
    MCAPI std::vector<struct DiffListPair> const & getDefinitionStack() const;
    /**
     * @symbol ?getDescription@ActorDefinitionDiffList@@QEAA?AV?$unique_ptr@VActorDefinitionDescriptor@@U?$default_delete@VActorDefinitionDescriptor@@@std@@@std@@_N@Z
     * @hash   432216187
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    /**
     * @symbol ?getRemovedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
     * @hash   253558072
     */
    MCAPI class DefinitionInstanceGroup const & getRemovedDefinitionGroup() const;
    /**
     * @symbol ?getRemovedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
     * @hash   -179655584
     */
    MCAPI class DefinitionInstanceGroup & getRemovedDefinitionGroupMutable();
    /**
     * @symbol ?hasChanged@ActorDefinitionDiffList@@QEBA_NXZ
     * @hash   -1831960694
     */
    MCAPI bool hasChanged() const;
    /**
     * @symbol ?hasDefinition@ActorDefinitionDiffList@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1724760377
     */
    MCAPI bool hasDefinition(std::string const &) const;
    /**
     * @symbol ?lockChanges@ActorDefinitionDiffList@@QEAAXXZ
     * @hash   1567471269
     */
    MCAPI void lockChanges();
    /**
     * @symbol ?removeDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1068459936
     */
    MCAPI void removeDefinition(std::string const &);
    /**
     * @symbol ?setDefinitionStack@ActorDefinitionDiffList@@QEAAXAEAV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@@Z
     * @hash   1271970764
     */
    MCAPI void setDefinitionStack(std::vector<struct DiffListPair> &);
    /**
     * @symbol ?size@ActorDefinitionDiffList@@QEBA_KXZ
     * @hash   2040851733
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol ?unlockChanges@ActorDefinitionDiffList@@QEAAXXZ
     * @hash   510419843
     */
    MCAPI void unlockChanges();
    /**
     * @symbol ??1ActorDefinitionDiffList@@QEAA@XZ
     * @hash   839405111
     */
    MCAPI ~ActorDefinitionDiffList();

//private:
    /**
     * @symbol ?_updateStack@ActorDefinitionDiffList@@AEAAXXZ
     * @hash   1338234657
     */
    MCAPI void _updateStack();

private:

};