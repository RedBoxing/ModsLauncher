#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSummon01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSummon01"));
	}

	template <typename T = uintptr_t> T& bullet_2() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& smoke_effect() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T Summon() {
		return ((T (*)(GunSummon01*))(Il2CppBase() + 0x217D6C4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSummon01*))(Il2CppBase() + 0x217D968))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunSummon01*))(Il2CppBase() + 0x217DB5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunSummon01*))(Il2CppBase() + 0x217DC14))(this);
	}

};

}
