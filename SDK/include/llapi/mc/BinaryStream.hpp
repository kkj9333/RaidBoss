/**
 * @file  BinaryStream.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ReadOnlyBinaryStream.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Vec3.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class BinaryStream.
 *
 */
class BinaryStream : public ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    std::string writeBuf, *pwBuf;

    LIAPI void reserve(size_t size);
    LIAPI std::string& getRaw();
    template <typename T>
    inline void writeType(T const&) = delete;
    template <>
    MCAPI void writeType(struct CommandOriginData const&);
    template <>
    MCAPI void writeType(std::vector<std::unique_ptr<class DataItem>> const&);
    template <>
    MCAPI void writeType(class NetworkItemStackDescriptor const&);
    template <>
    MCAPI void writeType(class MoveActorAbsoluteData const&);
    template <>
    inline void writeType(class mce::UUID const& uuid)
    {
        for (const unsigned char b : dAccess<unsigned char[16]>(&uuid, 0))
        {
            writeByte(b);
        }
    }
    template <>
    MCAPI void writeType(class NetworkItemInstanceDescriptor const&);
    template <>
    MCAPI void writeType(struct ItemStackRequestSlotInfo const&);
    template <>
    MCAPI void writeType(class RecipeIngredient const&);
    template <>
    inline void writeType(class Vec3 const& vec3)
    {
        writeFloat(vec3.x);
        writeFloat(vec3.y);
        writeFloat(vec3.z);
    }
    LIAPI void writeCompoundTag(class CompoundTag const& tag);


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    class BinaryStream& operator=(class BinaryStream const &) = delete;
    BinaryStream(class BinaryStream const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1171904341
     */
    virtual ~BinaryStream();
    /**
     * @symbol ??0BinaryStream@@QEAA@XZ
     * @hash   993368557
     */
    MCAPI BinaryStream();
    /**
     * @symbol ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -711589789
     */
    MCAPI BinaryStream(std::string &, bool);
    /**
     * @symbol ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -723751060
     */
    MCAPI std::string getAndReleaseData();
    /**
     * @symbol ?reset@BinaryStream@@QEAAXXZ
     * @hash   1767122483
     */
    MCAPI void reset();
    /**
     * @symbol ?writeBool@BinaryStream@@QEAAX_N@Z
     * @hash   -653914516
     */
    MCAPI void writeBool(bool);
    /**
     * @symbol ?writeByte@BinaryStream@@QEAAXE@Z
     * @hash   -1203327831
     */
    MCAPI void writeByte(unsigned char);
    /**
     * @symbol ?writeDouble@BinaryStream@@QEAAXN@Z
     * @hash   1461731008
     */
    MCAPI void writeDouble(double);
    /**
     * @symbol ?writeFloat@BinaryStream@@QEAAXM@Z
     * @hash   -218485372
     */
    MCAPI void writeFloat(float);
    /**
     * @symbol ?writeSignedBigEndianInt@BinaryStream@@QEAAXH@Z
     * @hash   -1780643544
     */
    MCAPI void writeSignedBigEndianInt(int);
    /**
     * @symbol ?writeSignedInt@BinaryStream@@QEAAXH@Z
     * @hash   254702006
     */
    MCAPI void writeSignedInt(int);
    /**
     * @symbol ?writeSignedInt64@BinaryStream@@QEAAX_J@Z
     * @hash   -939332547
     */
    MCAPI void writeSignedInt64(__int64);
    /**
     * @symbol ?writeSignedShort@BinaryStream@@QEAAXF@Z
     * @hash   92403323
     */
    MCAPI void writeSignedShort(short);
    /**
     * @symbol ?writeString@BinaryStream@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -283167642
     */
    MCAPI void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?writeUnsignedChar@BinaryStream@@QEAAXE@Z
     * @hash   286636169
     */
    MCAPI void writeUnsignedChar(unsigned char);
    /**
     * @symbol ?writeUnsignedInt@BinaryStream@@QEAAXI@Z
     * @hash   -2049692032
     */
    MCAPI void writeUnsignedInt(unsigned int);
    /**
     * @symbol ?writeUnsignedInt64@BinaryStream@@QEAAX_K@Z
     * @hash   -942283047
     */
    MCAPI void writeUnsignedInt64(unsigned __int64);
    /**
     * @symbol ?writeUnsignedShort@BinaryStream@@QEAAXG@Z
     * @hash   1744258181
     */
    MCAPI void writeUnsignedShort(unsigned short);
    /**
     * @symbol ?writeUnsignedVarInt@BinaryStream@@QEAAXI@Z
     * @hash   -266171566
     */
    MCAPI void writeUnsignedVarInt(unsigned int);
    /**
     * @symbol ?writeUnsignedVarInt64@BinaryStream@@QEAAX_K@Z
     * @hash   -383815003
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    /**
     * @symbol ?writeVarInt@BinaryStream@@QEAAXH@Z
     * @hash   -1209634184
     */
    MCAPI void writeVarInt(int);
    /**
     * @symbol ?writeVarInt64@BinaryStream@@QEAAX_J@Z
     * @hash   1256771269
     */
    MCAPI void writeVarInt64(__int64);

//private:
    /**
     * @symbol ?write@BinaryStream@@AEAAXPEBX_K@Z
     * @hash   190649149
     */
    MCAPI void write(void const *, unsigned __int64);

private:

};