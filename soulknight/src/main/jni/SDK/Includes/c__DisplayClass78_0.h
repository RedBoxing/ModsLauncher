#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass780
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass78_0"));
	}

	template <typename T = uintptr_t> T& joystick() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T LoadJoystickAssignmentsNowb__0(uintptr_t x) {
		return ((T (*)(cDisplayClass780*, uintptr_t))(Il2CppBase() + 0x20555D4))(this, x);
	}

};

}
