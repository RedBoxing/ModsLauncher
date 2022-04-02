#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MercenaryPharaoh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MercenaryPharaoh"));
	}

	template <typename T = bool> T& anubisTalked() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = bool> T CanPickWeapon(uintptr_t weapon) {
		return ((T (*)(MercenaryPharaoh*, uintptr_t))(Il2CppBase() + 0x41E771C))(this, weapon);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(MercenaryPharaoh*))(Il2CppBase() + 0x41E78C4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanPickWeapon(uintptr_t P0) {
		return ((T (*)(MercenaryPharaoh*, uintptr_t))(Il2CppBase() + 0x41E7A44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(MercenaryPharaoh*))(Il2CppBase() + 0x41E7A4C))(this);
	}

};

}
