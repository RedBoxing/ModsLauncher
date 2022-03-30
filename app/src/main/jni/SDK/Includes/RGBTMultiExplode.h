#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTMultiExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTMultiExplode"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& explosions() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T ExplodeStart() {
		return ((T (*)(RGBTMultiExplode*))(Il2CppBase() + 0x1BB34A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExplodeStart() {
		return ((T (*)(RGBTMultiExplode*))(Il2CppBase() + 0x1BB3858))(this);
	}

};

}
