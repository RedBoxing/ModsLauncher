#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModDeviation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModDeviation"));
	}

	template <typename T = int32_t> T& buffDeviation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModDeviation*))(Il2CppBase() + 0x4364540))(this);
	}
	template <typename T = void> T WeaponDeviationModify(int32_t value, bool addCritic) {
		return ((T (*)(WModDeviation*, int32_t, bool))(Il2CppBase() + 0x4364630))(this, value, addCritic);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModDeviation*))(Il2CppBase() + 0x43648EC))(this);
	}

};

}
