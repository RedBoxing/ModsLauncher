#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ComodityInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComodityInfo"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& minCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
