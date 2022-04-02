#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI02"));
	}

	template <typename T = float> T& atk_range() {
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
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B18F0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B1B44))(this);
	}
	template <typename T = void> T RevertSpeedRate() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B1FF4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2090))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2440))(this);
	}
	template <typename T = void> T Hand2Atk() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B252C))(this);
	}
	template <typename T = void> T ShootReflectionByDeadBody() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2608))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B26D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2B64))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2B6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2B74))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflectionByDeadBody() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2B7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI02*))(Il2CppBase() + 0x22B2B84))(this);
	}

};

}
