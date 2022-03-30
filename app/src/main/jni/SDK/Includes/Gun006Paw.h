#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun006Paw
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun006Paw"));
	}

	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasAddAttack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& lastController() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_sword() {
		return ((T (*)(Gun006Paw*))(Il2CppBase() + 0x4623560))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun006Paw*))(Il2CppBase() + 0x4622ED0))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun006Paw*))(Il2CppBase() + 0x46232A4))(this);
	}

};

}
