#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdjustTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdjustTransform"));
	}

	template <typename T = bool> T& adjustX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& adjustY() {
		return *(T*)((uintptr_t)this + 0x19);
	}


};

}
