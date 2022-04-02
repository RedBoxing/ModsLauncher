#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGStateItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGStateItem"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& talkStates() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& talkFail() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& talkSuccess() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& totalState() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DAE0C))(this, controller);
	}
	template <typename T = void> T ShowStateTab(uintptr_t controller, int32_t state) {
		return ((T (*)(RGStateItem*, uintptr_t, int32_t))(Il2CppBase() + 0x43DB170))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(RGStateItem*, uintptr_t, int32_t))(Il2CppBase() + 0x43DB22C))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DB2A4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DB3C8))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DB554))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DB55C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(RGStateItem*, uintptr_t))(Il2CppBase() + 0x43DB564))(this, P0);
	}

};

}
