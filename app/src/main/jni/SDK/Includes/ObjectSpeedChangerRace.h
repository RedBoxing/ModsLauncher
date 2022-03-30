#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSpeedChangerRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSpeedChangerRace"));
	}

	template <typename T = float> T& speed_rate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(ObjectSpeedChangerRace*, uintptr_t))(Il2CppBase() + 0x1DC43D4))(this, collision);
	}

};

}
