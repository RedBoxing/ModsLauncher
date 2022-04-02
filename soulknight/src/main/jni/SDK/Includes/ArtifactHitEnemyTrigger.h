#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactHitEnemyTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactHitEnemyTrigger"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& enemyType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& canTriggerOnHitObstacle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& defaultEmitterOnly() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = Il2CppString*> T& specifiedEmitterKey() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& excludeEmitterKey() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& needCirtical() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& needCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& needDifferent() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& resetCountOnSuccess() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& revertOnFailed() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = bool> T& passBulletAsArgument() {
		return *(T*)((uintptr_t)this + 0xCB);
	}
	template <typename T = uintptr_t> T& _attachedBulletEmitter() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& withDistanceConstraint() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& distanceConstraintType() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& distanceValue() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemies() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = bool> T get_isHit() {
		return ((T (*)(ArtifactHitEnemyTrigger*))(Il2CppBase() + 0x1CA3E5C))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA3EC4))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactHitEnemyTrigger*))(Il2CppBase() + 0x1CA4024))(this);
	}
	template <typename T = void> T OnHurtEnemy(uintptr_t data) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA4094))(this, data);
	}
	template <typename T = bool> T CheckEnemyType(uintptr_t e) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA49E0))(this, e);
	}
	template <typename T = bool> T IsBulletEmitterSatisfied(uintptr_t carrier) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA4784))(this, carrier);
	}
	template <typename T = bool> T IsDistanceConstraintSatisfied(uintptr_t e) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA458C))(this, e);
	}
	template <typename T = void> T OnEquipb__22_0() {
		return ((T (*)(ArtifactHitEnemyTrigger*))(Il2CppBase() + 0x1CA4C80))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactHitEnemyTrigger*, uintptr_t))(Il2CppBase() + 0x1CA4D24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactHitEnemyTrigger*))(Il2CppBase() + 0x1CA4D2C))(this);
	}

};

}
