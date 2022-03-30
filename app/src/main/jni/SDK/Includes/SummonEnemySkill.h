#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonEnemySkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonEnemySkill"));
	}

	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _currentReleaseCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _room() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _summons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _summonCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8B368))(this);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8B628))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8B6D8))(this);
	}
	template <typename T = void> T OnEnemyDead(uintptr_t enemy) {
		return ((T (*)(SummonEnemySkill*, uintptr_t))(Il2CppBase() + 0x1B8B898))(this, enemy);
	}
	template <typename T = void> T OnEnemySplit(uintptr_t e) {
		return ((T (*)(SummonEnemySkill*, uintptr_t))(Il2CppBase() + 0x1B8BA70))(this, e);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8BCB0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8BFE8))(this);
	}
	template <typename T = int32_t> T GetAliveSummons() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8B418))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_AngryWeight() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8C5DC))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_NormalWeight() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8C5E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SummonEnemySkill*))(Il2CppBase() + 0x1B8C5E4))(this);
	}

};

}
