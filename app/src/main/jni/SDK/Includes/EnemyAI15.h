#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI15"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& bullet01_speed() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& atk1_clip() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& atk2_clip() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = bool> T& atk1Only() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1B4C4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1B680))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1BADC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1BC48))(this);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1BFC8))(this);
	}
	template <typename T = void> T Atk2() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1C30C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1C6E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1C6E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI15*))(Il2CppBase() + 0x2A1C6F0))(this);
	}

};

}
