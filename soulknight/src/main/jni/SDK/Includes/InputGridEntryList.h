#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputGridEntryList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputGridEntryList"));
	}

	template <typename T = void*> T& entries() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T AddMapCategory(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E2F98))(this, mapCategoryId);
	}
	template <typename T = void> T AddAction(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange) {
		return ((T (*)(InputGridEntryList*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E3158))(this, mapCategoryId, action, axisRange);
	}
	template <typename T = uintptr_t> T AddActionEntry(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange) {
		return ((T (*)(InputGridEntryList*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E541C))(this, mapCategoryId, action, axisRange);
	}
	template <typename T = void> T AddActionLabel(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t label) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E3800))(this, mapCategoryId, actionId, axisRange, label);
	}
	template <typename T = void> T AddActionCategory(int32_t mapCategoryId, int32_t actionCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t))(Il2CppBase() + 0x21E3288))(this, mapCategoryId, actionCategoryId);
	}
	template <typename T = uintptr_t> T AddActionCategoryEntry(int32_t mapCategoryId, int32_t actionCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t))(Il2CppBase() + 0x21E5800))(this, mapCategoryId, actionCategoryId);
	}
	template <typename T = void> T AddActionCategoryLabel(int32_t mapCategoryId, int32_t actionCategoryId, uintptr_t label) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E39C0))(this, mapCategoryId, actionCategoryId, label);
	}
	template <typename T = void> T AddInputFieldSet(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange, uintptr_t controllerType, uintptr_t fieldSetContainer) {
		return ((T (*)(InputGridEntryList*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E33DC))(this, mapCategoryId, action, axisRange, controllerType, fieldSetContainer);
	}
	template <typename T = void> T AddInputField(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex, uintptr_t inputField) {
		return ((T (*)(InputGridEntryList*, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E35A8))(this, mapCategoryId, action, axisRange, controllerType, fieldIndex, inputField);
	}
	template <typename T = bool> T Contains(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E5EF0))(this, mapCategoryId, actionId, axisRange);
	}
	template <typename T = bool> T Contains_1(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E3B90))(this, mapCategoryId, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = void> T SetColumnHeight(int32_t mapCategoryId, float height) {
		return ((T (*)(InputGridEntryList*, int32_t, float))(Il2CppBase() + 0x21E4038))(this, mapCategoryId, height);
	}
	template <typename T = float> T GetColumnHeight(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E41B4))(this, mapCategoryId);
	}
	template <typename T = uintptr_t> T GetGUIInputField(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t fieldIndex) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E3D40))(this, mapCategoryId, actionId, axisRange, controllerType, fieldIndex);
	}
	template <typename T = uintptr_t> T GetActionEntry(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x21E5F98))(this, mapCategoryId, actionId, axisRange);
	}
	template <typename T = uintptr_t> T GetActionEntry_1(int32_t mapCategoryId, uintptr_t action, uintptr_t axisRange) {
		return ((T (*)(InputGridEntryList*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E5B98))(this, mapCategoryId, action, axisRange);
	}
	template <typename T = void*> T GetActionSets(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E3EA8))(this, mapCategoryId);
	}
	template <typename T = void> T SetFieldsActive(int32_t mapCategoryId, bool state) {
		return ((T (*)(InputGridEntryList*, int32_t, bool))(Il2CppBase() + 0x21E4324))(this, mapCategoryId, state);
	}
	template <typename T = void> T SetLabel(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t index, Il2CppString* label) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x21E4574))(this, mapCategoryId, actionId, axisRange, controllerType, index, label);
	}
	template <typename T = void> T PopulateField(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t controllerId, int32_t index, int32_t actionElementMapId, Il2CppString* label, bool invert) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x21E4784))(this, mapCategoryId, actionId, axisRange, controllerType, controllerId, index, actionElementMapId, label, invert);
	}
	template <typename T = void> T SetFixedFieldData(int32_t mapCategoryId, int32_t actionId, uintptr_t axisRange, uintptr_t controllerType, int32_t controllerId) {
		return ((T (*)(InputGridEntryList*, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x21E4974))(this, mapCategoryId, actionId, axisRange, controllerType, controllerId);
	}
	template <typename T = void> T InitializeFields(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E4ADC))(this, mapCategoryId);
	}
	template <typename T = void> T Show(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E4CB4))(this, mapCategoryId);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(InputGridEntryList*))(Il2CppBase() + 0x21E4E00))(this);
	}
	template <typename T = void> T ClearLabels(int32_t mapCategoryId) {
		return ((T (*)(InputGridEntryList*, int32_t))(Il2CppBase() + 0x21E4F98))(this, mapCategoryId);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(InputGridEntryList*))(Il2CppBase() + 0x21E52E0))(this);
	}

};

}
