#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& hasKeyboard() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasMouse() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& joysticks() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_joystickCount() {
		return ((T (*)(PlayerInfo*))(Il2CppBase() + 0x2053040))(this);
	}
	template <typename T = int32_t> T IndexOfJoystick(int32_t joystickId) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x205584C))(this, joystickId);
	}
	template <typename T = bool> T ContainsJoystick(int32_t joystickId) {
		return ((T (*)(PlayerInfo*, int32_t))(Il2CppBase() + 0x2055980))(this, joystickId);
	}

};

}
