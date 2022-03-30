#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectBuffEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectBuffEvent"));
	}

	template <typename T = uintptr_t> T& buffMsg() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
