#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIMultiroomGiantSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIMultiroomGiantSword"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& hitClips() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& hot() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& hot_max() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& hotPointPerHit() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = float> T& coolDownRate() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& hot_renderer() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& hotColor() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = bool> T& canCoolDown() {
		return *(T*)((uintptr_t)this + 0x278);
	}

	template <typename T = void> T Start() {
		return ((T (*)(EnemyAIMultiroomGiantSword*))(Il2CppBase() + 0x2A30594))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIMultiroomGiantSword*, int32_t, uintptr_t))(Il2CppBase() + 0x2A30684))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(EnemyAIMultiroomGiantSword*, int32_t))(Il2CppBase() + 0x2A30934))(this, damage);
	}
	template <typename T = void> T CoolDown() {
		return ((T (*)(EnemyAIMultiroomGiantSword*))(Il2CppBase() + 0x2A30A7C))(this);
	}
	template <typename T = void> T ChangeHotValue(int32_t value) {
		return ((T (*)(EnemyAIMultiroomGiantSword*, int32_t))(Il2CppBase() + 0x2A30804))(this, value);
	}
	template <typename T = void> T StartCoolDown() {
		return ((T (*)(EnemyAIMultiroomGiantSword*))(Il2CppBase() + 0x2A30BC0))(this);
	}
	template <typename T = void> T OnHotChange() {
		return ((T (*)(EnemyAIMultiroomGiantSword*))(Il2CppBase() + 0x2A30B00))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIMultiroomGiantSword*, int32_t, uintptr_t))(Il2CppBase() + 0x2A30CA8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(EnemyAIMultiroomGiantSword*, int32_t))(Il2CppBase() + 0x2A30CAC))(this, P0);
	}

};

}
