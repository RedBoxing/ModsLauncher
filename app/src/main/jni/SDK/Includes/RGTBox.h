#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTBox"));
	}


	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(RGTBox*, uintptr_t))(Il2CppBase() + 0x43E2BFC))(this, source_object);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(RGTBox*, uintptr_t))(Il2CppBase() + 0x43E3008))(this, P0);
	}

};

}
