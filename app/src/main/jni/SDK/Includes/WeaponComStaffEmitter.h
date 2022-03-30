#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComStaffEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComStaffEmitter"));
	}

	template <typename T = bool> T& allEnemy() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& maxEnemyCount() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _linecastCache() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = void> T _EmitBulletInAttack(int32_t atkSequence, float chargeAmount) {
		return ((T (*)(WeaponComStaffEmitter*, int32_t, float))(Il2CppBase() + 0x448F308))(this, atkSequence, chargeAmount);
	}
	template <typename T = void> T iFixBaseProxy__EmitBulletInAttack(int32_t P0, float P1) {
		return ((T (*)(WeaponComStaffEmitter*, int32_t, float))(Il2CppBase() + 0x4490274))(this, P0, P1);
	}

};

}
