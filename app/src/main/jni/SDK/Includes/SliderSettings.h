#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SliderSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SliderSettings"));
	}

	template <typename T = uintptr_t> T& _handleImageSettings() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _fillImageSettings() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _backgroundImageSettings() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_handleImageSettings() {
		return ((T (*)(SliderSettings*))(Il2CppBase() + 0x1BDEF94))(this);
	}
	template <typename T = uintptr_t> T get_fillImageSettings() {
		return ((T (*)(SliderSettings*))(Il2CppBase() + 0x1BDEFF4))(this);
	}
	template <typename T = uintptr_t> T get_backgroundImageSettings() {
		return ((T (*)(SliderSettings*))(Il2CppBase() + 0x1BDF054))(this);
	}
	template <typename T = void> T Apply(uintptr_t item) {
		return ((T (*)(SliderSettings*, uintptr_t))(Il2CppBase() + 0x1BDF0B4))(this, item);
	}
	template <typename T = void> T Apply_1(uintptr_t item) {
		return ((T (*)(SliderSettings*, uintptr_t))(Il2CppBase() + 0x1BDF364))(this, item);
	}
	template <typename T = void> T iFixBaseProxy_Apply(uintptr_t P0) {
		return ((T (*)(SliderSettings*, uintptr_t))(Il2CppBase() + 0x1BDF450))(this, P0);
	}

};

}
