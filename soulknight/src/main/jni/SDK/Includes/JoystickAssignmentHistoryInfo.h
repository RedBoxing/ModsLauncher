#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JoystickAssignmentHistoryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickAssignmentHistoryInfo"));
	}

	template <typename T = uintptr_t> T& joystick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& oldJoystickId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
