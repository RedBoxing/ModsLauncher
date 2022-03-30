#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModAtkMultiply
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModAtkMultiply"));
	}

	template <typename T = int32_t> T& multiFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WModAtkMultiply*))(Il2CppBase() + 0x4363AAC))(this);
	}
	template <typename T = void> T WeaponAtkModify(int32_t value, uintptr_t filter) {
		return ((T (*)(WModAtkMultiply*, int32_t, uintptr_t))(Il2CppBase() + 0x4363B10))(this, value, filter);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(WModAtkMultiply*))(Il2CppBase() + 0x4363BD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_WeaponAtkModify(int32_t P0, uintptr_t P1) {
		return ((T (*)(WModAtkMultiply*, int32_t, uintptr_t))(Il2CppBase() + 0x4363BD8))(this, P0, P1);
	}

};

}
