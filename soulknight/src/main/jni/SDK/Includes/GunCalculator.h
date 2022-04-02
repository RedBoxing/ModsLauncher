#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCalculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCalculator"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& atk_mode2() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& consume_mode2() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& critical_mode2() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& speed_mode2() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& gun_point_color_mode1() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& gun_point_color_mode2() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& change_mode() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& gun_point_sp() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2585AF4))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2585BD4))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunCalculator*, bool, bool))(Il2CppBase() + 0x2585D00))(this, value1, setHandAttack);
	}
	template <typename T = void> T TurnChangeModeBack() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2585F5C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2585FBC))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(int32_t totalCount) {
		return ((T (*)(GunCalculator*, int32_t))(Il2CppBase() + 0x25860CC))(this, totalCount);
	}
	template <typename T = void> T ChangeMode() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2585DF4))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunCalculator*, bool))(Il2CppBase() + 0x25861D8))(this, isDown);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2586260))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x258654C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x25865E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x25865F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunCalculator*, bool, bool))(Il2CppBase() + 0x25865F8))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunCalculator*))(Il2CppBase() + 0x2586608))(this);
	}

};

}
