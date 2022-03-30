#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GUIToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUIToggle"));
	}


	template <typename T = uintptr_t> T get_toggle() {
		return ((T (*)(GUIToggle*))(Il2CppBase() + 0x21E1C58))(this);
	}
	template <typename T = uintptr_t> T get_toggleInfo() {
		return ((T (*)(GUIToggle*))(Il2CppBase() + 0x21E1D1C))(this);
	}
	template <typename T = int32_t> T get_actionElementMapId() {
		return ((T (*)(GUIToggle*))(Il2CppBase() + 0x21E1DE0))(this);
	}
	template <typename T = void> T set_actionElementMapId(int32_t value) {
		return ((T (*)(GUIToggle*, int32_t))(Il2CppBase() + 0x21E1EC4))(this, value);
	}
	template <typename T = void> T SetToggleInfoData(int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t intData) {
		return ((T (*)(GUIToggle*, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E200C))(this, actionId, axisRange, controllerType, intData);
	}
	template <typename T = void> T SetOnSubmitCallback(void* callback) {
		return ((T (*)(GUIToggle*, void*))(Il2CppBase() + 0x21E2170))(this, callback);
	}
	template <typename T = void> T SetToggleState(bool state) {
		return ((T (*)(GUIToggle*, bool))(Il2CppBase() + 0x21E2558))(this, state);
	}

};

}
