#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ComponentMultiCache2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentMultiCache`2"));
	}


	template <typename T = uintptr_t> T GetCache(uintptr_t cacheKey) {
		return ((T (*)(ComponentMultiCache2*, uintptr_t))(Il2CppBase() + 0x0))(this, cacheKey);
	}
	template <typename T = bool> T hasCach(uintptr_t gameObject) {
		return ((T (*)(ComponentMultiCache2*, uintptr_t))(Il2CppBase() + 0x0))(this, gameObject);
	}

};

}
