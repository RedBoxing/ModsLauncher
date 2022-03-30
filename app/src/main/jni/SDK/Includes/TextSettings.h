#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextSettings"));
	}

	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _font() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _style() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _sizeMultiplier() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _lineSpacing() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(TextSettings*))(Il2CppBase() + 0x1BDF454))(this);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(TextSettings*))(Il2CppBase() + 0x1BDF4B8))(this);
	}
	template <typename T = uintptr_t> T get_style() {
		return ((T (*)(TextSettings*))(Il2CppBase() + 0x1BDF518))(this);
	}
	template <typename T = float> T get_sizeMultiplier() {
		return ((T (*)(TextSettings*))(Il2CppBase() + 0x1BDF578))(this);
	}
	template <typename T = float> T get_lineSpacing() {
		return ((T (*)(TextSettings*))(Il2CppBase() + 0x1BDF5D8))(this);
	}

};

}
