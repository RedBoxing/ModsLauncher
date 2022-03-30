#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectExplodeBoxRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectExplodeBoxRace"));
	}


	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(ObjectExplodeBoxRace*, uintptr_t))(Il2CppBase() + 0x1D56D80))(this, source_object);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(ObjectExplodeBoxRace*, uintptr_t))(Il2CppBase() + 0x1D56FA0))(this, P0);
	}

};

}
