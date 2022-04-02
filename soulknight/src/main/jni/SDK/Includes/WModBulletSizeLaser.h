#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModBulletSizeLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModBulletSizeLaser"));
	}

	template <typename T = float> T& buffScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModBulletSizeLaser*))(Il2CppBase() + 0x4363F54))(this);
	}
	template <typename T = void> T WeaponScaleModify(float value, uintptr_t filter) {
		return ((T (*)(WModBulletSizeLaser*, float, uintptr_t))(Il2CppBase() + 0x4364054))(this, value, filter);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModBulletSizeLaser*))(Il2CppBase() + 0x436411C))(this);
	}
	template <typename T = void> T iFixBaseProxy_WeaponScaleModify(float P0, uintptr_t P1) {
		return ((T (*)(WModBulletSizeLaser*, float, uintptr_t))(Il2CppBase() + 0x4364124))(this, P0, P1);
	}

};

}
