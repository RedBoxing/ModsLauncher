#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TransformSingleCache1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransformSingleCache`1"));
	}


	template <typename T = uintptr_t> T GetCache(uintptr_t transform) {
		return ((T (*)(TransformSingleCache1*, uintptr_t))(Il2CppBase() + 0x0))(this, transform);
	}

};

}
