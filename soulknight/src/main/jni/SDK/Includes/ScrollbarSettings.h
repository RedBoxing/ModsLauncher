#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScrollbarSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollbarSettings"));
	}

	template <typename T = uintptr_t> T& _handleImageSettings() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _backgroundImageSettings() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_handle() {
		return ((T (*)(ScrollbarSettings*))(Il2CppBase() + 0x1BDE2C8))(this);
	}
	template <typename T = uintptr_t> T get_background() {
		return ((T (*)(ScrollbarSettings*))(Il2CppBase() + 0x1BDE328))(this);
	}
	template <typename T = void> T Apply(uintptr_t item) {
		return ((T (*)(ScrollbarSettings*, uintptr_t))(Il2CppBase() + 0x1BDE388))(this, item);
	}
	template <typename T = void> T Apply_1(uintptr_t item) {
		return ((T (*)(ScrollbarSettings*, uintptr_t))(Il2CppBase() + 0x1BDE508))(this, item);
	}
	template <typename T = void> T iFixBaseProxy_Apply(uintptr_t P0) {
		return ((T (*)(ScrollbarSettings*, uintptr_t))(Il2CppBase() + 0x1BDEC10))(this, P0);
	}

};

}
