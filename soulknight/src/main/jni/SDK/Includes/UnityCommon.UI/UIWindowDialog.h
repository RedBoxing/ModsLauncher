#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class UIWindowDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "UIWindowDialog"));
	}

	template <typename T = uintptr_t> T& titleImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& titleText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& contentText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& onCancel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DisAgreeBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ErrSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x43ECA2C))(this);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowDialog*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43ECD78))(this, objects);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x43ECE54))(this);
	}
	template <typename T = void> T OnClickCancel() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x43ECF08))(this);
	}
	template <typename T = uintptr_t> T SetTitleImage(uintptr_t sprite, bool imageActive) {
		return ((T (*)(UIWindowDialog*, uintptr_t, bool))(Il2CppBase() + 0x43ECFBC))(this, sprite, imageActive);
	}
	template <typename T = uintptr_t> T SetBackground(uintptr_t sprite) {
		return ((T (*)(UIWindowDialog*, uintptr_t))(Il2CppBase() + 0x43ED090))(this, sprite);
	}
	template <typename T = uintptr_t> T SetTitleActive(bool imageActive) {
		return ((T (*)(UIWindowDialog*, bool))(Il2CppBase() + 0x43ED124))(this, imageActive);
	}
	template <typename T = uintptr_t> T SetTitleText(Il2CppString* text, float lineSpace) {
		return ((T (*)(UIWindowDialog*, Il2CppString*, float))(Il2CppBase() + 0x43ED1D0))(this, text, lineSpace);
	}
	template <typename T = uintptr_t> T SetContentText(Il2CppString* text, float lineSpace) {
		return ((T (*)(UIWindowDialog*, Il2CppString*, float))(Il2CppBase() + 0x43ED2A0))(this, text, lineSpace);
	}
	template <typename T = uintptr_t> T SetContentAnchor(uintptr_t anchor) {
		return ((T (*)(UIWindowDialog*, uintptr_t))(Il2CppBase() + 0x43ED370))(this, anchor);
	}
	template <typename T = uintptr_t> T SetBgWidth(float width) {
		return ((T (*)(UIWindowDialog*, float))(Il2CppBase() + 0x43ED404))(this, width);
	}
	template <typename T = uintptr_t> static T ShowNewDialog(uintptr_t parent, Il2CppString* title, Il2CppString* content, void* onConfirm, void* onCancel, uintptr_t hideConfirmOrCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, void*, void*, uintptr_t))(Il2CppBase() + 0x43ED534))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel);
	}
	template <typename T = void> static T DealBtnImageText(uintptr_t button, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43EDAF0))(0, button, text);
	}
	template <typename T = uintptr_t> static T ShowDialog(uintptr_t parent, Il2CppString* title, Il2CppString* content, uintptr_t onConfirm, uintptr_t onCancel, uintptr_t hideConfirmOrCancel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43EDCBC))(0, parent, title, content, onConfirm, onCancel, hideConfirmOrCancel);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UIWindowDialog*))(Il2CppBase() + 0x43EDFEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowDialog*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EDFF0))(this, P0);
	}

};

}
