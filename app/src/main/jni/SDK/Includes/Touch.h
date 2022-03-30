#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Touch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Touch"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& touchId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
