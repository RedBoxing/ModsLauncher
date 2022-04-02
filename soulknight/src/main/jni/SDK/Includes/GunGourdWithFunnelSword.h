#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGourdWithFunnelSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGourdWithFunnelSword"));
	}

	template <typename T = uintptr_t> T& funnelRoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& funnels() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& funnelTime() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& funnelSwords() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& maxfunnelSwordCount() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& gray_mat() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& color_mat() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& is_ready() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249CC80))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunGourdWithFunnelSword*, bool, bool))(Il2CppBase() + 0x249CF58))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D0EC))(this);
	}
	template <typename T = uintptr_t> T CreatingFunnel() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D2A0))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D380))(this);
	}
	template <typename T = void> T StopSword() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D468))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D5A4))(this);
	}
	template <typename T = void> T OnRebornBack() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D734))(this);
	}
	template <typename T = void> T TurnReady() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D610))(this);
	}
	template <typename T = void> T AddAdditionLevel() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D7A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D9BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunGourdWithFunnelSword*, bool, bool))(Il2CppBase() + 0x249D9C4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D9D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D9DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnRebornBack() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D9E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AddAdditionLevel() {
		return ((T (*)(GunGourdWithFunnelSword*))(Il2CppBase() + 0x249D9EC))(this);
	}

};

}
