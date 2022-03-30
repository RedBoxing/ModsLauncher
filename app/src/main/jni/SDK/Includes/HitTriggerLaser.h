#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HitTriggerLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitTriggerLaser"));
	}

	template <typename T = float> T& laserTimeMin() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& laserTimeMax() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& laserAngleMin() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& laserAngleMax() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& laserBullet() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& laserPositionOffset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& characterHeight() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& laserCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& maxLaserDelayTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& laserTriggerCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _currentLaserCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& triggerCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T get_IsReleasing() {
		return ((T (*)(HitTriggerLaser*))(Il2CppBase() + 0x1A39AA0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HitTriggerLaser*))(Il2CppBase() + 0x1A39B08))(this);
	}
	template <typename T = void> T LaserRelease(uintptr_t targetObject) {
		return ((T (*)(HitTriggerLaser*, uintptr_t))(Il2CppBase() + 0x1A39BFC))(this, targetObject);
	}
	template <typename T = uintptr_t> T LaserRelease_1(uintptr_t targetTransform, int32_t laserIndex) {
		return ((T (*)(HitTriggerLaser*, uintptr_t, int32_t))(Il2CppBase() + 0x1A39CEC))(this, targetTransform, laserIndex);
	}

};

}
