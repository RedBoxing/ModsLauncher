#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo"));
	}

	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
