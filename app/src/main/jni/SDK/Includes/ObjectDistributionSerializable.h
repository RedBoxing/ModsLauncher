#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectDistributionSerializable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDistributionSerializable"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
