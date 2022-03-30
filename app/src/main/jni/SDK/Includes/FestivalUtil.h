#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FestivalUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FestivalUtil"));
	}

	template <typename T = uintptr_t> T& _festival() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_Festival() {
		return ((T (*)(void *))(Il2CppBase() + 0x4477A5C))(0);
	}

};

}
