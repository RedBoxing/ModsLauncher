#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGGameProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGGameProcess"));
	}

	template <typename T = int32_t> T& this_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& coin_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& accumulated_coin_value() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& kill_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& start_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& player_dealt_damage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& object2Objtain() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& got_pickable() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& cur_bossrush_room() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& cur_bossname() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& BR_PER_LEVEL_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PER_LEVEL_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& use_br_ticket_flag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _modeProcess() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_modeProcess() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C44EE4))(this);
	}
	template <typename T = bool> T get_InAdvToturial() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C44F7C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C44FE4))(this);
	}
	template <typename T = void> T AccumulateKillCount() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C450A0))(this);
	}
	template <typename T = void> T SetUpPlayerInfo() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45114))(this);
	}
	template <typename T = void> T UpdateHeroInfo() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C451B0))(this);
	}
	template <typename T = void> T SetUpPlayerInfoReBorn() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45C90))(this);
	}
	template <typename T = void> T UpdateGameTime() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45A0C))(this);
	}
	template <typename T = float> T GetCurPlayTime() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45D78))(this);
	}
	template <typename T = void> T CheckUseBossRushTicket() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45E0C))(this);
	}
	template <typename T = void> T BossRushConsumeTicket() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45FEC))(this);
	}
	template <typename T = void> T NextScene() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C4632C))(this);
	}
	template <typename T = void> T TryAgain() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C46C88))(this);
	}
	template <typename T = void> T StateMents() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C46E64))(this);
	}
	template <typename T = void> T GameFailDelay(float delayTime) {
		return ((T (*)(RGGameProcess*, float))(Il2CppBase() + 0x1C471FC))(this, delayTime);
	}
	template <typename T = void> T GameFail() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C472B8))(this);
	}
	template <typename T = Il2CppString*> T GetManagerName() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C474F8))(this);
	}
	template <typename T = void> T ReSetInfo(bool resetBattleData, bool needSetHasReborn) {
		return ((T (*)(RGGameProcess*, bool, bool))(Il2CppBase() + 0x1C4755C))(this, resetBattleData, needSetHasReborn);
	}
	template <typename T = void> T SaveThisGame() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45AD8))(this);
	}
	template <typename T = void> T LoadSavedGame(uintptr_t savePlace) {
		return ((T (*)(RGGameProcess*, uintptr_t))(Il2CppBase() + 0x1C477FC))(this, savePlace);
	}
	template <typename T = void> T SaveBuffChoice() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C4779C))(this);
	}
	template <typename T = void> T SyncGetLoadingBuff(int32_t value) {
		return ((T (*)(RGGameProcess*, int32_t))(Il2CppBase() + 0x1C479F4))(this, value);
	}
	template <typename T = void> T LearnBuff(int32_t buffIndex) {
		return ((T (*)(RGGameProcess*, int32_t))(Il2CppBase() + 0x1C47A74))(this, buffIndex);
	}
	template <typename T = int32_t> T GetBuffCount() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C47E04))(this);
	}
	template <typename T = void> T StatisticObtainObject(Il2CppString* name, int32_t count) {
		return ((T (*)(RGGameProcess*, Il2CppString*, int32_t))(Il2CppBase() + 0x1C47EB8))(this, name, count);
	}
	template <typename T = void> T AddPickableAndStatistic() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C45484))(this);
	}
	template <typename T = void> T AddCoin(int32_t count) {
		return ((T (*)(RGGameProcess*, int32_t))(Il2CppBase() + 0x1C48034))(this, count);
	}
	template <typename T = bool> T ConsumeCoin(int32_t count) {
		return ((T (*)(RGGameProcess*, int32_t))(Il2CppBase() + 0x1C48138))(this, count);
	}
	template <typename T = void> T ProcessPool() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C46B3C))(this);
	}
	template <typename T = void> T LoginGooglePlay(void* onLogin) {
		return ((T (*)(RGGameProcess*, void*))(Il2CppBase() + 0x1C48310))(this, onLogin);
	}
	template <typename T = void> T GetAchievement(Il2CppString* value) {
		return ((T (*)(RGGameProcess*, Il2CppString*))(Il2CppBase() + 0x1C483EC))(this, value);
	}
	template <typename T = void> T ShowAchievement() {
		return ((T (*)(RGGameProcess*))(Il2CppBase() + 0x1C484C8))(this);
	}
	template <typename T = void> T DoOnSignIn(bool value) {
		return ((T (*)(RGGameProcess*, bool))(Il2CppBase() + 0x1C4858C))(this, value);
	}

};

}
