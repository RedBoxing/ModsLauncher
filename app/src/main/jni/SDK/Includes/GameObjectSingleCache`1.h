#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameObjectSingleCache1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectSingleCache`1"));
	}


	template <typename T = uintptr_t> T GetCache(uintptr_t gameObject) {
		return ((T (*)(GameObjectSingleCache1*, uintptr_t))(Il2CppBase() + 0x0))(this, gameObject);
	}

};

}
