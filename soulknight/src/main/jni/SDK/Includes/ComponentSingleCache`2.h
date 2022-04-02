#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ComponentSingleCache2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentSingleCache`2"));
	}


	template <typename T = uintptr_t> T GetCache(uintptr_t keyComponent) {
		return ((T (*)(ComponentSingleCache2*, uintptr_t))(Il2CppBase() + 0x0))(this, keyComponent);
	}

};

}
