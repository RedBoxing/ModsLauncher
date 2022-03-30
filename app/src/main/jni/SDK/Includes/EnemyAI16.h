#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI16"));
	}

	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& in_atk() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1C6F8))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1C85C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1CB54))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1CC60))(this);
	}
	template <typename T = void> T BeginAtk() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1CD70))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1CEB0))(this);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1D2FC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1D3C4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAI16*, int32_t, uintptr_t))(Il2CppBase() + 0x2A1D6F8))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1D978))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAI16*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2A1DAB8))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DBC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DE24))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DE2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DE34))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DE3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAI16*, int32_t, uintptr_t))(Il2CppBase() + 0x2A1DE44))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI16*))(Il2CppBase() + 0x2A1DE4C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAI16*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x2A1DE54))(this, P0, P1, P2, P3);
	}

};

}
