#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTNT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTNT"));
	}

	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunTNT*))(Il2CppBase() + 0x217F6DC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTNT*))(Il2CppBase() + 0x217F780))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunTNT*))(Il2CppBase() + 0x217FC58))(this);
	}

};

}
