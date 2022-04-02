#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComCharStepForward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComCharStepForward"));
	}

	template <typename T = uintptr_t> T& attackType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& timing() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& atkSeqNo() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _canDo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = bool> T get_isTimingAttackExecute() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2023A10))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2023A78))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2023BC4))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2023CBC))(this);
	}
	template <typename T = uintptr_t> T OnAttackActionStart(uintptr_t atkType) {
		return ((T (*)(WeaponComCharStepForward*, uintptr_t))(Il2CppBase() + 0x2023DA0))(this, atkType);
	}
	template <typename T = uintptr_t> T OnAttackKeyEvent(uintptr_t atkType, int32_t atkSequenceNo) {
		return ((T (*)(WeaponComCharStepForward*, uintptr_t, int32_t))(Il2CppBase() + 0x2023F98))(this, atkType, atkSequenceNo);
	}
	template <typename T = void> T Do() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2023E38))(this);
	}
	template <typename T = void> T Awakeb__9_0(uintptr_t arg) {
		return ((T (*)(WeaponComCharStepForward*, uintptr_t))(Il2CppBase() + 0x202406C))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2024078))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2024080))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComCharStepForward*))(Il2CppBase() + 0x2024088))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackActionStart(uintptr_t P0) {
		return ((T (*)(WeaponComCharStepForward*, uintptr_t))(Il2CppBase() + 0x2024090))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnAttackKeyEvent(uintptr_t P0, int32_t P1) {
		return ((T (*)(WeaponComCharStepForward*, uintptr_t, int32_t))(Il2CppBase() + 0x2024098))(this, P0, P1);
	}

};

}
