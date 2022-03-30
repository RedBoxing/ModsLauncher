#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomObjectResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomObjectResult"));
	}

	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
