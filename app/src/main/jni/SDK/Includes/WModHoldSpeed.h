#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModHoldSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModHoldSpeed"));
	}

	template <typename T = float> T& buffSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& fieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModHoldSpeed*))(Il2CppBase() + 0x43648F4))(this);
	}
	template <typename T = void> T WeaponHoldSpeedModify(float value) {
		return ((T (*)(WModHoldSpeed*, float))(Il2CppBase() + 0x43649E0))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModHoldSpeed*))(Il2CppBase() + 0x4364DA8))(this);
	}

};

}
