#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ResReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResReference"));
	}

	template <typename T = uintptr_t> T& reference() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
