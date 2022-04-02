#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ImageSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageSettings"));
	}

	template <typename T = uintptr_t> T& _color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _materal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _preserveAspect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _fillCenter() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& _fillMethod() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _fillAmout() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _fillClockwise() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _fillOrigin() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDC20))(this);
	}
	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDC84))(this);
	}
	template <typename T = uintptr_t> T get_materal() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDCE4))(this);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDD44))(this);
	}
	template <typename T = bool> T get_preserveAspect() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDDA4))(this);
	}
	template <typename T = bool> T get_fillCenter() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDE04))(this);
	}
	template <typename T = uintptr_t> T get_fillMethod() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDE64))(this);
	}
	template <typename T = float> T get_fillAmout() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDEC4))(this);
	}
	template <typename T = bool> T get_fillClockwise() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDF24))(this);
	}
	template <typename T = int32_t> T get_fillOrigin() {
		return ((T (*)(ImageSettings*))(Il2CppBase() + 0x1BDDF84))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t image) {
		return ((T (*)(ImageSettings*, uintptr_t))(Il2CppBase() + 0x1BDDFE4))(this, image);
	}

};

}
