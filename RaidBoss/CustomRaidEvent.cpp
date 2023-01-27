#include "pch.h"
#include "CustomRaidEvent.h"
#include <algorithm>
#include <mc/Player.hpp>
#include <mc/Level.hpp>
#include <mc/PlayerListEntry.hpp>
#include <algorithm>
#include <ScheduleAPI.h>
#include <SendPacketAPI.h>
#include <MC/MinecraftPackets.hpp>

#define TRJ(json,key1,key2,val)                                \
if (json.find(key1) != json.end()) {                      \
    if(key2==""){json.at(key1).get_to(val);}                \
    else if (json.at(key1).find(key2) != json.at(key1).end()) {\
    auto & out2 = json.at(key1).at(key2);  \
         out2.get_to(val);}}                              \


namespace REvent {
	long long const CustomRaidUnit::getBossUniqueID() const
	{
		return attachedbossUniqueID;
	}
	std::string CustomRaidUnit::getshowtitle() const
	{
		return   this->title+ (shouwroundinfo?(" ("+std::to_string(this->round) + "/" + std::to_string(this->roundmax)+")"):"");
	}
	void CustomRaidUnit::setcenterpos(BlockPos const& bp) {
		this->centerpos = bp;
	}
	bool CustomRaidUnit::setoncereloadtime(float settime)
	{
		oncereloadtime = settime;
		return true;
	}
	bool CustomRaidUnit::setroundnow(int round)
	{
		this->round= round < 1 ? 1 : (round > roundmax ? roundmax : round);
		changedtype = (changetype)((int)changedtype | (int)changetype::changetitle);
		return true;
	}
	bool CustomRaidUnit::settitle(std::string const& newt)
	{
		this->title = newt;
		changedtype = (changetype)((int)changedtype | (int)changetype::changetitle);
		return true;
	}
	bool CustomRaidUnit::sethealthPercentage(float nf)
	{
		this->healthPercentage = nf<0?0:(nf>1?1:nf);
		changedtype = (changetype)((int)changedtype | (int)changetype::changepercentage);
		return true;
	}
	bool CustomRaidUnit::setcolor(BossEventColour bcolor)
	{
		this->color = bcolor;
		//this->overlay = 0;
		changedtype = (changetype)((int)changedtype | (int)changetype::changestyle);
		return true;
	}
	bool CustomRaidUnit::setdarkenSky(int did)
	{
		this->darkenSky = did;
		//this->overlay = 0;
		changedtype = (changetype)((int)changedtype | (int)changetype::changestyle);
		return true;
	}
	bool CustomRaidUnit::reloadround()
	{
		if (this->gethealthPercentage() < 1)
		{
			float speed = 1 / oncereloadtime;
			this->sethealthPercentage(this->gethealthPercentage() + speed);
			if (this->gethealthPercentage() > 1)
				this->sethealthPercentage(1);
			return false;
		}
		else
			return true;
	}
	void CustomRaidUnit::anounceupdate()
	{
#ifdef debugcout
		std::cout << __FUNCTION__ << std::endl;
#endif
		if (changedtype == changetype::none|| this->RegistereddPlayerlist.empty())
			return;
		int changeid = (int)changedtype; std::vector<ActorUniqueID> updatalist = std::vector<ActorUniqueID>(this->RegistereddPlayerlist.begin(), this->RegistereddPlayerlist.end()); int overlay = this->overlay;
		auto bossid = this->attachedbossUniqueID; std::string savedtitle = this->getshowtitle(); float percentage = this->healthPercentage;
		BossEventColour col = this->color; int darkskyid = this->darkenSky;
		//delay wont execute now
		Schedule::delay([bossid, savedtitle, changeid, percentage, col,darkskyid,overlay, updatalist]() {
			auto pt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
			auto aData = BEextradata::fromBossEventPacketptr(pt.get());
			aData->action = BossEvent::Title;
			aData->bossUniqueEntityId = bossid;
			aData->playerUniqueEntityId = 0;
			aData->title = savedtitle;
			aData->healthPercentage = percentage;
			aData->overlay = overlay;
			aData->darkenSky = darkskyid;
			aData->color = col;
			if ((changeid & 1) == 1) {
				//title
				aData->action = BossEvent::Title;
				for (auto& tp:updatalist) {
					auto pl =(Player*) Global<Level>->fetchEntity(tp, 0);
					if (pl) {
						pl->sendNetworkPacket(*pt);
					}
				}
			}
			if ((changeid & 2) == 2) {
				//health
				aData->action = BossEvent::HealthPercentage;
				for (auto& tp : updatalist) {
					auto pl = (Player*)Global<Level>->fetchEntity(tp, 0);
					if (pl) {
						pl->sendNetworkPacket(*pt);
					}
				}
			}
			if ((changeid & 4) == 4) {
				//may be useless
				aData->action = BossEvent::Texture;
				for (auto& tp : updatalist) {
					auto pl = (Player*)Global<Level>->fetchEntity(tp, 0);
					if (pl) {
						pl->sendNetworkPacket(*pt);
					}
				}
			}
			}, 0);
		changedtype = changetype::none;
	}
	void CustomRaidUnit::broadcastremove(std::vector<ActorUniqueID> vec)
	{
#ifdef debugcout
		std::cout << __FUNCTION__ << std::endl;
#endif
		if (vec.empty()) {
			vec = std::vector<ActorUniqueID>(this->RegistereddPlayerlist.begin(),this->RegistereddPlayerlist.end());
		}
		auto bossid = this->attachedbossUniqueID;
		BlockPos centerpos = this->centerpos;
		//delay wont execute now
		Schedule::delay([bossid, centerpos, vec]() {
			auto pt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
			auto aData = BEextradata::fromBossEventPacketptr(pt.get());
			aData->action = BossEvent::Hide;
			aData->bossUniqueEntityId = bossid;
			//removeentity
			auto pkt2 = MinecraftPackets::createPacket(MinecraftPacketIds::RemoveActor);
			BinaryStream wp;
			wp.writeVarInt64(bossid);
			pkt2->read(wp);
			for (auto& tp : vec) {
				auto pl = (Player*)Global<Level>->fetchEntity(tp, 0);
				if (pl) {
					{
						pl->sendNetworkPacket(*pt);
						pl->sendNetworkPacket(*pkt2);
					}
				}
			}
			}, 0);
	}
	void CustomRaidUnit::broadcaststartshow(std::vector<ActorUniqueID> const& vec)
	{
#ifdef debugcout
		std::cout << __FUNCTION__ << std::endl;
#endif
		if (vec.empty()) {
			return;
		}
		int changeid = (int)changedtype;  int overlay = this->overlay;
		auto bossid = this->attachedbossUniqueID; std::string savedtitle = this->getshowtitle(); float percentage = this->healthPercentage;
		BossEventColour col = this->color; int darkskyid = this->darkenSky; BlockPos centerpos = this->centerpos;
		//delay wont execute now
		Schedule::delay([bossid, savedtitle, changeid, percentage, col, darkskyid, overlay, centerpos, vec]() {
			auto pt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
			auto aData = BEextradata::fromBossEventPacketptr(pt.get());
			aData->action = BossEvent::Show;
			aData->bossUniqueEntityId = bossid;
			aData->playerUniqueEntityId = 0;
			aData->title = savedtitle;
			aData->healthPercentage = percentage;
			aData->overlay = overlay;
			aData->darkenSky = darkskyid;
			aData->color = col;
			for (auto& tp : vec) {
				auto pl = (Player*)Global<Level>->fetchEntity(tp, 0);
				if (pl) {
					{
						pl->sendAddEntityPacket(bossid, "player", centerpos.toVec3().add(0,200,0), Vec2{0, 0}, 0);
						pl->sendNetworkPacket(*pt);
					}
				}
			}
			}, 0);
	}
	bool CustomRaidUnit::checkshouldend()
	{
		//nextround set healthPercentage to 0
		//end set round to round max and health Percentage to 0
		//stop is from the whole system ,not heah
		if (healthPercentage == 0) {
			if (this->round >= this->roundmax)
				return true;
			this->round += 1;
			this->settitle(this->title);
			this->isreloadround = true;
		}
		if (isreloadround) {
			if (reloadround())
				this->isreloadround = false;
		}
		return false;
	}

	void CustomRaidUnit::recordhandle(BossEventPacket* a3) {
		auto aData = BEextradata::fromBossEventPacketptr(a3);
		if (aData->bossUniqueEntityId == this->attachedbossUniqueID) {
			recordinfolist.push({ aData->playerUniqueEntityId,aData->action });
		}
	}

	CustomRaidUnit::~CustomRaidUnit()
	{
#ifdef debugcout
		std::cout << __FUNCTION__ << std::endl;
#endif
		this->round = this->roundmax;
		this->healthPercentage = 0;
		broadcastremove();
	}

	CustomRaidUnit::CustomRaidUnit(CustomRaidUnit const& as)
	{
		this->area = as.area; this->attachedbossUniqueID = as.attachedbossUniqueID; this->oncereloadtime = as.oncereloadtime; this->overlay = as.overlay; this->title = as.title;
		this->centerpos = as.centerpos; this->changedtype = as.changedtype; this->isreloadround = as.isreloadround; this->round = as.round; this->roundmax = as.roundmax;
		this->color = as.color; this->darkenSky = as.darkenSky; this->dimid = as.dimid; this->healthPercentage = as.healthPercentage;
		this->RegistereddPlayerlist = as.RegistereddPlayerlist; this->recordinfolist = as.recordinfolist;
		this->mtickMutex;
	}

	nlohmann::json CustomRaidUnit::Tojson() const
	{
		nlohmann::json ret;
		ret["attachedbossUniqueID"] = this->attachedbossUniqueID;
		ret["area"]["x1"] = this->area.min.x;
		ret["area"]["y1"] = this->area.min.y;
		ret["area"]["z1"] = this->area.min.z;
		ret["area"]["x2"] = this->area.max.x;
		ret["area"]["y2"] = this->area.max.y;
		ret["area"]["z2"] = this->area.max.z;
		ret["centerpos"]["x"] = this->centerpos.x;
		ret["centerpos"]["y"] = this->centerpos.y;
		ret["centerpos"]["z"] = this->centerpos.z;
		ret["dimid"] = this->dimid;
		ret["color"] = (int)this->color;
		ret["darkenSky"] = this->darkenSky;
		ret["overlay"] = this->overlay;
		ret["healthPercentage"] = this->healthPercentage;
		ret["isreloadround"] = this->isreloadround;
		ret["oncereloadtime"] = this->oncereloadtime;
		ret["round"] = this->round;
		ret["roundmax"] = this->roundmax;
		ret["title"] = this->title;
		return ret;
	}
	CustomRaidUnit::CustomRaidUnit()
	{
		this->attachedbossUniqueID = -1;
		this->roundmax = 5;
		this->area = { {0,0,0},{0,0,0} };
		this->dimid = -1;
		this->title = "eorr";
		this->centerpos = { 0,0,0 };
	}
	std::vector<ActorUniqueID> CustomRaidUnit::getRegisteredPlayerList()
	{
		std::vector<ActorUniqueID> ret;
		for (auto& it : this->RegistereddPlayerlist)
			ret.push_back({ it.id });
		return ret;
	}
	std::string CustomRaidUnit::Tojsonstr()const {
		return this->Tojson().dump(4, 32, false, nlohmann::detail::error_handler_t::ignore);
	}
	bool CustomRaidUnit::fromjson(nlohmann::json const& js)
	{
		TRJ(js,"attachedbossUniqueID","", attachedbossUniqueID);
		TRJ(js, "dimid","", dimid);
		TRJ(js, "color", "", color);
		TRJ(js, "darkenSky", "", darkenSky);
		TRJ(js, "overlay", "", overlay);
		TRJ(js, "healthPercentage", "", healthPercentage);
		TRJ(js, "isreloadround", "", isreloadround);
		TRJ(js, "oncereloadtime", "", oncereloadtime);
		TRJ(js, "round", "", round);
		TRJ(js, "roundmax", "", roundmax);
		TRJ(js, "title", "", title);
		TRJ(js, "centerpos", "x", centerpos.x);
		TRJ(js, "centerpos", "y", centerpos.y);
		TRJ(js, "centerpos", "z", centerpos.z);
		TRJ(js, "area", "x1", this->area.min.x);
		TRJ(js, "area", "y1", this->area.min.y);
		TRJ(js, "area", "z1", this->area.min.z);
		TRJ(js, "area", "x2", this->area.max.x);
		TRJ(js, "area", "y2", this->area.max.y);
		TRJ(js, "area", "z2", this->area.max.z);
		return true;
	}
	bool CustomRaidUnit::fromjsonstr(std::string const& jsstr) {
		nlohmann::json json= nlohmann::json::parse(jsstr);
		return fromjson(json);
	}
	void CustomRaidUnit::validREplayerList()
	{
		while (!recordinfolist.empty()) {
#ifdef debugcout
			std::cout << "recordinfolist is not empty" << std::endl;
#endif
			recordinfo reinfo = recordinfolist.front(); recordinfolist.pop();
			switch (reinfo.ac)
			{
			case BossEvent::RegisterPlayer:
				this->RegistereddPlayerlist.emplace(reinfo.id);
				break;
			case BossEvent::UnregisterPlayer:
				this->RegistereddPlayerlist.erase(reinfo.id);
				break;
			default:
				logger.error("error at{},unkown action handle:{}", __FUNCTION__, (int)reinfo.ac);
				break;
			}
		}
#ifdef debugcout
		std::cout<<"validREplayerList" << std::endl;
#endif
		auto first = this->RegistereddPlayerlist.begin();
		auto end = this->RegistereddPlayerlist.end();
		while(first!=end) {
			if (!Global<Level>->fetchEntity(first->id, 0)) {
				first = this->RegistereddPlayerlist.erase(first);
			}
			else
				++first;
		}
	}

	void CustomRaidUnit::onLeft(Player* p)
	{
		this->recordinfolist.push({ p->getActorUniqueId(),BossEvent::UnregisterPlayer });
	}
	void CustomRaidUnit::recordinfos(ActorUniqueID pid, BossEvent type) {
		this->recordinfolist.push({ pid,type });
	}
	CustomRaidUnit::CustomRaidUnit(long long bossid, int roundmax, BlockPos const& centerpos, int dim, AABB const& ab, float percentage, std::string const& title)
	{
#ifdef debugcout
		std::cout << __FUNCTION__ << std::endl;
#endif
		this->attachedbossUniqueID = bossid;
		this->roundmax = roundmax;
		this->centerpos = centerpos;
		this->dimid = dim;
		this->area = ab;
		this->healthPercentage = percentage;
		this->title = title;
	}


	void CustomRaidUnit::tick()
	{
		try {
#ifdef debugcout
			std::cout << __FUNCTION__<<this->RegistereddPlayerlist.size() << std::endl;
#endif
			std::lock_guard<std::mutex> lk(mtickMutex);//lock the RaidEvent
			//check first
			checkshouldend();
			//valid registeredplayer second
			validREplayerList();
			//annouceupdate thirdly
			anounceupdate();
			//std::set<ActorUniqueID, decltype(cmpUniqueID)*> Nearby;
			std::set<mUniqueID> Nearby;
			auto& pl = Global<Level>->getPlayerList();
			//get nearbylist
			for (auto& it : pl) {
				auto uid = it.second.uid;
				if (this->area.contains(Global<Level>->fetchEntity(uid, 0)->getPos())&& this->dimid==Global<Level>->fetchEntity(uid, 0)->getDimensionId())
					Nearby.emplace(uid);
			}
			//get Newcoming and Left playerlist
			std::vector<ActorUniqueID> NewComing,Leftarea;
			//std::sort(Nearby.begin(), Nearby.end(), cmpUniqueID);//(n1 log n1
			//std::sort(this->RegistereddPlayerlist.begin(), this->RegistereddPlayerlist.end(), cmpUniqueID);//n2 log n2
			if (Nearby == RegistereddPlayerlist) return;
			else {
				set_difference(Nearby.begin(), Nearby.end(), RegistereddPlayerlist.begin(), RegistereddPlayerlist.end(), std::inserter(NewComing, NewComing.begin()));
				set_difference(RegistereddPlayerlist.begin(), RegistereddPlayerlist.end(), Nearby.begin(), Nearby.end(), std::inserter(Leftarea, Leftarea.begin()));
				//sendupdatepacket
				broadcaststartshow(NewComing);
				if (!Leftarea.empty())
					broadcastremove(Leftarea);
			}
			
		}
		catch (std::runtime_error const& e) {
			logger.error("error at{},{}", __FUNCTION__, e.what());
		}

	}


}

