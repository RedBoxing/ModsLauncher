#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModAtkLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModAtkLaser"));
	}

	template <typename T = int32_t> T& buffAtk() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModAtkLaser*))(Il2CppBase() + 0x436390C))(this);
	}
	template <typename T = void> T WeaponAtkModify(int32_t value, uintptr_t filter) {
		return ((T (*)(WModAtkLaser*, int32_t, uintptr_t))(Il2CppBase() + 0x4363A0C))(this, value, filter);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModAtkLaser*))(Il2CppBase() + 0x4363AA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_WeaponAtkModify(int32_t P0, uintptr_t P1) {
		return ((T (*)(WModAtkLaser*, int32_t, uintptr_t))(Il2CppBase() + 0x4363AA8))(this, P0, P1);
	}

};

}
