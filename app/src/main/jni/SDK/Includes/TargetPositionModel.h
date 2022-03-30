#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetPositionModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetPositionModel"));
	}

	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
