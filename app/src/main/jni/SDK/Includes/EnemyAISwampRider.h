#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAISwampRider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAISwampRider"));
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
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& spearBullet() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& spearAtkClip() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& spearTransform() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppVector3> T& spearReleaseOffset() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& spearDistance() {
		return *(T*)((uintptr_t)this + 0x274);
	}
	template <typename T = uintptr_t> T& spearParent() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = Il2CppString*> T& spearAttackAnimKey() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = int32_t> T& _spearAttackAnimId() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = bool> T& _inAtk1() {
		return *(T*)((uintptr_t)this + 0x28C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDD35C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDD4D4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDD8A4))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(EnemyAISwampRider*, int32_t))(Il2CppBase() + 0x1FDDA8C))(this, index);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDDD74))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDDE40))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDE1F4))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAISwampRider*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FDE2D0))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDE3B8))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDE418))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAISwampRider*, uintptr_t))(Il2CppBase() + 0x1FDE60C))(this, other);
	}
	template <typename T = void> T SpearAttack() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDE690))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDE988))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDEB6C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDEB74))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(EnemyAISwampRider*, int32_t))(Il2CppBase() + 0x1FDEB7C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDEB84))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDEB8C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAISwampRider*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FDEB94))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_ReSetAtk() {
		return ((T (*)(EnemyAISwampRider*))(Il2CppBase() + 0x1FDEBA0))(this);
	}

};

}
