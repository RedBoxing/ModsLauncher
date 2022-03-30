#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class UiUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "UiUtil"));
	}

	template <typename T = Il2CppString*> static T& uiLoadingPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T ShowLoadingWindow(uintptr_t parent, float destroyTime) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x43EDFF4))(0, parent, destroyTime);
	}
	template <typename T = void> static T HideLoadingWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EE06C))(0, parent);
	}
	template <typename T = uintptr_t> static T ShowDialogWindow(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel, uintptr_t hideConfirmOrCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43EE0CC))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel);
	}
	template <typename T = uintptr_t> static T ShowDialogWindow_1(uintptr_t parent, Il2CppString* title, Il2CppString* content, void* onConfirm, void* onCancel, uintptr_t hideConfirmOrCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, void*, void*, uintptr_t))(Il2CppBase() + 0x43EE18C))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel);
	}
	template <typename T = void> static T SetInputFieldStandard(uintptr_t inputField) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EC8D0))(0, inputField);
	}
	template <typename T = void> static T SetInputFieldPassword(uintptr_t inputField) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EC77C))(0, inputField);
	}
	template <typename T = uintptr_t> static T GetOrAddComponent(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, transform);
	}
	template <typename T = uintptr_t> static T GetOrAddComponent_1(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, transform);
	}
	template <typename T = uintptr_t> static T GetViewPrefab(Il2CppString* adapterPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, adapterPath);
	}
	template <typename T = uintptr_t> static T GetViewPrefab_1(Il2CppString* adapterPath, Il2CppString* viewName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43ED914))(0, adapterPath, viewName);
	}
	template <typename T = uintptr_t> static T GetCommonView(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, parent);
	}
	template <typename T = uintptr_t> static T InstantiateCommonView() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = uintptr_t> static T InstantiateCommonView_1(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, parent);
	}

};

}
