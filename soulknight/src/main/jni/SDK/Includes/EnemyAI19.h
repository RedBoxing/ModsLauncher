#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI19"));
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
	template <typename T = Il2CppString*> T& hand1_path() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppString*> T& hand2_path() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& hand_tf2() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& hand2() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A2068C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A20920))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A20CA0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A2115C))(this);
	}
	template <typename T = void> T StopShooting() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21324))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21430))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAI19*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2A21598))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T HandLockTarget() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A216A0))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI19*, float, bool))(Il2CppBase() + 0x2A217B4))(this, duration, isFreeze);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21874))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21CDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21CE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21CEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21CF4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAI19*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2A21CFC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_HandLockTarget() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21D08))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI19*, float, bool))(Il2CppBase() + 0x2A21D10))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI19*))(Il2CppBase() + 0x2A21D1C))(this);
	}

};

}
