#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FallbackJoystickIdentification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FallbackJoystickIdentification"));
	}

	template <typename T = int32_t> T& joystickId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& joystickName() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_joystickId() {
		return ((T (*)(FallbackJoystickIdentification*))(Il2CppBase() + 0x205E134))(this);
	}
	template <typename T = void> T set_joystickId(int32_t value) {
		return ((T (*)(FallbackJoystickIdentification*, int32_t))(Il2CppBase() + 0x2062B70))(this, value);
	}
	template <typename T = Il2CppString*> T get_joystickName() {
		return ((T (*)(FallbackJoystickIdentification*))(Il2CppBase() + 0x205E12C))(this);
	}
	template <typename T = void> T set_joystickName(Il2CppString* value) {
		return ((T (*)(FallbackJoystickIdentification*, Il2CppString*))(Il2CppBase() + 0x2062B78))(this, value);
	}

};

}
