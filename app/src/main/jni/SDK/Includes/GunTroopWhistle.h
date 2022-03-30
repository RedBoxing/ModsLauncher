#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTroopWhistle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTroopWhistle"));
	}

	template <typename T = uintptr_t> T& onClip() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& offClip() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunTroopWhistle*, bool, bool))(Il2CppBase() + 0x1A20684))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTroopWhistle*))(Il2CppBase() + 0x1A207D4))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(GunTroopWhistle*))(Il2CppBase() + 0x1A20B60))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunTroopWhistle*, bool, bool))(Il2CppBase() + 0x1A20D24))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(GunTroopWhistle*))(Il2CppBase() + 0x1A20D34))(this);
	}

};

}
