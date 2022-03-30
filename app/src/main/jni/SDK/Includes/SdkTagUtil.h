#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SdkTagUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SdkTagUtil"));
	}


	template <typename T = bool> static T HasLoginTag(uintptr_t tag) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181968C))(0, tag);
	}
	template <typename T = bool> static T HasRegisteTag(uintptr_t tag) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18196EC))(0, tag);
	}

};

}
