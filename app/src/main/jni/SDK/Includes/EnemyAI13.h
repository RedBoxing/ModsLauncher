#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI13"));
	}

	template <typename T = bool> T& boom_light() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& boom() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& secondBoom() {
		return *(T*)((uintptr_t)this + 0x248);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BE978))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BEE6C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BF328))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BF590))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BF8C4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI13*, uintptr_t))(Il2CppBase() + 0x22BFA18))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BFC74))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BFC7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BFC84))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI13*))(Il2CppBase() + 0x22BFC8C))(this);
	}

};

}
