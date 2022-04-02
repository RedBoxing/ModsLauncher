#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StatueInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueInfo"));
	}

	template <typename T = uintptr_t> T& statueIdx() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
