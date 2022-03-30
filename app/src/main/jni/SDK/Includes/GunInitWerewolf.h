#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitWerewolf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitWerewolf"));
	}

	template <typename T = float> T& unit_atk_increase() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& init_atk() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x2278ED0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x2279074))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x22790EC))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunInitWerewolf*, uintptr_t*))(Il2CppBase() + 0x2279150))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x22791E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x2279264))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunInitWerewolf*))(Il2CppBase() + 0x227926C))(this);
	}

};

}
