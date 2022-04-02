#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GradientColorSkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradientColorSkinData"));
	}

	template <typename T = uintptr_t> T& colorGradient() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
