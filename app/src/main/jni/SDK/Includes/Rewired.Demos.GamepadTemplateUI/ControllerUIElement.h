#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos.GamepadTemplateUI {

class ControllerUIElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos.GamepadTemplateUI", "ControllerUIElement"));
	}

	template <typename T = uintptr_t> T& _highlightColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _positiveUIEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _negativeUIEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _label() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _positiveLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _negativeLabel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _childElements() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _origColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isActive() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _highlightAmount() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = bool> T get_hasEffects() {
		return ((T (*)(ControllerUIElement*))(Il2CppBase() + 0x20674B4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ControllerUIElement*))(Il2CppBase() + 0x20675B4))(this);
	}
	template <typename T = void> T Activate(float amount) {
		return ((T (*)(ControllerUIElement*, float))(Il2CppBase() + 0x2067950))(this, amount);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ControllerUIElement*))(Il2CppBase() + 0x2067D30))(this);
	}
	template <typename T = void> T SetLabel(Il2CppString* text, uintptr_t labelType) {
		return ((T (*)(ControllerUIElement*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2067F6C))(this, text, labelType);
	}
	template <typename T = void> T ClearLabels() {
		return ((T (*)(ControllerUIElement*))(Il2CppBase() + 0x2067680))(this);
	}
	template <typename T = void> T RedrawImage() {
		return ((T (*)(ControllerUIElement*))(Il2CppBase() + 0x2067C84))(this);
	}

};

}
