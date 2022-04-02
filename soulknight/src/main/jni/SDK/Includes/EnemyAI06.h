#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI06
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI06"));
	}

	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B57D0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B595C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B59B8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B5EA4))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B5FB8))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6040))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B62E8))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6438))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B662C))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI06*, float, bool))(Il2CppBase() + 0x22B6724))(this, duration, isFreeze);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6870))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6878))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6880))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6888))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6890))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAI06*))(Il2CppBase() + 0x22B6898))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI06*, float, bool))(Il2CppBase() + 0x22B68A0))(this, P0, P1);
	}

};

}
