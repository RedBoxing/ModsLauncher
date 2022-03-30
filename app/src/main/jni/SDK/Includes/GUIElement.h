#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GUIElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUIElement"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& selectable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& uiElementInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& permanentStateSet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& children() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(GUIElement*))(Il2CppBase() + 0x21DFB10))(this);
	}
	template <typename T = void> T set_rectTransform(uintptr_t value) {
		return ((T (*)(GUIElement*, uintptr_t))(Il2CppBase() + 0x21DFB18))(this, value);
	}
	template <typename T = void> T SetInteractible(bool state, bool playTransition) {
		return ((T (*)(GUIElement*, bool, bool))(Il2CppBase() + 0x21DFB20))(this, state, playTransition);
	}
	template <typename T = void> T SetInteractible_1(bool state, bool playTransition, bool permanent) {
		return ((T (*)(GUIElement*, bool, bool, bool))(Il2CppBase() + 0x21DFBB0))(this, state, playTransition, permanent);
	}
	template <typename T = void> T SetTextWidth(int32_t value) {
		return ((T (*)(GUIElement*, int32_t))(Il2CppBase() + 0x21DFDB0))(this, value);
	}
	template <typename T = void> T SetFirstChildObjectWidth(uintptr_t type, int32_t value) {
		return ((T (*)(GUIElement*, uintptr_t, int32_t))(Il2CppBase() + 0x21DFF44))(this, type, value);
	}
	template <typename T = void> T SetLabel(Il2CppString* label) {
		return ((T (*)(GUIElement*, Il2CppString*))(Il2CppBase() + 0x21E0148))(this, label);
	}
	template <typename T = Il2CppString*> T GetLabel() {
		return ((T (*)(GUIElement*))(Il2CppBase() + 0x21E0248))(this);
	}
	template <typename T = void> T AddChild(uintptr_t child) {
		return ((T (*)(GUIElement*, uintptr_t))(Il2CppBase() + 0x21E0340))(this, child);
	}
	template <typename T = void> T SetElementInfoData(Il2CppString* identifier, int32_t intData) {
		return ((T (*)(GUIElement*, Il2CppString*, int32_t))(Il2CppBase() + 0x21DF7F8))(this, identifier, intData);
	}
	template <typename T = void> T SetActive(bool state) {
		return ((T (*)(GUIElement*, bool))(Il2CppBase() + 0x21E03F8))(this, state);
	}
	template <typename T = bool> T Init() {
		return ((T (*)(GUIElement*))(Il2CppBase() + 0x21E04F0))(this);
	}

};

}
