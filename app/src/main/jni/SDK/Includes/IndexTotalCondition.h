#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IndexTotalCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndexTotalCondition"));
	}

	template <typename T = int32_t> T& minIndexTotal() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(IndexTotalCondition*))(Il2CppBase() + 0x19C7DA8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(IndexTotalCondition*))(Il2CppBase() + 0x19C7EE4))(this);
	}

};

}
