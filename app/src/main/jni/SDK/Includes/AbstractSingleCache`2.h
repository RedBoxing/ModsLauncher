#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AbstractSingleCache2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractSingleCache`2"));
	}

	template <typename T = uintptr_t> T& cacheKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& cacheValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T GetCache(uintptr_t cacheKey) {
		return ((T (*)(AbstractSingleCache2*, uintptr_t))(Il2CppBase() + 0x0))(this, cacheKey);
	}

};

}
