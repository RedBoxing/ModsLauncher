#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI11"));
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
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& atk_count() {
		return *(T*)((uintptr_t)this + 0x260);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BC65C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BC7F4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BCA9C))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BCBF8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD0B4))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD434))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD510))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD778))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD780))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD788))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI11*))(Il2CppBase() + 0x22BD790))(this);
	}

};

}
