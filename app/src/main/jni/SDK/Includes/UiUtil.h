#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UiUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UiUtil"));
	}

	template <typename T = void*> static T& LoadingTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T ShowLoadingWindow(uintptr_t parent, float destroyTime) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x462CA2C))(0, parent, destroyTime);
	}
	template <typename T = void> static T HideLoadingWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x462CDCC))(0, parent);
	}
	template <typename T = void> static T ShowDialogWindow(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel, int32_t hideConfirmOrCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x462CEF4))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel);
	}
	template <typename T = void> static T ShowDialogWindowNoTitle(uintptr_t parent, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x462CFBC))(0, parent, content, onConfirm, onCancel);
	}
	template <typename T = void> static T ShowDialogWindowSprites(uintptr_t parent, Il2CppString* content, Il2CppArray<uintptr_t>* sprites, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x462D05C))(0, parent, content, sprites, onConfirm, onCancel);
	}
	template <typename T = void> static T ShowGainWindow(uintptr_t sprite, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x462D108))(0, sprite, name);
	}
	template <typename T = void> static T ShowDialogWindowInput(uintptr_t parent, uintptr_t inputDialogParam, void* onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, uintptr_t))(Il2CppBase() + 0x462D310))(0, parent, inputDialogParam, onConfirm, onCancel);
	}
	template <typename T = void> static T ShowTempTips(Il2CppString* key, float time, bool needLocalized) {
		return ((T (*)(void *, Il2CppString*, float, bool))(Il2CppBase() + 0x462D3F4))(0, key, time, needLocalized);
	}

};

}
