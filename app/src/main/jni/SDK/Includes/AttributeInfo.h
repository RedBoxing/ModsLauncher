#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AttributeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttributeInfo"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
