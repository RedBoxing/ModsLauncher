#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIFlicker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFlicker"));
	}

	template <typename T = Il2CppString*> static T& FLICKER_OBJECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& flicker_script() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> static T StartFlicker() {
		return ((T (*)(void *))(Il2CppBase() + 0x4331DD0))(0);
	}
	template <typename T = void> T ShowFlicker() {
		return ((T (*)(UIFlicker*))(Il2CppBase() + 0x4331F84))(this);
	}

};

}
