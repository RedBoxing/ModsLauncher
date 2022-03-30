#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun013
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun013"));
	}


	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x25708E4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x2570944))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x25709A8))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x2570BA4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x2570C9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x2570CA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun013*))(Il2CppBase() + 0x2570CAC))(this);
	}

};

}
