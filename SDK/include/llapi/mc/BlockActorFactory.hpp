/**
 * @file  BlockActorFactory.hpp
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
 * @brief MC class BlockActorFactory.
 *
 */
class BlockActorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORFACTORY
public:
    class BlockActorFactory& operator=(class BlockActorFactory const &) = delete;
    BlockActorFactory(class BlockActorFactory const &) = delete;
    BlockActorFactory() = delete;
#endif

public:
    /**
     * @symbol ?createBlockEntity@BlockActorFactory@@SA?AV?$shared_ptr@VBlockActor@@@std@@W4BlockActorType@@AEBVBlockPos@@AEBVBlockLegacy@@@Z
     * @hash   -1909518434
     */
    MCAPI static class std::shared_ptr<class BlockActor> createBlockEntity(enum class BlockActorType, class BlockPos const &, class BlockLegacy const &);
    /**
     * @symbol ?flushCustomBlockEntityCreationCallbacks@BlockActorFactory@@SAXXZ
     * @hash   2038625739
     */
    MCAPI static void flushCustomBlockEntityCreationCallbacks();

//private:

private:
    /**
     * @symbol ?mCustomBlockEntityCreation@BlockActorFactory@@0V?$vector@U?$pair@W4BlockActorType@@V?$function@$$A6A?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z@std@@@std@@V?$allocator@U?$pair@W4BlockActorType@@V?$function@$$A6A?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z@std@@@std@@@2@@std@@A
     * @hash   782952848
     */
    MCAPI static std::vector<struct std::pair<enum class BlockActorType, class std::function<class std::shared_ptr<class BlockActor> (class BlockPos const &)>>> mCustomBlockEntityCreation;

};