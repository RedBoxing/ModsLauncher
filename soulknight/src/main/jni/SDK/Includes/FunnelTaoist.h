#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FunnelTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunnelTaoist"));
	}

	template <typename T = float> T& originFocusTime() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& originAtkCd() {
		return *(T*)((uintptr_t)this + 0x194);
	}

	template <typename T = float> T get_minDistance() {
		return ((T (*)(FunnelTaoist*))(Il2CppBase() + 0x4425224))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FunnelTaoist*))(Il2CppBase() + 0x4425314))(this);
	}
	template <typename T = void> T SetWeapon(uintptr_t weapon) {
		return ((T (*)(FunnelTaoist*, uintptr_t))(Il2CppBase() + 0x4425588))(this, weapon);
	}
	template <typename T = float> T iFixBaseProxy_get_minDistance() {
		return ((T (*)(FunnelTaoist*))(Il2CppBase() + 0x4425C14))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(FunnelTaoist*))(Il2CppBase() + 0x4425C78))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeapon(uintptr_t P0) {
		return ((T (*)(FunnelTaoist*, uintptr_t))(Il2CppBase() + 0x4425C7C))(this, P0);
	}

};

}
