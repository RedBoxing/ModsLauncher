#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GUIInputField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUIInputField"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E0774))(this);
	}
	template <typename T = uintptr_t> T get_fieldInfo() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E0838))(this);
	}
	template <typename T = bool> T get_hasToggle() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E08FC))(this);
	}
	template <typename T = uintptr_t> T get_toggle() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E0964))(this);
	}
	template <typename T = void> T set_toggle(uintptr_t value) {
		return ((T (*)(GUIInputField*, uintptr_t))(Il2CppBase() + 0x21E096C))(this, value);
	}
	template <typename T = int32_t> T get_actionElementMapId() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E0974))(this);
	}
	template <typename T = void> T set_actionElementMapId(int32_t value) {
		return ((T (*)(GUIInputField*, int32_t))(Il2CppBase() + 0x21E0A60))(this, value);
	}
	template <typename T = int32_t> T get_controllerId() {
		return ((T (*)(GUIInputField*))(Il2CppBase() + 0x21E0B58))(this);
	}
	template <typename T = void> T set_controllerId(int32_t value) {
		return ((T (*)(GUIInputField*, int32_t))(Il2CppBase() + 0x21E0C44))(this, value);
	}
	template <typename T = void> T SetFieldInfoData(int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t intData) {
		return ((T (*)(GUIInputField*, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E0D94))(this, actionId, axisRange, controllerType, intData);
	}
	template <typename T = void> T SetOnClickCallback(void* callback) {
		return ((T (*)(GUIInputField*, void*))(Il2CppBase() + 0x21E0F10))(this, callback);
	}
	template <typename T = void> T SetInteractable(bool state, bool playTransition, bool permanent) {
		return ((T (*)(GUIInputField*, bool, bool, bool))(Il2CppBase() + 0x21E10B0))(this, state, playTransition, permanent);
	}
	template <typename T = void> T AddToggle(uintptr_t toggle) {
		return ((T (*)(GUIInputField*, uintptr_t))(Il2CppBase() + 0x21E11A4))(this, toggle);
	}

};

}
