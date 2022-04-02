#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletHook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletHook"));
	}

	template <typename T = uintptr_t> T& hookRopeLineRenderer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& hookRopeTransform() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& rotationTransform() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& hookParentTransform() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& shrinkSpeed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector2> T& triggerBoxSize() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector2> T& triggerBoxOffset() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppVector2> T& hookInitPosition() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& receiveRadius() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& buffTime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& _releaseAngle() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppVector3> T& _releaseDirection() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _triggerEnemy() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _enemyRigidBody() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& _triggerEnemySpeed() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppVector3> T& _enemyTargetPosition() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& isSpecial() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& destroy() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237D998))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237D9A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237DA24))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237DEAC))(this);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237E064))(this);
	}
	template <typename T = void> T ReleaseHook() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237DB44))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237E0C0))(this);
	}
	template <typename T = void> T ShrinkUpdate() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237E650))(this);
	}
	template <typename T = void> T ShrinkEnd() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237E9B0))(this);
	}
	template <typename T = Il2CppString*> T get_EnemySpeedChangeId() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237F160))(this);
	}
	template <typename T = void> T HookEnemyEnd() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237EDA8))(this);
	}
	template <typename T = void> T ReleaseUpdate() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237E24C))(this);
	}
	template <typename T = void> T UpdateLineRenderer() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237EC14))(this);
	}
	template <typename T = void> T HookHitEnemy(uintptr_t collider) {
		return ((T (*)(BulletHook*, uintptr_t))(Il2CppBase() + 0x237F4A0))(this, collider);
	}
	template <typename T = void> T HookHitBox(uintptr_t collider) {
		return ((T (*)(BulletHook*, uintptr_t))(Il2CppBase() + 0x237F248))(this, collider);
	}
	template <typename T = void> T StopDestroyHook() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237DFD0))(this);
	}
	template <typename T = void> T Destroying() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237F844))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237FD08))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237FD10))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237FD18))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(BulletHook*))(Il2CppBase() + 0x237FD20))(this);
	}

};

}
