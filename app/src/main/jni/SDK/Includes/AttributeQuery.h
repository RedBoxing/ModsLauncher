#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AttributeQuery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttributeQuery"));
	}

	template <typename T = uintptr_t> T& MemberInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& AttributeType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
