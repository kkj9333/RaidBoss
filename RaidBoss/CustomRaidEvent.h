#pragma once
//#include <EventAPI.h>
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include <mc/BlockPos.hpp>
#include <mc/AABB.hpp>
#include <mc/BossEventPacket.hpp>
namespace REvent {
    struct BEextradata {

        long long bossUniqueEntityId;
        long long playerUniqueEntityId = 0;
        BossEvent action;
        string title;
        float healthPercentage;
        BossEventColour color;
        int darkenSky;//5 dark(overlay=1 as wither) 1 normal 2unkown used in raid(but overlay=0)
        int overlay;//1 1 means can change style //1 1 means can change style
        static BEextradata* fromBossEventPacketptr(BossEventPacket* a1);
        static BEextradata* fromBossEventPacketptr(Packet* a1);
    };
    //bool cmpUniqueID(ActorUniqueID a1, ActorUniqueID a2);
    class mUniqueID :public ActorUniqueID {
    public:
        mUniqueID():ActorUniqueID(){}
        mUniqueID(long long id):ActorUniqueID(id){}
        mUniqueID(ActorUniqueID && id) :ActorUniqueID(id) {}
        mUniqueID(ActorUniqueID const& id) :ActorUniqueID(id) {}
        inline bool operator<(mUniqueID a2) const{
            return this->id < a2.id;
        }
        inline bool operator==(mUniqueID a2) const{
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
    class CustomRaidUnit {
        long long attachedbossUniqueID=-1;
        std::string title;
        float healthPercentage;
        int darkenSky=0;//5 dark(overlay=1 as wither) 1 normal 2unkown used in raid(but overlay=0)
        BossEventColour color=BossEventColour::Purple;
        int overlay=1;//1 1 means can change style 0 means not need entity
        enum class changetype {
            none=0,
            changetitle = 1,
            changepercentage=2,
            changestyle=4,
        };
        std::mutex mtickMutex;
        changetype changedtype=changetype::none;
        BlockPos centerpos;
        int dimid;
        AABB area;
        int round = 0;
        int roundmax;
        bool isreloadround=false;
        bool shouwroundinfo = true;
        float oncereloadtime=200;
        std::set < mUniqueID > RegistereddPlayerlist;
        struct recordinfo {
            ActorUniqueID id;
            BossEvent ac;
        };
        std::queue<recordinfo> recordinfolist;

    public:
        long long const getBossUniqueID()const;
        std::string getshowtitle()const;
        inline BlockPos const& getcenterpos() const { return centerpos; };
        inline AABB const& getAABB() const { return area; };
        inline bool isreloadinground() const { return isreloadround; };
        bool setoncereloadtime(float settime = 200);
        inline float const getoncereloadtime() const { return oncereloadtime; }
        bool setroundnow(int  round);
        inline int const getmaxround() const { return roundmax; }
        inline int const getroundnow() const { return round; }
        bool settitle(std::string const& nstr);
        inline std::string const& gettitle() const { return title; }
        bool sethealthPercentage(float nf);
        inline float const gethealthPercentage() const { return healthPercentage; }
        bool setcolor(BossEventColour bcolor);
        inline BossEventColour const& getcolor() const { return color; }
        bool setdarkenSky(int did=1);
        inline int const getdarkenSky() const { return darkenSky; }
        //not use when CustomRaidUnit::tick!
        std::vector<ActorUniqueID> getRegisteredPlayerList();
    private:
        //use to reload
        bool reloadround();
        //use in tick only
        void anounceupdate();
        //to notice all unregisted from system .if vec is null, broadcast to all
        void broadcastremove(std::vector<ActorUniqueID> vec={});
        //to notice all registed to system .
        void broadcaststartshow(std::vector<ActorUniqueID> const& vec );
        //validlist and deal handleinfo
        void validREplayerList();
        //check end and reload or ..
        bool checkshouldend();
    public:
        //use thread to tick please
        void tick();
        //handlepacket
        void recordhandle(BossEventPacket* pt);
        //onplayerleft
        void onLeft(Player* p);
        //cache recordinfo
        void recordinfos(ActorUniqueID pid,BossEvent type);
        CustomRaidUnit(long long bossid, int roundmax, BlockPos const& centerpos, int dim, AABB const& ab, float percentage,std::string const& title);
        CustomRaidUnit(CustomRaidUnit const& as);
        CustomRaidUnit();
        ~CustomRaidUnit();
        //save as json
        nlohmann::json Tojson()const;
        //save as jsonstr
        std::string Tojsonstr()const;
        //loadinfofromjson
        bool fromjson(nlohmann::json const& js);
        //loadinfofromjsonstr
        bool fromjsonstr(std::string const& jsstr);

    };
}