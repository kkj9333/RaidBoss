#pragma once
#include <mc/BossEventPacket.hpp>
#include <mc/Player.hpp>
#include <mc/Mob.hpp>
#include <mc/NavigationComponent.hpp>
#include <mc/MoveControlComponent.hpp>
#include <mc/GoalDefinition.hpp>
#include <mc/PrioritizedGoal.hpp>
#include <mc/EntityContext.hpp>
struct BEextradata {

    long long bossUniqueEntityId;
    long long playerUniqueEntityId = 0;
    BossEvent action;
    string title;
    float healthPercentage;
    BossEventColour color;
    int darkenSky;// 1 normal 2unkown used in raid(but overlay=0)
    int overlay;//1 1 means can change style //1 1 means can change style
    static BEextradata* fromBossEventPacketptr(BossEventPacket* a1);
    static BEextradata* fromBossEventPacketptr(Packet* a1);
};

#define myfakeclass(T) my_##T
#define myfakedefine(T,truesize) class myfakeclass(T) :public T {\
char filler[truesize - (sizeof(T) == 1 ? 0 : sizeof(T))] = {0};\

#define endefmyfake(T,truesize) };\
static_assert(sizeof(myfakeclass(T))==truesize);



myfakedefine(GoalDefinition, 2752) 
    //size from Mob::createAIGoals for ( i = *(_QWORD *)(v8 + 344); v9 != i; v9 += 2752i64 )
public:
    inline std::string& Goaldefinename() { return *(std::string*)this; }
    inline int& priority() { return *(int*)((char*)this+32); }
    myfakeclass(GoalDefinition)():GoalDefinition() {}
    myfakeclass(GoalDefinition)(myfakeclass(GoalDefinition) const& t):GoalDefinition(t){}
    inline GoalDefinition& asGoalDefinition() { return *(GoalDefinition*)this; }
endefmyfake(GoalDefinition, 2752)
/* goal
//typeid short offset48
//ownmob mob* offset56
//*((_QWORD *)this + 7) = a2
//goalname std::string offset16
//after priorited can getname
//std::string::assign((char *)v7 + 16, v9, (size_t)a4[2]);
*/
myfakedefine(PrioritizedGoal, 16)
//1.19.51
//guessed baseclass not important
//Unique<Goal> mGoal;0
//int mPriority;8
//short unkown 12
//
public:
    myfakeclass(PrioritizedGoal)() = delete;


endefmyfake(PrioritizedGoal, 16)

namespace mydefined {
    void sethometo(Mob* ss, Vec3 const& pos, int speed);
	void setmoveto(Mob* s, Vec3 const& pos, int speed);
    EntityContext* getEntityContext(Actor* ac);
    int getEntitytypeId(Actor* ac);
}