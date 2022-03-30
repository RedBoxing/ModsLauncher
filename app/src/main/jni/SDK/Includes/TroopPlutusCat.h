#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopPlutusCat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopPlutusCat"));
	}

	template <typename T = uintptr_t> T& chest() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& maxChestLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x441565C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x4415A0C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x4415D18))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TroopPlutusCat*))(Il2CppBase() + 0x4415E50))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x4415F98))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x4415FA0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TroopPlutusCat*, uintptr_t))(Il2CppBase() + 0x4415FA8))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TroopPlutusCat*))(Il2CppBase() + 0x4415FB0))(this);
	}

};

}
