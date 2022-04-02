#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDrill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDrill"));
	}

	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& maxForce() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& lockRotation() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& direct() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& frictionOffset() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x249562C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x249568C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x249575C))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunDrill*, bool, bool))(Il2CppBase() + 0x24957C0))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2495B14))(this);
	}
	template <typename T = void> T StartAttack() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2495BD0))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24959C8))(this);
	}
	template <typename T = uintptr_t> T Dashing() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2495E74))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2496070))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2496234))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2496368))(this);
	}
	template <typename T = void> T EndDrills() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2495F28))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2496470))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24964D0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x2496598))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunDrill*, bool, bool))(Il2CppBase() + 0x24965B0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965D0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunDrill*))(Il2CppBase() + 0x24965E0))(this);
	}

};

}
