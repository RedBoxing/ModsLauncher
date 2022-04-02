#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnergyChangedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyChangedEvent"));
	}

	template <typename T = uintptr_t> T& rgController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& oldEnergy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& fromEnergyBall() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
