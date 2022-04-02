#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCreateDot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCreateDot"));
	}


	template <typename T = void> T OnCreate(uintptr_t go) {
		return ((T (*)(GunCreateDot*, uintptr_t))(Il2CppBase() + 0x24901C4))(this, go);
	}
	template <typename T = void> T iFixBaseProxy_OnCreate(uintptr_t P0) {
		return ((T (*)(GunCreateDot*, uintptr_t))(Il2CppBase() + 0x2490378))(this, P0);
	}

};

}
