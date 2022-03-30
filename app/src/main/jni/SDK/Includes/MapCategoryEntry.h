#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapCategoryEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapCategoryEntry"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _actionList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _actionCategoryList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _columnHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_actionList() {
		return ((T (*)(MapCategoryEntry*))(Il2CppBase() + 0x21E646C))(this);
	}
	template <typename T = void*> T get_actionCategoryList() {
		return ((T (*)(MapCategoryEntry*))(Il2CppBase() + 0x21E78A8))(this);
	}
	template <typename T = float> T get_columnHeight() {
		return ((T (*)(MapCategoryEntry*))(Il2CppBase() + 0x21E6244))(this);
	}
	template <typename T = void> T set_columnHeight(float value) {
		return ((T (*)(MapCategoryEntry*, float))(Il2CppBase() + 0x21E61D0))(this, value);
	}
	template <typename T = uintptr_t> T GetActionEntry(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(MapCategoryEntry*, int32_t, uintptr_t))(Il2CppBase() + 0x21E56A8))(this, actionId, axisRange);
	}
	template <typename T = int32_t> T IndexOfActionEntry(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(MapCategoryEntry*, int32_t, uintptr_t))(Il2CppBase() + 0x21E7908))(this, actionId, axisRange);
	}
	template <typename T = bool> T ContainsActionEntry(int32_t actionId, uintptr_t axisRange) {
		return ((T (*)(MapCategoryEntry*, int32_t, uintptr_t))(Il2CppBase() + 0x21E7A4C))(this, actionId, axisRange);
	}
	template <typename T = uintptr_t> T AddAction(uintptr_t action, uintptr_t axisRange) {
		return ((T (*)(MapCategoryEntry*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21E5520))(this, action, axisRange);
	}
	template <typename T = uintptr_t> T GetActionCategoryEntry(int32_t actionCategoryId) {
		return ((T (*)(MapCategoryEntry*, int32_t))(Il2CppBase() + 0x21E5A34))(this, actionCategoryId);
	}
	template <typename T = uintptr_t> T AddActionCategory(int32_t actionCategoryId) {
		return ((T (*)(MapCategoryEntry*, int32_t))(Il2CppBase() + 0x21E58F4))(this, actionCategoryId);
	}
	template <typename T = void> T SetAllActive(bool state) {
		return ((T (*)(MapCategoryEntry*, bool))(Il2CppBase() + 0x21E6EE0))(this, state);
	}

};

}
