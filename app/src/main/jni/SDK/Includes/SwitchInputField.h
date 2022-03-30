#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchInputField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchInputField"));
	}

	template <typename T = uintptr_t> T& inputField() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = void> T SyncInputField() {
		return ((T (*)(SwitchInputField*))(Il2CppBase() + 0x18BFE04))(this);
	}
	template <typename T = void> T Sync(uintptr_t inputField) {
		return ((T (*)(SwitchInputField*, uintptr_t))(Il2CppBase() + 0x18BFE68))(this, inputField);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(SwitchInputField*, uintptr_t))(Il2CppBase() + 0x18C0038))(this, eventData);
	}
	template <typename T = void> T iFixBaseProxy_OnSelect(uintptr_t P0) {
		return ((T (*)(SwitchInputField*, uintptr_t))(Il2CppBase() + 0x18C0110))(this, P0);
	}

};

}
