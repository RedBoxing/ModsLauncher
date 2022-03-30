#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceFloorMountFrictionFactor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceFloorMountFrictionFactor"));
	}

	template <typename T = float> T& forceLerp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& swampSinkLerp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
