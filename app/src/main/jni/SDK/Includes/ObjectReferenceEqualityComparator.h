#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectReferenceEqualityComparator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectReferenceEqualityComparator"));
	}

	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T System_Collections_Generic_IEqualityComparerSystem_Object_Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(ObjectReferenceEqualityComparator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45194B8))(this, x, y);
	}
	template <typename T = int32_t> T System_Collections_Generic_IEqualityComparerSystem_Object_GetHashCode(uintptr_t obj) {
		return ((T (*)(ObjectReferenceEqualityComparator*, uintptr_t))(Il2CppBase() + 0x4519538))(this, obj);
	}

};

}
