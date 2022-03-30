#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffPoison
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffPoison"));
	}


	template <typename T = int32_t> T get_deltaDamage() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CCD4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CD74))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CE80))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_deltaDamage() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CFB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CFB8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(BuffPoison*))(Il2CppBase() + 0x459CFC0))(this);
	}

};

}
