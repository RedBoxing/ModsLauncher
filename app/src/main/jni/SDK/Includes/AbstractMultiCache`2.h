#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AbstractMultiCache2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractMultiCache`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& cacheDic() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T GetCache(uintptr_t cacheKey) {
		return ((T (*)(AbstractMultiCache2*, uintptr_t))(Il2CppBase() + 0x0))(this, cacheKey);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(AbstractMultiCache2*))(Il2CppBase() + 0x0))(this);
	}

};

}
