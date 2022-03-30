#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGHandTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGHandTaoist"));
	}

	template <typename T = uintptr_t> T& funnelProto() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& funnels() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T get_active() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C59B90))(this);
	}
	template <typename T = uintptr_t> T CreateFunnel() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C59D44))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T SetUpWeapon(Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(RGHandTaoist*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C5A0D8))(this, weapons);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponDatas() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5A8C0))(this);
	}
	template <typename T = void> T StartFunnels() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5AB2C))(this);
	}
	template <typename T = void> T StopFunnels() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5ACA0))(this);
	}
	template <typename T = uintptr_t> T GetEmptyFunnels(uintptr_t w) {
		return ((T (*)(RGHandTaoist*, uintptr_t))(Il2CppBase() + 0x1C5AE10))(this, w);
	}
	template <typename T = void> T ReorderFunnels() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5B040))(this);
	}
	template <typename T = void> T ResetFunnelOffset() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5B278))(this);
	}
	template <typename T = void> T PickUpItem(uintptr_t new_weapon_tf, bool fusion, bool showText) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C5B570))(this, new_weapon_tf, fusion, showText);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t w, Il2CppVector3 angles, bool isPick) {
		return ((T (*)(RGHandTaoist*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x1C5BC3C))(this, w, angles, isPick);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t w, bool temporarily, bool asFirstSibling) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C5BECC))(this, w, temporarily, asFirstSibling);
	}
	template <typename T = uintptr_t> T DropWeapon(uintptr_t w) {
		return ((T (*)(RGHandTaoist*, uintptr_t))(Il2CppBase() + 0x1C5C048))(this, w);
	}
	template <typename T = bool> T IsBackFull() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5C418))(this);
	}
	template <typename T = uintptr_t> T GetBackWeapon(bool includeInvisible) {
		return ((T (*)(RGHandTaoist*, bool))(Il2CppBase() + 0x1C5C78C))(this, includeInvisible);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBackWeapons() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5C984))(this);
	}
	template <typename T = void> T SwitchWeapon(bool showText) {
		return ((T (*)(RGHandTaoist*, bool))(Il2CppBase() + 0x1C5CC28))(this, showText);
	}
	template <typename T = bool> T RemoveWeapon(uintptr_t w, bool switchToNextWeapon) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool))(Il2CppBase() + 0x1C5CCC4))(this, w, switchToNextWeapon);
	}
	template <typename T = bool> T CreateFunnelb__4_0() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5CF8C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_SetUpWeapon(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(RGHandTaoist*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C5D028))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_PickUpItem(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C5D02C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, Il2CppVector3 P1, bool P2) {
		return ((T (*)(RGHandTaoist*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x1C5D038))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C5D040))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DropWeapon(uintptr_t P0) {
		return ((T (*)(RGHandTaoist*, uintptr_t))(Il2CppBase() + 0x1C5D04C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsBackFull() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5D050))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetBackWeapon(bool P0) {
		return ((T (*)(RGHandTaoist*, bool))(Il2CppBase() + 0x1C5D054))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetBackWeapons() {
		return ((T (*)(RGHandTaoist*))(Il2CppBase() + 0x1C5D05C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchWeapon(bool P0) {
		return ((T (*)(RGHandTaoist*, bool))(Il2CppBase() + 0x1C5D060))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RemoveWeapon(uintptr_t P0, bool P1) {
		return ((T (*)(RGHandTaoist*, uintptr_t, bool))(Il2CppBase() + 0x1C5D068))(this, P0, P1);
	}

};

}
