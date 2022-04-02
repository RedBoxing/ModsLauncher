#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IndexCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndexCondition"));
	}

	template <typename T = int32_t> T& minIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(IndexCondition*))(Il2CppBase() + 0x19C7D10))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(IndexCondition*))(Il2CppBase() + 0x19C7DA0))(this);
	}

};

}
