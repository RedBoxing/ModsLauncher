#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIStatic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIStatic"));
	}

	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& enemyShoot() {
		return *(T*)((uintptr_t)this + 0x240);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD76F0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD787C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD78D8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD7DC4))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD7EF4))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD7F7C))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD80CC))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD82C0))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAIStatic*, float, bool))(Il2CppBase() + 0x1FD83B8))(this, duration, isFreeze);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD8504))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD850C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD8514))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD851C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD8524))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAIStatic*))(Il2CppBase() + 0x1FD852C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAIStatic*, float, bool))(Il2CppBase() + 0x1FD8534))(this, P0, P1);
	}

};

}
