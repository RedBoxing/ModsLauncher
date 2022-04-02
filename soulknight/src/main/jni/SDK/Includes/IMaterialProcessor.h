#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IMaterialProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaterialProcessor"));
	}


	template <typename T = void> T SetMaterial(uintptr_t material) {
		return ((T (*)(IMaterialProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, material);
	}

};

}
