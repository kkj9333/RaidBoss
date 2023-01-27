#pragma once
#include <mc/BlockPos.hpp>
#include <mc/AABB.hpp>
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include "structoffset.hpp"

namespace REvent {
    //bool cmpUniqueID(ActorUniqueID a1, ActorUniqueID a2);
    class mUniqueID :public ActorUniqueID {
    public:
        mUniqueID() :ActorUniqueID() {}
        mUniqueID(long long id) :ActorUniqueID(id) {}
        mUniqueID(ActorUniqueID&& id) :ActorUniqueID(id) {}
        mUniqueID(ActorUniqueID const& id) :ActorUniqueID(id) {}
        inline bool operator<(mUniqueID a2) const {
            return this->id < a2.id;
        }
        inline bool operator==(mUniqueID a2) const {
            return this->id == a2.id;
        }
    };
    struct myHashFuc
    {
        std::size_t operator()(const mUniqueID& key) const
        {
            return std::hash<__int64>()(key.id);
        }
    };

}


namespace std {
    template<>
    struct hash<REvent::mUniqueID>
    {
        typedef REvent::mUniqueID argument_type;
        typedef std::size_t result_type;

        result_type operator()(argument_type const& s) const
        {
            return  (std::hash<__int64>()(s.id));
        }
    };
}