#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI03
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI03"));
	}

	template <typename T = float> T& shoot_time() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& stand_in_shooting() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = bool> T& lock_in_shooting() {
		return *(T*)((uintptr_t)this + 0x23D);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B2B8C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B2D48))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B30A4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3560))(this);
	}
	template <typename T = void> T StopShooting() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B36D0))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3768))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI03*, float, bool))(Il2CppBase() + 0x22B37C8))(this, duration, isFreeze);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3888))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3C34))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAI03*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22B3CAC))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E14))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E24))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI03*, float, bool))(Il2CppBase() + 0x22B3E34))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E40))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI03*))(Il2CppBase() + 0x22B3E48))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAI03*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22B3E50))(this, P0, P1, P2, P3);
	}

};

}
