#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAILilWorm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAILilWorm"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppVector3> T& downOffset() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& enemySize() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& downAtkTime() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = uintptr_t> T& downAtkPositionCurve() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& downAttack() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& upAttack() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& downReleaseDuration() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& dirtPrefab() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& downThornBullet() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = Il2CppString*> T& downIdleStateName() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = Il2CppVector2> T& _downAtkTargetPoint() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = float> T& _downAtkStartTime() {
		return *(T*)((uintptr_t)this + 0x294);
	}
	template <typename T = Il2CppVector2> T& _downAtkInitPosition() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& _hitCollider() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& _dirtTransform() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = float> T& _downReleaseStartTime() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2CD08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2CE3C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2D178))(this);
	}
	template <typename T = void> T DownUpdate() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2CF08))(this);
	}
	template <typename T = void> T DownAtkUpdate() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2D554))(this);
	}
	template <typename T = void> T UpdateVelocity() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2D200))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2D6D8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2DC88))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2DD58))(this);
	}
	template <typename T = void> T DownAtkStart() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E088))(this);
	}
	template <typename T = void> T DownAttack() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E35C))(this);
	}
	template <typename T = void> T UpAttack() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E400))(this);
	}
	template <typename T = void> T DownAtkEnd() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E4A4))(this);
	}
	template <typename T = void> T InstantiateDirt() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E544))(this);
	}
	template <typename T = void> T UpAtkEnd() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E898))(this);
	}
	template <typename T = void> T UpAtkStart() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E8F8))(this);
	}
	template <typename T = void> T DirtFadeOut() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2E978))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EB1C))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EC40))(this);
	}
	template <typename T = void> T DirtFadeOutb__34_0() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2ED90))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EDDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EDE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EDEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EDF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EDFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAILilWorm*))(Il2CppBase() + 0x2A2EE04))(this);
	}

};

}
