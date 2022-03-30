#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopMercenarySeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopMercenarySeller"));
	}

	template <typename T = uintptr_t> T& _startRoom() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TroopMercenarySeller*))(Il2CppBase() + 0x4414CAC))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x4414D44))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x4415118))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x4415370))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TroopMercenarySeller*))(Il2CppBase() + 0x4415428))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x44154F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x44154F8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TroopMercenarySeller*, uintptr_t))(Il2CppBase() + 0x4415500))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TroopMercenarySeller*))(Il2CppBase() + 0x4415508))(this);
	}

};

}
