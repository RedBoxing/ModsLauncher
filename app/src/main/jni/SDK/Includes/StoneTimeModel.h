#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StoneTimeModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoneTimeModel"));
	}

	template <typename T = uintptr_t> T& stoneModel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
