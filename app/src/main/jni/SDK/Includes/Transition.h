#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Transition"));
	}

	template <typename T = uintptr_t> T& from() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& condition() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
