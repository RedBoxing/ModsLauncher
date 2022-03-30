#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FusionModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionModel"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& hueShift() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
