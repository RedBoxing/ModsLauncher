#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcTutorDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcTutorDefence"));
	}


	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(NpcTutorDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x4538BB0))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x4538E7C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x45391E4))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x453930C))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NpcTutorDefence*))(Il2CppBase() + 0x45393FC))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NpcTutorDefence*))(Il2CppBase() + 0x4539544))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(NpcTutorDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x4539698))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x45396A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x45396A8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(NpcTutorDefence*, uintptr_t))(Il2CppBase() + 0x45396B0))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(NpcTutorDefence*))(Il2CppBase() + 0x45396B8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(NpcTutorDefence*))(Il2CppBase() + 0x45396C0))(this);
	}

};

}
