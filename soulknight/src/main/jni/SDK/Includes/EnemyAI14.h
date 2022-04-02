#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI14"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& atk1_cilp() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22BFC94))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22BFE2C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C0124))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C023C))(this);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C05A0))(this);
	}
	template <typename T = void> T RemoveLaser() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C0620))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C07B8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C0B44))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C0C28))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI14*, uintptr_t))(Il2CppBase() + 0x22C0E1C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C1278))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C1280))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C1288))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI14*))(Il2CppBase() + 0x22C1290))(this);
	}

};

}
