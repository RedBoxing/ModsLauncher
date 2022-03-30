#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ResourceFieldAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceFieldAttribute"));
	}

	template <typename T = uintptr_t> T& resType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_resType() {
		return ((T (*)(ResourceFieldAttribute*))(Il2CppBase() + 0x42CAAF8))(this);
	}
	template <typename T = void> T set_resType(uintptr_t value) {
		return ((T (*)(ResourceFieldAttribute*, uintptr_t))(Il2CppBase() + 0x42CAB00))(this, value);
	}

};

}
