#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI09
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI09"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& in_atk1() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& atk1_cilp() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BA2B4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BA418))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BA7E8))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(EnemyAI09*, int32_t))(Il2CppBase() + 0x22BA884))(this, index);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BAAFC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BABC8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BAEFC))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAI09*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22BAFD8))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB0C0))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB120))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI09*, uintptr_t))(Il2CppBase() + 0x22BB314))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB410))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB418))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(EnemyAI09*, int32_t))(Il2CppBase() + 0x22BB420))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB428))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB430))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAI09*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22BB438))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_ReSetAtk() {
		return ((T (*)(EnemyAI09*))(Il2CppBase() + 0x22BB444))(this);
	}

};

}
