#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMechNuclear
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMechNuclear"));
	}

	template <typename T = uintptr_t> T& upBomb() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunMechNuclear*))(Il2CppBase() + 0x2285A74))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(GunMechNuclear*))(Il2CppBase() + 0x2285E2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunMechNuclear*))(Il2CppBase() + 0x228610C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Explode() {
		return ((T (*)(GunMechNuclear*))(Il2CppBase() + 0x2286110))(this);
	}

};

}
