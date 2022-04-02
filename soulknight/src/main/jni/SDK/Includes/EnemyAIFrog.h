#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIFrog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIFrog"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& inAttack() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2A148))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2A2AC))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2A590))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2AAE4))(this);
	}
	template <typename T = void> T Jump() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2A968))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2ABE8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2AF84))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B2B8))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B324))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAIFrog*, uintptr_t))(Il2CppBase() + 0x2A2B518))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B60C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B614))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B61C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B624))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIFrog*))(Il2CppBase() + 0x2A2B62C))(this);
	}

};

}
