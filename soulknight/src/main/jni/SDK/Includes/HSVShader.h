#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HSVShader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HSVShader"));
	}

	template <typename T = bool> T& inEditMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& hueShift() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& saturation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& hsvMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& hueShiftId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& saturationId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& valueId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_hsvShader() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A24804))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HSVShader*))(Il2CppBase() + 0x1A2488C))(this);
	}
	template <typename T = void> T SetHSV() {
		return ((T (*)(HSVShader*))(Il2CppBase() + 0x1A24AA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HSVShader*))(Il2CppBase() + 0x1A24BF4))(this);
	}

};

}
