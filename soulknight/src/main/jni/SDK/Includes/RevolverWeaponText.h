#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RevolverWeaponText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RevolverWeaponText"));
	}

	template <typename T = Il2CppString*> T& defaultDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& defaultConsume() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& defaultCritical() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& defaultDeviation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& weaponCache() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& revolverCache() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_damage() {
		return ((T (*)(RevolverWeaponText*))(Il2CppBase() + 0x204B0F0))(this);
	}
	template <typename T = Il2CppString*> T get_consume() {
		return ((T (*)(RevolverWeaponText*))(Il2CppBase() + 0x204B2E0))(this);
	}
	template <typename T = Il2CppString*> T get_critical() {
		return ((T (*)(RevolverWeaponText*))(Il2CppBase() + 0x204B4CC))(this);
	}
	template <typename T = Il2CppString*> T get_deviation() {
		return ((T (*)(RevolverWeaponText*))(Il2CppBase() + 0x204B608))(this);
	}

};

}
