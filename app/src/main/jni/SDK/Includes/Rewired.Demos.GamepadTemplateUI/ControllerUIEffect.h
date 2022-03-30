#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos.GamepadTemplateUI {

class ControllerUIEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos.GamepadTemplateUI", "ControllerUIEffect"));
	}

	template <typename T = uintptr_t> T& _highlightColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _origColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isActive() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _highlightAmount() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ControllerUIEffect*))(Il2CppBase() + 0x2067124))(this);
	}
	template <typename T = void> T Activate(float amount) {
		return ((T (*)(ControllerUIEffect*, float))(Il2CppBase() + 0x20671EC))(this, amount);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ControllerUIEffect*))(Il2CppBase() + 0x20673EC))(this);
	}
	template <typename T = void> T RedrawImage() {
		return ((T (*)(ControllerUIEffect*))(Il2CppBase() + 0x2067318))(this);
	}

};

}
