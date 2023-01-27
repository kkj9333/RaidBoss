#pragma once
#include "customstructure.hpp"

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
			inline mtentity(mUniqueID sid, float snowhealth = 0, float smaxhealth = 0) {
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
			bool enabletraceevent = false;
			int ticks = 0;
			int bindround = 0;
			float nowhealth = 0;
			float maxhealth = 0;
			std::set<mtentity> mytracedentity;
			std::string starttracesound = "block.bell.hit";
			std::string helptracesound = "raid.horn";
			std::string endtracesound = "mob.villager.yes";
			std::function<void(Mob* t)> traceevent = [](Mob*) {return; };
			bool ischanged;
		private:
			bool addentity(mUniqueID id);
			bool removeentity(mUniqueID id);
			bool setentities(std::vector<ActorUniqueID> const& vec);
		public:
			float getshowpercentage();
			void resetentitiesdata();
			void init(mUniqueID bossuid, int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack = true);
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
		bool setentities(mUniqueID bossid, std::vector<ActorUniqueID> const& vec);
		bool addnewtraceunit(mUniqueID bossid, int bindround, std::vector<ActorUniqueID> const& vec, bool enabelhelpsoundtrack = true);
		bool removetraceunit(mUniqueID bossid);

	};
}