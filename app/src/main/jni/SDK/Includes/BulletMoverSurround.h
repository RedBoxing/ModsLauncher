#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverSurround
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverSurround"));
	}

	template <typename T = float> T& moveAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& moveRadius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& radiusSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& targetRadius() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T Setup(uintptr_t parent, Il2CppVector3 offset, float angle, float radius) {
		return ((T (*)(BulletMoverSurround*, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x2389584))(this, parent, offset, angle, radius);
	}
	template <typename T = uintptr_t> T Setup_1(float angleSpeed, float radiusSpeed, float targetRadius) {
		return ((T (*)(BulletMoverSurround*, float, float, float))(Il2CppBase() + 0x2389834))(this, angleSpeed, radiusSpeed, targetRadius);
	}
	template <typename T = void> T MoveFixedUpdate() {
		return ((T (*)(BulletMoverSurround*))(Il2CppBase() + 0x23898CC))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(BulletMoverSurround*))(Il2CppBase() + 0x2389690))(this);
	}
	template <typename T = void> T iFixBaseProxy_MoveFixedUpdate() {
		return ((T (*)(BulletMoverSurround*))(Il2CppBase() + 0x2389A50))(this);
	}

};

}
