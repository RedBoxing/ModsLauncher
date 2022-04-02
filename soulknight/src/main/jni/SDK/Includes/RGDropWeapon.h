#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDropWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDropWeapon"));
	}

	template <typename T = uintptr_t> T& weaponPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& dropPositionOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGDropWeapon*))(Il2CppBase() + 0x221DD80))(this);
	}
	template <typename T = void> T ControllerDeadDropWeapon(uintptr_t obj) {
		return ((T (*)(RGDropWeapon*, uintptr_t))(Il2CppBase() + 0x221DF60))(this, obj);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(RGDropWeapon*))(Il2CppBase() + 0x221E20C))(this);
	}

};

}
