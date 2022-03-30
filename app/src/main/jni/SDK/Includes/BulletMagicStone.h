#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMagicStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMagicStone"));
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
		return ((T (*)(BulletMagicStone*, uintptr_t))(Il2CppBase() + 0x2384754))(this, target);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletMagicStone*))(Il2CppBase() + 0x2384C2C))(this);
	}
	template <typename T = void> T ArriveTarget() {
		return ((T (*)(BulletMagicStone*))(Il2CppBase() + 0x2384F40))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(BulletMagicStone*))(Il2CppBase() + 0x2385050))(this);
	}
	template <typename T = uintptr_t> T AdjustingAngle() {
		return ((T (*)(BulletMagicStone*))(Il2CppBase() + 0x238510C))(this);
	}
	template <typename T = void> T AdjustAngle(float angleSpeed) {
		return ((T (*)(BulletMagicStone*, float))(Il2CppBase() + 0x23848AC))(this, angleSpeed);
	}

};

}
