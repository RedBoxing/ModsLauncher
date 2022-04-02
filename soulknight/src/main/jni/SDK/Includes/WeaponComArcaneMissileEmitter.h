#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComArcaneMissileEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComArcaneMissileEmitter"));
	}

	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& emitAngleRange() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& emitDistanceRange() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedHit() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = void> T _EmitBulletInAttack(int32_t atkSequence, float chargeAmount) {
		return ((T (*)(WeaponComArcaneMissileEmitter*, int32_t, float))(Il2CppBase() + 0x2018D64))(this, atkSequence, chargeAmount);
	}
	template <typename T = void> T _EmitBullets() {
		return ((T (*)(WeaponComArcaneMissileEmitter*))(Il2CppBase() + 0x2018DEC))(this);
	}
	template <typename T = void> T iFixBaseProxy__EmitBulletInAttack(int32_t P0, float P1) {
		return ((T (*)(WeaponComArcaneMissileEmitter*, int32_t, float))(Il2CppBase() + 0x201928C))(this, P0, P1);
	}

};

}
