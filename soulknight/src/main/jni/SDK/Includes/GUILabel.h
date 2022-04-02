#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GUILabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUILabel"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(GUILabel*))(Il2CppBase() + 0x21E1298))(this);
	}
	template <typename T = void> T set_gameObject(uintptr_t value) {
		return ((T (*)(GUILabel*, uintptr_t))(Il2CppBase() + 0x21E12A0))(this, value);
	}
	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(GUILabel*))(Il2CppBase() + 0x21E12A8))(this);
	}
	template <typename T = void> T set_text(uintptr_t value) {
		return ((T (*)(GUILabel*, uintptr_t))(Il2CppBase() + 0x21E12B0))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(GUILabel*))(Il2CppBase() + 0x21E12B8))(this);
	}
	template <typename T = void> T set_rectTransform(uintptr_t value) {
		return ((T (*)(GUILabel*, uintptr_t))(Il2CppBase() + 0x21E12C0))(this, value);
	}
	template <typename T = void> T SetSize(int32_t width, int32_t height) {
		return ((T (*)(GUILabel*, int32_t, int32_t))(Il2CppBase() + 0x21E1550))(this, width, height);
	}
	template <typename T = void> T SetWidth(int32_t width) {
		return ((T (*)(GUILabel*, int32_t))(Il2CppBase() + 0x21E1678))(this, width);
	}
	template <typename T = void> T SetHeight(int32_t height) {
		return ((T (*)(GUILabel*, int32_t))(Il2CppBase() + 0x21E1774))(this, height);
	}
	template <typename T = void> T SetLabel(Il2CppString* label) {
		return ((T (*)(GUILabel*, Il2CppString*))(Il2CppBase() + 0x21E1870))(this, label);
	}
	template <typename T = void> T SetFontStyle(uintptr_t style) {
		return ((T (*)(GUILabel*, uintptr_t))(Il2CppBase() + 0x21E1970))(this, style);
	}
	template <typename T = void> T SetTextAlignment(uintptr_t alignment) {
		return ((T (*)(GUILabel*, uintptr_t))(Il2CppBase() + 0x21E1A68))(this, alignment);
	}
	template <typename T = void> T SetActive(bool state) {
		return ((T (*)(GUILabel*, bool))(Il2CppBase() + 0x21E1B60))(this, state);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(GUILabel*))(Il2CppBase() + 0x21E13D0))(this);
	}

};

}
