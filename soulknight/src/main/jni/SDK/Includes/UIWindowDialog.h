#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowDialog"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& onCancel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& pauseGame() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x4592478))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x4592600))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x459265C))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x45926B8))(this);
	}
	template <typename T = void> T OnClickCancel() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x45927E8))(this);
	}
	template <typename T = void> static T ShowDialog(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel, int32_t hideConfirmOrCancel, bool pauseGame) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4592918))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel, pauseGame);
	}
	template <typename T = void> static T ShowDialogNoTitle(uintptr_t parent, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4592DA4))(0, parent, content, onConfirm, onCancel);
	}
	template <typename T = void> static T ShowDialogSprites(uintptr_t parent, Il2CppString* content, Il2CppArray<uintptr_t>* sprites, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4593058))(0, parent, content, sprites, onConfirm, onCancel);
	}
	template <typename T = void> static T ShowDialog_1(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel, uintptr_t hideConfirmOrCancel, bool pauseGame) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4593488))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel, pauseGame);
	}
	template <typename T = void> static T ShowDialog_2(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4593564))(0, parent, title, content, onConfirm, onCancel);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x459361C))(this);
	}

};

}
