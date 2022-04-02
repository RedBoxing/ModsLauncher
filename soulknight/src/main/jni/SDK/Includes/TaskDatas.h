#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TaskDatas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskDatas"));
	}

	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tasks() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentTask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& completedTask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& changeCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _rg_random() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& rewardGem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B6DC8))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43B7014))(0, value);
	}
	template <typename T = uintptr_t> T get_rg_random() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B70C0))(this);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B7298))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B6D0C))(0);
	}
	template <typename T = void> static T NewData() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B7384))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B6EAC))(0);
	}
	template <typename T = uintptr_t> T GetCompleteTask() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B7C6C))(this);
	}
	template <typename T = void> T FlushDelegate() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B7B3C))(this);
	}
	template <typename T = void> T OnEnemyDead(Il2CppString* enemyId) {
		return ((T (*)(TaskDatas*, Il2CppString*))(Il2CppBase() + 0x43B7CCC))(this, enemyId);
	}
	template <typename T = uintptr_t> T GetChallengeData(uintptr_t dateTime) {
		return ((T (*)(TaskDatas*, uintptr_t))(Il2CppBase() + 0x43B7E70))(this, dateTime);
	}
	template <typename T = uintptr_t> T GetRandomTask(uintptr_t type, bool useDaySeed) {
		return ((T (*)(TaskDatas*, uintptr_t, bool))(Il2CppBase() + 0x43B8A70))(this, type, useDaySeed);
	}
	template <typename T = bool> T ContainsEnemy(Il2CppString* enemyId) {
		return ((T (*)(TaskDatas*, Il2CppString*))(Il2CppBase() + 0x43B90E0))(this, enemyId);
	}
	template <typename T = void> T AddDailyTask() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B74D0))(this);
	}
	template <typename T = void> T RefreshChallenge() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B9268))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T GetRewards(int32_t rewardLevel, uintptr_t random) {
		return ((T (*)(TaskDatas*, int32_t, uintptr_t))(Il2CppBase() + 0x43B8040))(this, rewardLevel, random);
	}
	template <typename T = void> T AddReward(Il2CppString* name, int32_t count, Il2CppDictionary<Il2CppString*, int32_t>* rewards) {
		return ((T (*)(TaskDatas*, Il2CppString*, int32_t, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x43B9460))(this, name, count, rewards);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(TaskDatas*))(Il2CppBase() + 0x43B95F8))(this);
	}

};

}
