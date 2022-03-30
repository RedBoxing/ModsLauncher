#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SuperShotGunExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SuperShotGunExtra"));
	}

	template <typename T = uintptr_t> T& hookRopeLineRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hookRopeTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rotationTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hookParentTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& releaseSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& shrinkSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& hookRopeBulletIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& triggerBoxSize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& triggerBoxOffset() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& hookInitPosition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& receiveRadius() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& coldDown() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& buffTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _releaseAngle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& _releaseDirection() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _triggerEnemy() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _enemyRigidBody() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& _triggerEnemySpeed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& _enemyTargetPosition() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& _triggerTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isSpecial() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& startWeapon() {
		return *(T*)((uintptr_t)this + 0xCD);
	}

	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A7130))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(SuperShotGunExtra*, bool))(Il2CppBase() + 0x42A7138))(this, isDown);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A757C))(this);
	}
	template <typename T = void> T ReleaseHook() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A7208))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A77BC))(this);
	}
	template <typename T = void> T ShrinkUpdate() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A7C84))(this);
	}
	template <typename T = void> T ShrinkEnd() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A8100))(this);
	}
	template <typename T = Il2CppString*> T get_EnemySpeedChangeId() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A8830))(this);
	}
	template <typename T = void> T HookEnemyEnd() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A8478))(this);
	}
	template <typename T = void> T ReleaseUpdate() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A784C))(this);
	}
	template <typename T = void> T UpdateLineRenderer() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A82E8))(this);
	}
	template <typename T = void> T HookHitEnemy(uintptr_t collider) {
		return ((T (*)(SuperShotGunExtra*, uintptr_t))(Il2CppBase() + 0x42A8BA0))(this, collider);
	}
	template <typename T = void> T HookHitBox(uintptr_t collider) {
		return ((T (*)(SuperShotGunExtra*, uintptr_t))(Il2CppBase() + 0x42A8918))(this, collider);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A8F04))(this);
	}
	template <typename T = void> T Awakeb__30_0() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A91B0))(this);
	}
	template <typename T = void> T Awakeb__30_1() {
		return ((T (*)(SuperShotGunExtra*))(Il2CppBase() + 0x42A91BC))(this);
	}

};

}
