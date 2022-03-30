#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSectorBulletEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSectorBulletEmitter"));
	}

	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& randomAddEmitCount() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& innerRadius() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& fullCircle() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& angleFixed() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& fixedAngle() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& dontRotateBullet() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& randomStartRotate() {
		return *(T*)((uintptr_t)this + 0x169);
	}

	template <typename T = void> T _EmitBulletInAttack(int32_t atkSequence, float chargeAmount) {
		return ((T (*)(WeaponComSectorBulletEmitter*, int32_t, float))(Il2CppBase() + 0x448C9F0))(this, atkSequence, chargeAmount);
	}
	template <typename T = void> T iFixBaseProxy__EmitBulletInAttack(int32_t P0, float P1) {
		return ((T (*)(WeaponComSectorBulletEmitter*, int32_t, float))(Il2CppBase() + 0x448D9D0))(this, P0, P1);
	}

};

}
