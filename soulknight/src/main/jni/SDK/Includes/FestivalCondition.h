#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FestivalCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FestivalCondition"));
	}

	template <typename T = uintptr_t> T& festival() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(FestivalCondition*))(Il2CppBase() + 0x41F6260))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(FestivalCondition*))(Il2CppBase() + 0x41F62E8))(this);
	}

};

}
