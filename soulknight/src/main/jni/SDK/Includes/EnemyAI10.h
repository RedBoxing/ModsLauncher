#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI10"));
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

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BB44C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BB5B0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BB8A8))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BB9B8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BBD48))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAI10*, int32_t, uintptr_t))(Il2CppBase() + 0x22BC07C))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC2F4))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC3D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC634))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC63C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC644))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAI10*, int32_t, uintptr_t))(Il2CppBase() + 0x22BC64C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI10*))(Il2CppBase() + 0x22BC654))(this);
	}

};

}
