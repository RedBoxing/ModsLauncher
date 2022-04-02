#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI05
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI05"));
	}

	template <typename T = uintptr_t> T& mineral_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& sprite_dead() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& mineral_count() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& intensive_rate() {
		return *(T*)((uintptr_t)this + 0x24C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI05*))(Il2CppBase() + 0x22B4B2C))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(EnemyAI05*))(Il2CppBase() + 0x22B4C60))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI05*))(Il2CppBase() + 0x22B4FF4))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAI05*, uintptr_t, bool))(Il2CppBase() + 0x22B5050))(this, source_object, sync);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI05*, float, bool))(Il2CppBase() + 0x22B56B0))(this, duration, isFreeze);
	}
	template <typename T = void> static T Deadg__AddRandomForce|7_0(uintptr_t coin) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22B5608))(0, coin);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(EnemyAI05*))(Il2CppBase() + 0x22B57A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI05*))(Il2CppBase() + 0x22B57B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAI05*, uintptr_t, bool))(Il2CppBase() + 0x22B57B8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI05*, float, bool))(Il2CppBase() + 0x22B57C4))(this, P0, P1);
	}

};

}
