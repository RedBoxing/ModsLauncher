#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI01"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& hand2AtkInterval() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& hand2() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& hand2_tf() {
		return *(T*)((uintptr_t)this + 0x248);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B0790))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B09E4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B0D2C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B1204))(this);
	}
	template <typename T = void> T Hand2Atk() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B130C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B13E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B18D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B18D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B18E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI01*))(Il2CppBase() + 0x22B18E8))(this);
	}

};

}
