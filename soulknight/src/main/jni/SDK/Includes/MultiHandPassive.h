#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiHandPassive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiHandPassive"));
	}


	template <typename T = void> T Activate() {
		return ((T (*)(MultiHandPassive*))(Il2CppBase() + 0x4371D88))(this);
	}
	template <typename T = void> T InActivate() {
		return ((T (*)(MultiHandPassive*))(Il2CppBase() + 0x4371ECC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Activate() {
		return ((T (*)(MultiHandPassive*))(Il2CppBase() + 0x4372014))(this);
	}
	template <typename T = void> T iFixBaseProxy_InActivate() {
		return ((T (*)(MultiHandPassive*))(Il2CppBase() + 0x4372018))(this);
	}

};

}
