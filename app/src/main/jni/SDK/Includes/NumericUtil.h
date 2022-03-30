#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NumericUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NumericUtil"));
	}


	template <typename T = Il2CppString*> static T DecimalToHexString(int32_t value, bool lowercase, bool paddingzero) {
		return ((T (*)(void *, int32_t, bool, bool))(Il2CppBase() + 0x453A794))(0, value, lowercase, paddingzero);
	}
	template <typename T = Il2CppString*> static T ColorToHexString(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x453A940))(0, color);
	}

};

}
