#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet05
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet05"));
	}


	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Bullet05*))(Il2CppBase() + 0x45A5E94))(this);
	}
	template <typename T = uintptr_t> T DirectionUpdating() {
		return ((T (*)(Bullet05*))(Il2CppBase() + 0x45A60C4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DirectionUpdating() {
		return ((T (*)(Bullet05*))(Il2CppBase() + 0x45A619C))(this);
	}

};

}
