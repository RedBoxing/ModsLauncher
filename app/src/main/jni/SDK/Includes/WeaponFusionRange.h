#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponFusionRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFusionRange"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sourceWeaponsRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& inRangeCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& destroyAllWeapon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T CanFusion(Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(WeaponFusionRange*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449CC70))(this, weapons);
	}
	template <typename T = bool> T CanFusion_1(uintptr_t necessaryWeapon, Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(WeaponFusionRange*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449D0C0))(this, necessaryWeapon, weapons);
	}
	template <typename T = bool> T iFixBaseProxy_CanFusion(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(WeaponFusionRange*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449D5A8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanFusion_1(uintptr_t P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(WeaponFusionRange*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x449D5AC))(this, P0, P1);
	}

};

}
