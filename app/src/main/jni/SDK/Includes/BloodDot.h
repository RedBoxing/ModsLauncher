#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BloodDot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodDot"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& arrived() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T SetTarget(uintptr_t target) {
		return ((T (*)(BloodDot*, uintptr_t))(Il2CppBase() + 0x1B2B808))(this, target);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BloodDot*))(Il2CppBase() + 0x1B2BCE0))(this);
	}
	template <typename T = void> T ArriveTarget() {
		return ((T (*)(BloodDot*))(Il2CppBase() + 0x1B2BFF4))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(BloodDot*))(Il2CppBase() + 0x1B2C1A8))(this);
	}
	template <typename T = uintptr_t> T AdjustingAngle() {
		return ((T (*)(BloodDot*))(Il2CppBase() + 0x1B2C264))(this);
	}
	template <typename T = void> T AdjustAngle(float angleSpeed) {
		return ((T (*)(BloodDot*, float))(Il2CppBase() + 0x1B2B960))(this, angleSpeed);
	}

};

}
