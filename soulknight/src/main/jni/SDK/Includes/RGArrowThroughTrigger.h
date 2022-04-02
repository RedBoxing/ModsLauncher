#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowThroughTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowThroughTrigger"));
	}

	template <typename T = int32_t> T& a_through_count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = void> T SetPercentage(float percentage) {
		return ((T (*)(RGArrowThroughTrigger*, float))(Il2CppBase() + 0x1BAC86C))(this, percentage);
	}
	template <typename T = void> T HideTrail() {
		return ((T (*)(RGArrowThroughTrigger*))(Il2CppBase() + 0x1BAC97C))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(RGArrowThroughTrigger*, uintptr_t))(Il2CppBase() + 0x1BACAB8))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_DestroyBullet(uintptr_t P0) {
		return ((T (*)(RGArrowThroughTrigger*, uintptr_t))(Il2CppBase() + 0x1BACB94))(this, P0);
	}

};

}
