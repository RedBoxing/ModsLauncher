#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI12"));
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
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BD798))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BD950))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BDBF8))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(EnemyAI12*, int32_t))(Il2CppBase() + 0x22BDC94))(this, index);
	}
	template <typename T = void> T CreateFireBall() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BDDE0))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE1BC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE2D8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE60C))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE6E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE950))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE958))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(EnemyAI12*, int32_t))(Il2CppBase() + 0x22BE960))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE968))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI12*))(Il2CppBase() + 0x22BE970))(this);
	}

};

}
