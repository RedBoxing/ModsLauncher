#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComponentAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComponentAction"));
	}

	template <typename T = int32_t> T& curAttackSeqNo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isMainComponent() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& gunPoint() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& addConsumeByCharge() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& dislikeHandcut() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = void*> T& onMakeConsume() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = float> T get_chargeAmount() {
		return ((T (*)(WeaponComponentAction*))(Il2CppBase() + 0x4496558))(this);
	}
	template <typename T = int32_t> T get_curAttackSeqNo() {
		return ((T (*)(WeaponComponentAction*))(Il2CppBase() + 0x44965B8))(this);
	}
	template <typename T = void> T set_curAttackSeqNo(int32_t value) {
		return ((T (*)(WeaponComponentAction*, int32_t))(Il2CppBase() + 0x44965C0))(this, value);
	}
	template <typename T = uintptr_t> T get_actionTransform() {
		return ((T (*)(WeaponComponentAction*))(Il2CppBase() + 0x44965C8))(this);
	}
	template <typename T = void> T OnAttach(uintptr_t w) {
		return ((T (*)(WeaponComponentAction*, uintptr_t))(Il2CppBase() + 0x4496628))(this, w);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(WeaponComponentAction*))(Il2CppBase() + 0x44966B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAttach(uintptr_t P0) {
		return ((T (*)(WeaponComponentAction*, uintptr_t))(Il2CppBase() + 0x449683C))(this, P0);
	}

};

}
