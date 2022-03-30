#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectConfigInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectConfigInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sandboxObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
