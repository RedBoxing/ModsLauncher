#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxRoom"));
	}


	template <typename T = bool> T Placable(Il2CppVector3 position) {
		return ((T (*)(GunBoxRoom*, Il2CppVector3))(Il2CppBase() + 0x2584CAC))(this, position);
	}
	template <typename T = bool> T iFixBaseProxy_Placable(Il2CppVector3 P0) {
		return ((T (*)(GunBoxRoom*, Il2CppVector3))(Il2CppBase() + 0x2584F94))(this, P0);
	}

};

}
