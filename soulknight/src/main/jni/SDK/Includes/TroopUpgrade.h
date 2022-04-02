#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopUpgrade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopUpgrade"));
	}


	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(TroopUpgrade*, uintptr_t, int32_t))(Il2CppBase() + 0x4418B9C))(this, controller, state);
	}
	template <typename T = void> T ShowStateTab(uintptr_t controller, int32_t state) {
		return ((T (*)(TroopUpgrade*, uintptr_t, int32_t))(Il2CppBase() + 0x4418C24))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopUpgrade*, uintptr_t))(Il2CppBase() + 0x4418DE4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopUpgrade*, uintptr_t))(Il2CppBase() + 0x4418EA8))(this, controller);
	}
	template <typename T = int32_t> T get_flagLevel() {
		return ((T (*)(TroopUpgrade*))(Il2CppBase() + 0x4418FB8))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TroopUpgrade*))(Il2CppBase() + 0x441903C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TroopUpgrade*))(Il2CppBase() + 0x44190A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(TroopUpgrade*, uintptr_t, int32_t))(Il2CppBase() + 0x4419190))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowStateTab(uintptr_t P0, int32_t P1) {
		return ((T (*)(TroopUpgrade*, uintptr_t, int32_t))(Il2CppBase() + 0x4419198))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopUpgrade*, uintptr_t))(Il2CppBase() + 0x44191A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopUpgrade*, uintptr_t))(Il2CppBase() + 0x44191A8))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TroopUpgrade*))(Il2CppBase() + 0x44191B0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(TroopUpgrade*))(Il2CppBase() + 0x44191B8))(this);
	}

};

}
