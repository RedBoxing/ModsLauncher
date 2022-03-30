#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerBulletHitEnemyEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerBulletHitEnemyEvent"));
	}

	template <typename T = uintptr_t> T& sourceObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sourceWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isCritical() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& damageTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& damageCarrier() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& hitPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T UseCache(uintptr_t e, int32_t dmg, bool isCrit, uintptr_t trigger, uintptr_t carrier, uintptr_t sourceObj, uintptr_t sourceWeapon, Il2CppVector3 hit_pos) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x439A810))(0, e, dmg, isCrit, trigger, carrier, sourceObj, sourceWeapon, hit_pos);
	}

};

}
