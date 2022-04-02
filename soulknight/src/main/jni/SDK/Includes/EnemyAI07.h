#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI07
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI07"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& in_atk1() {
		return *(T*)((uintptr_t)this + 0x239);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& atk1_cilp() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& atk2_clip() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B68AC))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B6A9C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAI07*, int32_t, uintptr_t))(Il2CppBase() + 0x22B6EF8))(this, damage, source_object);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B6F98))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(EnemyAI07*, int32_t))(Il2CppBase() + 0x22B70BC))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B71B0))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAI07*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22B7530))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7618))(this);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B76F4))(this);
	}
	template <typename T = void> T EndAtk1() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B77AC))(this);
	}
	template <typename T = void> T Atk2() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B781C))(this);
	}
	template <typename T = void> T EndAtk2() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7678))(this);
	}
	template <typename T = void> T Atk3() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7C18))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7EFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAI07*, int32_t, uintptr_t))(Il2CppBase() + 0x22B7F04))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7F0C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(EnemyAI07*, int32_t))(Il2CppBase() + 0x22B7F14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7F1C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAI07*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x22B7F24))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_ReSetAtk() {
		return ((T (*)(EnemyAI07*))(Il2CppBase() + 0x22B7F30))(this);
	}

};

}
