#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI21"));
	}

	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& swordAtk() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& bulletPivotTransform() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& shootDistance() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = Il2CppVector3> T& shootOffset() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = uintptr_t> T& bodyRenderer() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraRenderers() {
		return *(T*)((uintptr_t)this + 0x268);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A22FA0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23134))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23190))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2367C))(this);
	}
	template <typename T = void> T Atk(bool isInversed) {
		return ((T (*)(EnemyAI21*, bool))(Il2CppBase() + 0x2A238C8))(this, isInversed);
	}
	template <typename T = void> T NormalAtk() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23BBC))(this);
	}
	template <typename T = void> T InversedAtk() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23C20))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23C84))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A23F2C))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2407C))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24270))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(EnemyAI21*, float, bool))(Il2CppBase() + 0x2A24360))(this, duration, isFreeze);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24444))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2450C))(this);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A245F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24744))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2474C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24754))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2475C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24764))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A2476C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(EnemyAI21*, float, bool))(Il2CppBase() + 0x2A24774))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_HitBack() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24780))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetBodyHit() {
		return ((T (*)(EnemyAI21*))(Il2CppBase() + 0x2A24788))(this);
	}

};

}
