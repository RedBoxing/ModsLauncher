#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UISliderControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UISliderControl"));
	}

	template <typename T = uintptr_t> T& iconImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _showIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _showSlider() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = bool> T get_showIcon() {
		return ((T (*)(UISliderControl*))(Il2CppBase() + 0x1BE1CC8))(this);
	}
	template <typename T = void> T set_showIcon(bool value) {
		return ((T (*)(UISliderControl*, bool))(Il2CppBase() + 0x1BE1D28))(this, value);
	}
	template <typename T = bool> T get_showSlider() {
		return ((T (*)(UISliderControl*))(Il2CppBase() + 0x1BE1E34))(this);
	}
	template <typename T = void> T set_showSlider(bool value) {
		return ((T (*)(UISliderControl*, bool))(Il2CppBase() + 0x1BE1E94))(this, value);
	}
	template <typename T = void> T SetCancelCallback(uintptr_t cancelCallback) {
		return ((T (*)(UISliderControl*, uintptr_t))(Il2CppBase() + 0x1BE1FA0))(this, cancelCallback);
	}
	template <typename T = void> T iFixBaseProxy_SetCancelCallback(uintptr_t P0) {
		return ((T (*)(UISliderControl*, uintptr_t))(Il2CppBase() + 0x1BE23EC))(this, P0);
	}

};

}
