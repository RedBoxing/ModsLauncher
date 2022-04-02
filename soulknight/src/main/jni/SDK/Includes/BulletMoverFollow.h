#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverFollow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverFollow"));
	}

	template <typename T = float> T& moveAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& limitTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& detectedTimes() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& detectInterval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& followTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _dectedTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& customTarget() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _targetRange() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& _ignoreWall() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = float> T get_targetRange() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2386FEC))(this);
	}
	template <typename T = bool> T get_ignoreWall() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x238704C))(this);
	}
	template <typename T = uintptr_t> T Setup(float initAngle, float angleSpeed, float interval, float delayTime, int32_t limitTimes, float targetRange, bool ignoreWall) {
		return ((T (*)(BulletMoverFollow*, float, float, float, float, int32_t, float, bool))(Il2CppBase() + 0x23870AC))(this, initAngle, angleSpeed, interval, delayTime, limitTimes, targetRange, ignoreWall);
	}
	template <typename T = uintptr_t> T SetTarget(uintptr_t target) {
		return ((T (*)(BulletMoverFollow*, uintptr_t))(Il2CppBase() + 0x2387190))(this, target);
	}
	template <typename T = void> T MoveFixedUpdate() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2387268))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2387794))(this);
	}
	template <typename T = uintptr_t> T GetTarget() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x23878FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_MoveFixedUpdate() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x238796C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FindTarget() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2387970))(this);
	}
	template <typename T = float> T iFixBaseProxy_get_targetRange() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2387974))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_ignoreWall() {
		return ((T (*)(BulletMoverFollow*))(Il2CppBase() + 0x2387978))(this);
	}

};

}
