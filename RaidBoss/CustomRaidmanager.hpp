#pragma once
#include "CustomRaidEvent.h"
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
			}type;
			mUniqueID bid=-1;
			std::string nameorupdatestr="errorname";
			std::string title="errortitle";
			AABB area = { {0,0,0},{0,0,0} };
			BlockPos centerpos={0,0,0};
			BossEventColour color=BossEventColour::Blue;
			int dimid = -1;
			float percentage=0;
			int roundmax=10;
			inline cacheinfo(cachetype c) {
				type = c;
			}
		};
		std::queue<cacheinfo> cachelist;
		std::mutex writemutex;
		int checkdeadlocktime = 0;
		std::atomic_bool lockedbytick = false;
		bool trylockwrite();
		void unlockwrite();
	public:
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
		bool updatetitle(std::string const& name, std::string const& title);
		bool updatepercentage(std::string const& name, float percentage);
		bool updatecolor(std::string const& name, BossEventColour color);
		std::string getlist();
	};
	REventManager& manager();
}