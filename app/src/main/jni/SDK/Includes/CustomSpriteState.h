#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomSpriteState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomSpriteState"));
	}

	template <typename T = uintptr_t> T& m_DisabledSprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_HighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PressedSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SelectedSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DisabledHighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_disabledSprite() {
		return ((T (*)(CustomSpriteState*))(Il2CppBase() + 0x14F89C0))(this);
	}
	template <typename T = void> T set_disabledSprite(uintptr_t value) {
		return ((T (*)(CustomSpriteState*, uintptr_t))(Il2CppBase() + 0x14F89C8))(this, value);
	}
	template <typename T = uintptr_t> T get_highlightedSprite() {
		return ((T (*)(CustomSpriteState*))(Il2CppBase() + 0x14F89D0))(this);
	}
	template <typename T = void> T set_highlightedSprite(uintptr_t value) {
		return ((T (*)(CustomSpriteState*, uintptr_t))(Il2CppBase() + 0x14F89D8))(this, value);
	}
	template <typename T = uintptr_t> T get_pressedSprite() {
		return ((T (*)(CustomSpriteState*))(Il2CppBase() + 0x14F89E0))(this);
	}
	template <typename T = void> T set_pressedSprite(uintptr_t value) {
		return ((T (*)(CustomSpriteState*, uintptr_t))(Il2CppBase() + 0x14F89E8))(this, value);
	}
	template <typename T = uintptr_t> T get_selectedSprite() {
		return ((T (*)(CustomSpriteState*))(Il2CppBase() + 0x14F89F0))(this);
	}
	template <typename T = void> T set_selectedSprite(uintptr_t value) {
		return ((T (*)(CustomSpriteState*, uintptr_t))(Il2CppBase() + 0x14F89F8))(this, value);
	}
	template <typename T = uintptr_t> T get_disabledHighlightedSprite() {
		return ((T (*)(CustomSpriteState*))(Il2CppBase() + 0x14F8A00))(this);
	}
	template <typename T = void> T set_disabledHighlightedSprite(uintptr_t value) {
		return ((T (*)(CustomSpriteState*, uintptr_t))(Il2CppBase() + 0x14F8A08))(this, value);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BDDB38))(0, item);
	}

};

}
