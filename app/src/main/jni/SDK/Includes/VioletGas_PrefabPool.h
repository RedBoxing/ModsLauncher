#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VioletGasPrefabPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VioletGas_PrefabPool"));
	}


	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(VioletGasPrefabPool*, float))(Il2CppBase() + 0x435CB7C))(this, totalTime);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Destroying(float P0) {
		return ((T (*)(VioletGasPrefabPool*, float))(Il2CppBase() + 0x435CC8C))(this, P0);
	}

};

}
