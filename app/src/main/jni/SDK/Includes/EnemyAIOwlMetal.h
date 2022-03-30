#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIOwlMetal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIOwlMetal"));
	}

	template <typename T = float> T& flySpeed() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& airStrikeCount() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& airStrikeTimes() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& airStrikeBombPrefab() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& airStrikeExplode() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& dropSpeed() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& targetPrefab() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = Il2CppVector3> T& _flyVec() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = int32_t> T& _airStrikedTimes() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = Il2CppVector3> T& _attackPosition() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = int32_t> T& _attackState() {
		return *(T*)((uintptr_t)this + 0x29C);
	}
	template <typename T = bool> T& _hasLandPos() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}

	template <typename T = bool> T get_flying() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A3345C))(this);
	}
	template <typename T = void> T set_flying(bool value) {
		return ((T (*)(EnemyAIOwlMetal*, bool))(Il2CppBase() + 0x2A33500))(this, value);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A336E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A33BC0))(this);
	}
	template <typename T = void> T Updateb__16_2() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A34B6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A34C14))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(EnemyAIOwlMetal*))(Il2CppBase() + 0x2A34C1C))(this);
	}

};

}
