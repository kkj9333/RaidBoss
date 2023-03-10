/**
 * @file  BackgroundWorker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BackgroundWorker.
 *
 */
class BackgroundWorker {

#define AFTER_EXTRA
// Add Member There
public:
enum class RunOneResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    class BackgroundWorker& operator=(class BackgroundWorker const &) = delete;
    BackgroundWorker(class BackgroundWorker const &) = delete;
    BackgroundWorker() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1137577066
     */
    virtual ~BackgroundWorker();
    /**
     * @vftbl  1
     * @symbol ?isAsync@BackgroundWorker@@UEBA_NXZ
     * @hash   104740174
     */
    virtual bool isAsync() const;
    /**
     * @vftbl  2
     * @symbol ?canTaskRunAgain@BackgroundWorker@@UEBA_NXZ
     * @hash   1926614854
     */
    virtual bool canTaskRunAgain() const;
    /**
     * @symbol ??0BackgroundWorker@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@AEAVWorkerPool@@1@Z
     * @hash   1570498418
     */
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class WorkerPool &, bool);
    /**
     * @symbol ?getApproximateTaskCount@BackgroundWorker@@QEBA_KXZ
     * @hash   858256443
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @symbol ?getThreadId@BackgroundWorker@@QEBA?AVid@thread@std@@XZ
     * @hash   240490662
     */
    MCAPI class std::thread::id getThreadId() const;
    /**
     * @symbol ?isIdle@BackgroundWorker@@QEBA_NXZ
     * @hash   -928689838
     */
    MCAPI bool isIdle() const;
    /**
     * @symbol ?processTaskSync@BackgroundWorker@@QEAA_NXZ
     * @hash   -1416832506
     */
    MCAPI bool processTaskSync();
    /**
     * @symbol ?queue@BackgroundWorker@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   1419195435
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?requestStop@BackgroundWorker@@QEAAX_N@Z
     * @hash   1421043826
     */
    MCAPI void requestStop(bool);
    /**
     * @symbol ?resetWorkerThreadID@BackgroundWorker@@QEAAXXZ
     * @hash   -1393523949
     */
    MCAPI void resetWorkerThreadID();
    /**
     * @symbol ?resortPriorityQueue@BackgroundWorker@@QEAAXXZ
     * @hash   1011860451
     */
    MCAPI void resortPriorityQueue();
    /**
     * @symbol ?start@BackgroundWorker@@QEAAXXZ
     * @hash   -543914125
     */
    MCAPI void start();
    /**
     * @symbol ?wake@BackgroundWorker@@QEAAXXZ
     * @hash   -819904987
     */
    MCAPI void wake();
    /**
     * @symbol ?getLocal@BackgroundWorker@@SAPEAV1@XZ
     * @hash   1065495912
     */
    MCAPI static class BackgroundWorker * getLocal();

//private:
    /**
     * @symbol ?_processNextTask@BackgroundWorker@@AEAA_NXZ
     * @hash   -1296311422
     */
    MCAPI bool _processNextTask();
    /**
     * @symbol ?_runOneTask@BackgroundWorker@@AEAA?AW4RunOneResult@1@XZ
     * @hash   -438465875
     */
    MCAPI enum class BackgroundWorker::RunOneResult _runOneTask();

private:
    /**
     * @symbol ?gLocalWorkerMappingSingleton@BackgroundWorker@@0PEAV1@EA
     * @hash   866351491
     */
    MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};