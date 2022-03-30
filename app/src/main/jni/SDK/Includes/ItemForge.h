#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemForge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemForge"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& trRight() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& trMiddle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& trCurContainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemForge*))(Il2CppBase() + 0x1DA5130))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA5220))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA548C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA5A74))(this, controller);
	}
	template <typename T = void> T CreateWeapon(Il2CppString* weaponName) {
		return ((T (*)(ItemForge*, Il2CppString*))(Il2CppBase() + 0x1DA5B6C))(this, weaponName);
	}
	template <typename T = bool> T RearrangeWeapons() {
		return ((T (*)(ItemForge*))(Il2CppBase() + 0x1DA57D0))(this);
	}
	template <typename T = uintptr_t> T GetEmptyPlace(int32_t startIndex) {
		return ((T (*)(ItemForge*, int32_t))(Il2CppBase() + 0x1DA6250))(this, startIndex);
	}
	template <typename T = void> T SaveWeapons() {
		return ((T (*)(ItemForge*))(Il2CppBase() + 0x1DA6064))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA63BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA63C4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemForge*, uintptr_t))(Il2CppBase() + 0x1DA63CC))(this, P0);
	}

};

}
