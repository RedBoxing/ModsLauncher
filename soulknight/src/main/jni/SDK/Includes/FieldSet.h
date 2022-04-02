#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FieldSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FieldSet"));
	}

	template <typename T = uintptr_t> T& groupContainer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& fields() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
