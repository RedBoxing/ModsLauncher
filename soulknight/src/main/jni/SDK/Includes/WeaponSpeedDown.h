#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponSpeedDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSpeedDown"));
	}

	template <typename T = float> T& speedDown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _hasChangedSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ignoreMount() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponSpeedDown*))(Il2CppBase() + 0x4600080))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(WeaponSpeedDown*))(Il2CppBase() + 0x46001B0))(this);
	}
	template <typename T = void> T StopUseWeapon() {
		return ((T (*)(WeaponSpeedDown*))(Il2CppBase() + 0x46003FC))(this);
	}

};

}
