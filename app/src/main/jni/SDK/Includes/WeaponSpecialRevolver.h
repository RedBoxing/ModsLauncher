#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponSpecialRevolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSpecialRevolver"));
	}

	template <typename T = uintptr_t> T& revolverPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& revolverRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& throwTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& shootDelayTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& shootTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& afterShootTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& shootAngleVelocity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& triggerInterval() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& shootCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extraShootBuff() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& extraShootCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& coldDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& consumeFactor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _isSpecial() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& weaponCache() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& castTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = int32_t> T get_consume() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FEE2C))(this);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FEF18))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FEFA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FF004))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(WeaponSpecialRevolver*, bool))(Il2CppBase() + 0x45FF0C0))(this, isDown);
	}
	template <typename T = Il2CppVector3> T GetTargetPosition() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FF8A0))(this);
	}
	template <typename T = Il2CppVector3> T get_initPosition() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FFE3C))(this);
	}
	template <typename T = void> T RevolverThrow() {
		return ((T (*)(WeaponSpecialRevolver*))(Il2CppBase() + 0x45FF2A8))(this);
	}

};

}
