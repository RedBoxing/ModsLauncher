#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopCommoditySeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopCommoditySeller"));
	}

	template <typename T = uintptr_t> T& _sellGroup() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TroopCommoditySeller*))(Il2CppBase() + 0x440B6C4))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440B75C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440B8DC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440BB34))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TroopCommoditySeller*))(Il2CppBase() + 0x440BBEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440BCB4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440BCBC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TroopCommoditySeller*, uintptr_t))(Il2CppBase() + 0x440BCC4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TroopCommoditySeller*))(Il2CppBase() + 0x440BCCC))(this);
	}

};

}
