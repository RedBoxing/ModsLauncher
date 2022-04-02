#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PickableUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickableUtil"));
	}


	template <typename T = uintptr_t> static T GetPickableInfo(uintptr_t type, Il2CppString* name, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4394820))(0, type, name, count);
	}

};

}
