#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AttributeQueryComparator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttributeQueryComparator"));
	}


	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(AttributeQueryComparator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D09BA4))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(AttributeQueryComparator*, uintptr_t))(Il2CppBase() + 0x2D09CB4))(this, obj);
	}

};

}
