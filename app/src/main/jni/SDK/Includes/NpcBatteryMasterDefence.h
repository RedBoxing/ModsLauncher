#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcBatteryMasterDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcBatteryMasterDefence"));
	}


	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x452998C))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x4529C58))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x4529F44))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x452A06C))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NpcBatteryMasterDefence*))(Il2CppBase() + 0x452A15C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NpcBatteryMasterDefence*))(Il2CppBase() + 0x452A2A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x452A3F8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x452A400))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x452A408))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(NpcBatteryMasterDefence*, uintptr_t))(Il2CppBase() + 0x452A410))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(NpcBatteryMasterDefence*))(Il2CppBase() + 0x452A418))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(NpcBatteryMasterDefence*))(Il2CppBase() + 0x452A420))(this);
	}

};

}
