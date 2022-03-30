#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonScarab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonScarab"));
	}

	template <typename T = int32_t> T& _currentCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _enemyCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemyControllers() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _releaseBullet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _summonCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _relicFallBoss() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B95210))(this);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B9551C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B95680))(this);
	}
	template <typename T = void> T OnEnemySplit(uintptr_t e) {
		return ((T (*)(SummonScarab*, uintptr_t))(Il2CppBase() + 0x1B95764))(this, e);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B95990))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B95B98))(this);
	}
	template <typename T = int32_t> T GetEnemyCount() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B95374))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_AngryWeight() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B964C8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_NormalWeight() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B964CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SummonScarab*))(Il2CppBase() + 0x1B964D0))(this);
	}

};

}
