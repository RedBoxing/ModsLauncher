#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass781
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass78_1"));
	}

	template <typename T = uintptr_t> T& joystickInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T LoadJoystickAssignmentsNowb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass781*, uintptr_t))(Il2CppBase() + 0x2055610))(this, x);
	}

};

}
