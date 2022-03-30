#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JoystickAssignmentChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickAssignmentChange"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& joystickId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& assign() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_playerId() {
		return ((T (*)(JoystickAssignmentChange*))(Il2CppBase() + 0x205FEC4))(this);
	}
	template <typename T = void> T set_playerId(int32_t value) {
		return ((T (*)(JoystickAssignmentChange*, int32_t))(Il2CppBase() + 0x2062B80))(this, value);
	}
	template <typename T = int32_t> T get_joystickId() {
		return ((T (*)(JoystickAssignmentChange*))(Il2CppBase() + 0x205FED4))(this);
	}
	template <typename T = void> T set_joystickId(int32_t value) {
		return ((T (*)(JoystickAssignmentChange*, int32_t))(Il2CppBase() + 0x2062B88))(this, value);
	}
	template <typename T = bool> T get_assign() {
		return ((T (*)(JoystickAssignmentChange*))(Il2CppBase() + 0x205FECC))(this);
	}
	template <typename T = void> T set_assign(bool value) {
		return ((T (*)(JoystickAssignmentChange*, bool))(Il2CppBase() + 0x2062B90))(this, value);
	}

};

}
