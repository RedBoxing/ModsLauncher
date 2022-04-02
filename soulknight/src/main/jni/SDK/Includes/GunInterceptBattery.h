#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInterceptBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInterceptBattery"));
	}


	template <typename T = void> T Attack() {
		return ((T (*)(GunInterceptBattery*))(Il2CppBase() + 0x2279274))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunInterceptBattery*))(Il2CppBase() + 0x227A574))(this);
	}

};

}
