/**
 * @file  Path.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

enum class NodeType;
enum class PathCompletionType;

#undef BEFORE_EXTRA

/**
 * @brief MC class Path.
 *
 */
class Path {

#define AFTER_EXTRA
// Add Member There
public:
    class Node
    {
        BlockPos mPos;
        enum class NodeType mType;
    };

    std::vector<Node> mNodes;
    size_t mIndex;
    enum class PathCompletionType mCompletionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATH
public:
    class Path& operator=(class Path const &) = delete;
    Path(class Path const &) = delete;
#endif

public:
    /**
     * @symbol ??0Path@@QEAA@XZ
     * @hash   27218897
     */
    MCAPI Path();
    /**
     * @symbol ?currentPos@Path@@QEBA?AVVec3@@PEBVActor@@@Z
     * @hash   -271787932
     */
    MCAPI class Vec3 currentPos(class Actor const *) const;
    /**
     * @symbol ?currentPos@Path@@QEBAAEBVBlockPos@@XZ
     * @hash   90273688
     */
    MCAPI class BlockPos const & currentPos() const;
    /**
     * @symbol ?endsInXZ@Path@@QEAA_NAEBVVec3@@@Z
     * @hash   1096385985
     */
    MCAPI bool endsInXZ(class Vec3 const &);
    /**
     * @symbol ?getCompletionType@Path@@QEBA?AW4PathCompletionType@@XZ
     * @hash   1818564368
     */
    MCAPI enum class PathCompletionType getCompletionType() const;
    /**
     * @symbol ?getEndPos@Path@@QEBA?AVVec3@@XZ
     * @hash   367804464
     */
    MCAPI class Vec3 getEndPos() const;
    /**
     * @symbol ?getIndex@Path@@QEBA_KXZ
     * @hash   1335903095
     */
    MCAPI unsigned __int64 getIndex() const;
    /**
     * @symbol ?getLastPos@Path@@QEBAAEBVBlockPos@@XZ
     * @hash   505671602
     */
    MCAPI class BlockPos const & getLastPos() const;
    /**
     * @symbol ?getNodePos@Path@@QEBAAEBVBlockPos@@_K@Z
     * @hash   909255488
     */
    MCAPI class BlockPos const & getNodePos(unsigned __int64) const;
    /**
     * @symbol ?getNodeType@Path@@QEBA?AW4NodeType@@_K@Z
     * @hash   -906953256
     */
    MCAPI enum class NodeType getNodeType(unsigned __int64) const;
    /**
     * @symbol ?getPos@Path@@QEBA?AVVec3@@PEBVActor@@_K@Z
     * @hash   1087063326
     */
    MCAPI class Vec3 getPos(class Actor const *, unsigned __int64) const;
    /**
     * @symbol ?getSize@Path@@QEBA_KXZ
     * @hash   -1770649297
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @symbol ?isDone@Path@@QEBA_NXZ
     * @hash   -2087616516
     */
    MCAPI bool isDone() const;
    /**
     * @symbol ?isValid@Path@@QEBA_NXZ
     * @hash   586405194
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?makeCopy@Path@@QEBA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@XZ
     * @hash   -1097028166
     */
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    /**
     * @symbol ?next@Path@@QEAAXXZ
     * @hash   390333685
     */
    MCAPI void next();
    /**
     * @symbol ?sameAs@Path@@QEBA_NPEAV1@@Z
     * @hash   1115948296
     */
    MCAPI bool sameAs(class Path *) const;
    /**
     * @symbol ?setIndex@Path@@QEAAX_K@Z
     * @hash   -1891306749
     */
    MCAPI void setIndex(unsigned __int64);
    /**
     * @symbol ?setSize@Path@@QEAAX_K@Z
     * @hash   -214211061
     */
    MCAPI void setSize(unsigned __int64);
    /**
     * @symbol ??1Path@@QEAA@XZ
     * @hash   -872883905
     */
    MCAPI ~Path();

//private:
    /**
     * @symbol ?buildFromNodes@Path@@AEAAX$$QEAV?$vector@VNode@Path@@V?$allocator@VNode@Path@@@std@@@std@@W4PathCompletionType@@@Z
     * @hash   641844893
     */
    MCAPI void buildFromNodes(std::vector<class Path::Node> &&, enum class PathCompletionType);

private:

};