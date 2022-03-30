#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletReboundPercentage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletReboundPercentage"));
	}

	template <typename T = int32_t> T& maxRebound() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetPercentage(float percentage) {
		return ((T (*)(BulletReboundPercentage*, float))(Il2CppBase() + 0x238E588))(this, percentage);
	}

};

}
