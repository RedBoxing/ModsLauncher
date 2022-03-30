#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTrump
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTrump"));
	}

	template <typename T = uintptr_t> T& sprite_ready() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& sprite_cd() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& gray_mat() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& color_mat() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& is_ready() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& attackStartTime() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& add_atkspeed() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& add_movespeed() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}

	template <typename T = float> T get_ready_cd() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A20D3C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A20DCC))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A20EAC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunTrump*, bool, bool))(Il2CppBase() + 0x1A20F10))(this, value1, setHandAttack);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A210EC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A21238))(this);
	}
	template <typename T = void> T TurnReady() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A211AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A215B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunTrump*))(Il2CppBase() + 0x1A215B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunTrump*, bool, bool))(Il2CppBase() + 0x1A215C0))(this, P0, P1);
	}

};

}
