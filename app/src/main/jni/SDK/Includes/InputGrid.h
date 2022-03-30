#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputGrid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputGrid"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AddMapCategory(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E2F10))(this, mapCategoryId);
	}
	template <typename T = void> T AddAction(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange) {
		return ((T (*)(InputGrid*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E30AC))(this, mapCategoryId, action, axisRange);
	}
	template <typename T = void> T AddActionCategory(int32_t mapCategoryId, int32_t actionCategoryId) {
		return ((T (*)(InputGrid*, int32_t, int32_t))(Il2CppBase() + 0x21E31F4))(this, mapCategoryId, actionCategoryId);
	}
	template <typename T = void> T AddInputFieldSet(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange, uintptr_t controllerType, uintptr_t fieldSetContainer) {
		return ((T (*)(InputGrid*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E330C))(this, mapCategoryId, action, axisRange, controllerType, fieldSetContainer);
	}
	template <typename T = void> T AddInputField(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex, uintptr_t inputField) {
		return ((T (*)(InputGrid*, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E34BC))(this, mapCategoryId, action, axisRange, controllerType, fieldIndex, inputField);
	}
	template <typename T = void> T AddGroup(uintptr_t group) {
		return ((T (*)(InputGrid*, uintptr_t))(Il2CppBase() + 0x21E3690))(this, group);
	}
	template <typename T = void> T AddActionLabel(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t label) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E3748))(this, mapCategoryId, actionId, axisRange, label);
	}
	template <typename T = void> T AddActionCategoryLabel(int32_t mapCategoryId, int32_t actionCategoryId, uintptr_t label) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E3914))(this, mapCategoryId, actionCategoryId, label);
	}
	template <typename T = bool> T Contains(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E3AC0))(this, mapCategoryId, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = uintptr_t> T GetGUIInputField(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E3C70))(this, mapCategoryId, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = void*> T GetActionSets(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E3E20))(this, mapCategoryId);
	}
	template <typename T = void> T SetColumnHeight(int32_t mapCategoryId, float height) {
		return ((T (*)(InputGrid*, int32_t, float))(Il2CppBase() + 0x21E3F98))(this, mapCategoryId, height);
	}
	template <typename T = float> T GetColumnHeight(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E412C))(this, mapCategoryId);
	}
	template <typename T = void> T SetFieldsActive(int32_t mapCategoryId, bool state) {
		return ((T (*)(InputGrid*, int32_t, bool))(Il2CppBase() + 0x21E4290))(this, mapCategoryId, state);
	}
	template <typename T = void> T SetFieldLabel(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t index, Il2CppString* label) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x21E4488))(this, mapCategoryId, actionId, axisRange, controllerType, index, label);
	}
	template <typename T = void> T PopulateField(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, Il2CppString* label, bool invert) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x21E465C))(this, mapCategoryId, actionId, axisRange, controllerType, controllerId, index, actionElementMapId, label, invert);
	}
	template <typename T = void> T SetFixedFieldData(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(InputGrid*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E48A4))(this, mapCategoryId, actionId, axisRange, controllerType, controllerId);
	}
	template <typename T = void> T InitializeFields(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E4A54))(this, mapCategoryId);
	}
	template <typename T = void> T Show(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E4C2C))(this, mapCategoryId);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(InputGrid*))(Il2CppBase() + 0x21E4D90))(this);
	}
	template <typename T = void> T ClearLabels(int32_t mapCategoryId) {
		return ((T (*)(InputGrid*, int32_t))(Il2CppBase() + 0x21E4F10))(this, mapCategoryId);
	}
	template <typename T = void> T ClearGroups() {
		return ((T (*)(InputGrid*))(Il2CppBase() + 0x21E50E8))(this);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(InputGrid*))(Il2CppBase() + 0x21E5268))(this);
	}

};

}
