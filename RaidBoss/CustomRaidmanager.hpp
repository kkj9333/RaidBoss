#pragma once
#include "CustomRaidEvent.h"
#include "CRentitytracehelper.h"
#include <atomic>

namespace REvent {

	class REventManager {
		std::unordered_map<mUniqueID, CustomRaidUnit, myHashFuc> mlist;
		std::unordered_map<mUniqueID, std::string, myHashFuc> uidtoname;
		std::unordered_map<std::string, mUniqueID> nametouid;
		struct cacheinfo {
			enum class cachetype:int {
				none=0,
				add=1,
				remove=2,
				updatetitle=3,
				updatepercertage=4,
				updatecolor=5,
				createfromjsonstr=6,
				registerplayer=7,
				unregisterplayer=8,
				updatenowround=9,
				bindentities=10,
				removebindentities=11,
				updatebindentities=12,
				ondiebindentities=13,
				playsoundforplayers=14,
				broadcastsoundatlocations=15,
				createbindfromfile=16,
				foreachtracedmob=17,
				updatecenterpos=18,
			}type;
			typedef std::variant < mUniqueID, std::string, AABB, BlockPos, Vec3, BossEventColour, int, float, std::vector<ActorUniqueID>, std::vector<Vec3>, bool, std::function<void(Mob*)> > element;
			std::unordered_map<std::string,element> params;
			//old not remove
			mUniqueID bid=-1;
			ActorUniqueID playeruid = -1;
			std::string nameorupdatestr="errorname";
			std::string title="errortitle";
			AABB area = { {0,0,0},{0,0,0} };
			BlockPos centerpos={0,0,0};
			BossEventColour color=BossEventColour::Blue;
			int dimid = -1;
			float percentage=0;
			int roundmax=10;
			int round = 1;
			std::vector<ActorUniqueID> entites;
			std::vector<Vec3> locations;
			std::string soundname;
			bool enablesoundtrace=false;
			inline cacheinfo(cachetype c) {
				type = c;
			}
		};
		std::queue<cacheinfo> cachelist;
		std::mutex writemutex;
		int checkdeadlocktime = 0;
		bool trylockwrite();
		void unlockwrite();
		bool playsoundsforplayers(mUniqueID bossid, std::string const& soundname, Vec3 const& v = Vec3::ZERO);
		bool broadcastsoundsatvec(mUniqueID bossid, std::string const& soundname, std::vector<Vec3> const& locations);
		bool try_createandbindfromfile(mUniqueID bossid, std::string const& filename, bool enablesoundtrace, Vec3 const& spawnpos, int round = -1);
		bool try_tracedmobexecute(mUniqueID bossid, std::function<void(Mob*)> const& func);
	public:
		CRentitytracehelper mTraceEntityManager;
		inline static std::string eventsofttagname = "REeventsoft";
		inline static std::string raidgroupsofttagname = "REeventraidgroupsoft";
		inline static CommandRegistry* registry = NULL;
		//main entry create thread for Unit to tick
		void tick();
		//follows just cache
		//handle playerleftgame
		void onleft(Player* pl);
		//handle bossventpacket
		void recordhandle(BossEventPacket* bep);
		bool createNewRaidBoss(std::string const& name,BlockPos const& centerpos, int dim, AABB const& ab, float percentage, std::string const& title,int roundmax=10);
		bool removeRaidBoss(std::string const& name);
		bool removeRaidBoss(mUniqueID id);
		bool hasRaidBossinreal(mUniqueID id);
		bool updatetitle(std::string const& name, std::string const& title);
		bool updatepercentage(std::string const& name, float percentage);
		bool updatepercentage(mUniqueID bid, float percentage);
		bool updatecenterpos(std::string const& name, BlockPos const& centerpos);
		bool updatecolor(std::string const& name, BossEventColour color);
		bool updateround(std::string const& name, int round);
		std::string getlist();
		bool bindentities(std::string const& name, std::vector<ActorUniqueID> const& vec, bool enablesoundtrace,int round=-1);
		bool addcreatebindfromfile(std::string const& name, std::string const& filename, bool enablesoundtrace, Vec3 const& v, int round = -1);
		bool removebindentities(std::string const& name);
		bool removebindentities(mUniqueID bossid);
		void onmobhurt(mUniqueID id);
		void onmobdie(mUniqueID id);
		void onactordeswpawn(mUniqueID id);
		void onreloadcomponent(mUniqueID id);
		bool addplaysoundsforplayers(mUniqueID bossid, std::string const& soundname);
		bool addplaysoundatlocations(mUniqueID bossid, std::string const& soundname,std::vector<Vec3> const& vecs);
		bool addtracedmobexecute(mUniqueID bossid, std::function<void(Mob*)> const& func);
		bool addtracedmobexecute(std::string const& name, std::function<void(Mob*)> const& func);
	};
	REventManager& manager();
	struct cSpawner {
		
	};
}