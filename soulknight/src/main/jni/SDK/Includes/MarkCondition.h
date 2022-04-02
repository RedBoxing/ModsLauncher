#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MarkCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MarkCondition"));
	}

	template <typename T = Il2CppString*> T& mark() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(MarkCondition*))(Il2CppBase() + 0x41E69C8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(MarkCondition*))(Il2CppBase() + 0x41E6A7C))(this);
	}

};

}
