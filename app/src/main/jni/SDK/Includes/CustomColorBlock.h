#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomColorBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomColorBlock"));
	}

	template <typename T = float> T& m_ColorMultiplier() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_DisabledColor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_FadeDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_HighlightedColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_NormalColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PressedColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_SelectedColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DisabledHighlightedColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = float> T get_colorMultiplier() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E14))(this);
	}
	template <typename T = void> T set_colorMultiplier(float value) {
		return ((T (*)(CustomColorBlock*, float))(Il2CppBase() + 0x1507E1C))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E24))(this);
	}
	template <typename T = void> T set_disabledColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E2C))(this, value);
	}
	template <typename T = float> T get_fadeDuration() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E34))(this);
	}
	template <typename T = void> T set_fadeDuration(float value) {
		return ((T (*)(CustomColorBlock*, float))(Il2CppBase() + 0x1507E3C))(this, value);
	}
	template <typename T = uintptr_t> T get_highlightedColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E44))(this);
	}
	template <typename T = void> T set_highlightedColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E4C))(this, value);
	}
	template <typename T = uintptr_t> T get_normalColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E54))(this);
	}
	template <typename T = void> T set_normalColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E5C))(this, value);
	}
	template <typename T = uintptr_t> T get_pressedColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E64))(this);
	}
	template <typename T = void> T set_pressedColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E6C))(this, value);
	}
	template <typename T = uintptr_t> T get_selectedColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E74))(this);
	}
	template <typename T = void> T set_selectedColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E7C))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedColor() {
		return ((T (*)(CustomColorBlock*))(Il2CppBase() + 0x1507E84))(this);
	}
	template <typename T = void> T set_disabledHighlightedColor(uintptr_t value) {
		return ((T (*)(CustomColorBlock*, uintptr_t))(Il2CppBase() + 0x1507E8C))(this, value);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21F8A28))(0, item);
	}

};

}
