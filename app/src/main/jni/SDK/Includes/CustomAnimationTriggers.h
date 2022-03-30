#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomAnimationTriggers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomAnimationTriggers"));
	}

	template <typename T = Il2CppString*> T& m_DisabledTrigger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_HighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_NormalTrigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_PressedTrigger() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_SelectedTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_DisabledHighlightedTrigger() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_disabledTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F7C24))(this);
	}
	template <typename T = void> T set_disabledTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F7C84))(this, value);
	}
	template <typename T = Il2CppString*> T get_highlightedTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F7CF8))(this);
	}
	template <typename T = void> T set_highlightedTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F7D58))(this, value);
	}
	template <typename T = Il2CppString*> T get_normalTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F7DCC))(this);
	}
	template <typename T = void> T set_normalTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F7E2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_pressedTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F7EA0))(this);
	}
	template <typename T = void> T set_pressedTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F7F00))(this, value);
	}
	template <typename T = Il2CppString*> T get_selectedTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F7F74))(this);
	}
	template <typename T = void> T set_selectedTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F7FD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_disabledHighlightedTrigger() {
		return ((T (*)(CustomAnimationTriggers*))(Il2CppBase() + 0x21F8048))(this);
	}
	template <typename T = void> T set_disabledHighlightedTrigger(Il2CppString* value) {
		return ((T (*)(CustomAnimationTriggers*, Il2CppString*))(Il2CppBase() + 0x21F80A8))(this, value);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21F811C))(0, item);
	}

};

}
