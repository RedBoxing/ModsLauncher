#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet02Percentage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet02Percentage"));
	}

	template <typename T = float> T& a_interval_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& a_angle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T SetPercentage(float percentage) {
		return ((T (*)(Bullet02Percentage*, float))(Il2CppBase() + 0x45A5388))(this, percentage);
	}

};

}
