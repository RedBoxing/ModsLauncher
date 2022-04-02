#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishHarvestType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishHarvestType"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
