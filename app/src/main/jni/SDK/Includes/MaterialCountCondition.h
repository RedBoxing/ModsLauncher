#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MaterialCountCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaterialCountCondition"));
	}

	template <typename T = Il2CppString*> T& itemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(MaterialCountCondition*))(Il2CppBase() + 0x41E6A84))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(MaterialCountCondition*))(Il2CppBase() + 0x41E6B7C))(this);
	}

};

}
