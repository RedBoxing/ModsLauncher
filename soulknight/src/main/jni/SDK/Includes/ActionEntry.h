#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ActionEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionEntry"));
	}

	template <typename T = void*> T& fieldSets() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& axisRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& actionSet() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetLabel(uintptr_t label) {
		return ((T (*)(ActionEntry*, uintptr_t))(Il2CppBase() + 0x21E578C))(this, label);
	}
	template <typename T = bool> T Matches(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(ActionEntry*, int32_t, uintptr_t))(Il2CppBase() + 0x21E7630))(this, actionId, axisRange);
	}
	template <typename T = void> T AddInputFieldSet(uintptr_t controllerType, uintptr_t fieldSetContainer) {
		return ((T (*)(ActionEntry*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E5C5C))(this, controllerType, fieldSetContainer);
	}
	template <typename T = void> T AddInputField(uintptr_t controllerType, int32_t fieldIndex, uintptr_t inputField) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E5D78))(this, controllerType, fieldIndex, inputField);
	}
	template <typename T = uintptr_t> T GetGUIInputField(uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t))(Il2CppBase() + 0x21E62A4))(this, controllerType, fieldIndex);
	}
	template <typename T = bool> T Contains(uintptr_t controllerType, int32_t fieldId) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t))(Il2CppBase() + 0x21E609C))(this, controllerType, fieldId);
	}
	template <typename T = void> T SetFieldLabel(uintptr_t controllerType, int32_t index, Il2CppString* label) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x21E66D4))(this, controllerType, index, label);
	}
	template <typename T = void> T PopulateField(uintptr_t controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, Il2CppString* label, bool invert) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t, int32_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x21E6894))(this, controllerType, controllerId, index, actionElementMapId, label, invert);
	}
	template <typename T = void> T SetFixedFieldData(uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(ActionEntry*, uintptr_t, int32_t))(Il2CppBase() + 0x21E6B0C))(this, controllerType, controllerId);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ActionEntry*))(Il2CppBase() + 0x21E6C94))(this);
	}
	template <typename T = void> T SetActive(bool state) {
		return ((T (*)(ActionEntry*, bool))(Il2CppBase() + 0x21E7764))(this, state);
	}
	template <typename T = void> T ClearLabels() {
		return ((T (*)(ActionEntry*))(Il2CppBase() + 0x21E7070))(this);
	}
	template <typename T = void> T SetFieldsActive(bool state) {
		return ((T (*)(ActionEntry*, bool))(Il2CppBase() + 0x21E64CC))(this, state);
	}

};

}
