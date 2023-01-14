#pragma once
#include "CustomRaidEvent.h"

namespace REvent {
	//use after started need Global<Level>
	//all vec make sure uid is unique
	class CRentitytracehelper {
		struct mtentity {
			//same
			mUniqueID id = -1;
			float nowhealth = 0;
			float maxhealth = 0;
			inline bool operator<(mtentity a2) const {
				return this->id < a2.id;
			}
			inline bool operator==(mtentity a2) const {
				return this->id == a2.id;
			}
			inline mtentity(mUniqueID sid, float snowhealth=0, float smaxhealth=0) {
				id = sid;
				nowhealth = snowhealth;
				maxhealth = smaxhealth;
			}
			inline mtentity(mtentity const& ev) {
				id = ev.id;
				nowhealth = ev.nowhealth;
				maxhealth = ev.maxhealth;
			}
		};
		struct trackunit {
			mUniqueID mbinduid = -1;
			bool juststart = true;
			bool isinited = false;
			bool enablehelpsoundtrack = false;
			int bindround = 0;
			float nowhealth = 0;
			float maxhealth = 0;
			std::set<mtentity> mytracedentity;
			std::string starttracesound = "block.bell.hit";
			std::string helptracesound = "raid.horn";
			std::string endtracesound = "mob.villager.yes";
			bool ischanged;
		private:
			bool addentity(mUniqueID id);
			bool removeentity(mUniqueID id);
			bool setentities(std::vector<ActorUniqueID> const& vec);
		public:
			float getshowpercentage();
			void resetentitiesdata();
			void init(mUniqueID bossuid,int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack = true);
		};
		std::unordered_map<mUniqueID, trackunit, myHashFuc> mbossidlist;//one CustomRaidUnit have one trackunit
		std::unordered_map<mUniqueID, mUniqueID, myHashFuc> ActorUidtoBossUid;// one actor map one CustomRaidUnit only
	public:
		trackunit* gettrackunitptr(mUniqueID bossid);
		mUniqueID getbossidfromactorid(mUniqueID actoruid);
		bool hasentity(mUniqueID actoruid);
		bool hastraceunit(mUniqueID bossid);
		bool addnewentity(mUniqueID bossid, mUniqueID actoruid);
		bool removeoldentity(mUniqueID bossid, mUniqueID actoruid);
		bool updateentity(mUniqueID bossid, mUniqueID actoruid);
		bool updateentitywithdeath(mUniqueID bossid, mUniqueID actoruid);
		bool setentities(mUniqueID bossid,std::vector<ActorUniqueID> const& vec);
		bool addnewtraceunit(mUniqueID bossid, int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack = true);
		bool removetraceunit(mUniqueID bossid);

	};
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
			}type;
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
		bool playsoundsforplayers(mUniqueID bossid, std::string const& soundname);
	public:
		CRentitytracehelper mTraceEntityManager;
		inline static std::string eventsofttagname = "REeventsoft";
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
		bool updatecolor(std::string const& name, BossEventColour color);
		bool updateround(std::string const& name, int round);
		std::string getlist();
		bool bindentities(std::string const& name, std::vector<ActorUniqueID> const& vec, bool enablesoundtrace,int round=-1);
		bool removebindentities(std::string const& name);
		bool removebindentities(mUniqueID bossid);
		void onmobhurt(mUniqueID id);
		void onmobdie(mUniqueID id);
		void onactordeswpawn(mUniqueID id);
		bool addplaysoundsforplayers(mUniqueID bossid, std::string const& soundname);
	};
	REventManager& manager();
}