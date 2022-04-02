#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComGodPower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComGodPower"));
	}

	template <typename T = Il2CppString*> T& godPowerId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Cast(float power) {
		return ((T (*)(WeaponComGodPower*, float))(Il2CppBase() + 0x4483328))(this, power);
	}
	template <typename T = void> T Cast_1(float power, Il2CppVector3 castPos) {
		return ((T (*)(WeaponComGodPower*, float, Il2CppVector3))(Il2CppBase() + 0x44857F8))(this, power, castPos);
	}
	template <typename T = void> T Cast_2(float power, uintptr_t target) {
		return ((T (*)(WeaponComGodPower*, float, uintptr_t))(Il2CppBase() + 0x44858A0))(this, power, target);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponComGodPower*))(Il2CppBase() + 0x4485980))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(WeaponComGodPower*))(Il2CppBase() + 0x44859EC))(this);
	}

};

}
