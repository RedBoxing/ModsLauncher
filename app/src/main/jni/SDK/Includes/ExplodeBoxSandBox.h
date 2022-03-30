#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeBoxSandBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeBoxSandBox"));
	}


	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(ExplodeBoxSandBox*, uintptr_t))(Il2CppBase() + 0x4466B90))(this, source_object);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(ExplodeBoxSandBox*, uintptr_t))(Il2CppBase() + 0x4466F6C))(this, P0);
	}

};

}
