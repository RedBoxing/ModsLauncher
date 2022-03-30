#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI17"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& delta_angle() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x250);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1DE60))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1DF94))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1DFF0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1E4DC))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1E5F0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1E9F0))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1ED24))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1EE74))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F068))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI17*, float, bool))(Il2CppBase() + 0x2A1F160))(this, duration, isFreeze);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAI17*))(Il2CppBase() + 0x2A1F2E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI17*, float, bool))(Il2CppBase() + 0x2A1F2F0))(this, P0, P1);
	}

};

}
