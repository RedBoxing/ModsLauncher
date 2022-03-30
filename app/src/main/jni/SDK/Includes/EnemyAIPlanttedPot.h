#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIPlanttedPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIPlanttedPot"));
	}

	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A34DCC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A34F58))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A34FB4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A354A0))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A355B4))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A3563C))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A356C4))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35814))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35A08))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIPlanttedPot*, float, bool))(Il2CppBase() + 0x2A35B00))(this, duration, isFreeze);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C54))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C64))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAIPlanttedPot*))(Il2CppBase() + 0x2A35C74))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIPlanttedPot*, float, bool))(Il2CppBase() + 0x2A35C7C))(this, P0, P1);
	}

};

}
