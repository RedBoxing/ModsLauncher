#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffFire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffFire"));
	}


	template <typename T = int32_t> T get_deltaDamage() {
		return ((T (*)(BuffFire*))(Il2CppBase() + 0x4599580))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BuffFire*))(Il2CppBase() + 0x4599618))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_deltaDamage() {
		return ((T (*)(BuffFire*))(Il2CppBase() + 0x4599748))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(BuffFire*))(Il2CppBase() + 0x4599750))(this);
	}

};

}
