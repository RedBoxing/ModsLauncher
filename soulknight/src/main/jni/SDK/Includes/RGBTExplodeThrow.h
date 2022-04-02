#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTExplodeThrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTExplodeThrow"));
	}


	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGBTExplodeThrow*, uintptr_t))(Il2CppBase() + 0x1BB27F8))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGBTExplodeThrow*, uintptr_t))(Il2CppBase() + 0x1BB2C2C))(this, P0);
	}

};

}
