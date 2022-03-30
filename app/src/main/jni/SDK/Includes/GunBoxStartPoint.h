#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxStartPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxStartPoint"));
	}


	template <typename T = bool> T Placable(Il2CppVector3 position) {
		return ((T (*)(GunBoxStartPoint*, Il2CppVector3))(Il2CppBase() + 0x2584F98))(this, position);
	}
	template <typename T = void> T OnBoxPlayced(uintptr_t box) {
		return ((T (*)(GunBoxStartPoint*, uintptr_t))(Il2CppBase() + 0x2585028))(this, box);
	}
	template <typename T = bool> T iFixBaseProxy_Placable(Il2CppVector3 P0) {
		return ((T (*)(GunBoxStartPoint*, Il2CppVector3))(Il2CppBase() + 0x25850C8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBoxPlayced(uintptr_t P0) {
		return ((T (*)(GunBoxStartPoint*, uintptr_t))(Il2CppBase() + 0x25850CC))(this, P0);
	}

};

}
