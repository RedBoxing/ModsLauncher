#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass782
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass78_2"));
	}

	template <typename T = uintptr_t> T& match() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T LoadJoystickAssignmentsNowb__2(uintptr_t x) {
		return ((T (*)(cDisplayClass782*, uintptr_t))(Il2CppBase() + 0x205565C))(this, x);
	}

};

}
