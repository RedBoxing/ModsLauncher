#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpeedModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeedModel"));
	}

	template <typename T = float> T& initSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& accelerateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T get_CurrentSpeed() {
		return ((T (*)(SpeedModel*))(Il2CppBase() + 0x42A8014))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SpeedModel*))(Il2CppBase() + 0x42A7754))(this);
	}

};

}
