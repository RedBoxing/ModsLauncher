#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnumExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnumExtension"));
	}


	template <typename T = int32_t> static T ToInt(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4464204))(0, e);
	}
	template <typename T = uintptr_t> static T ToEnum(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x0))(0, value);
	}

};

}
