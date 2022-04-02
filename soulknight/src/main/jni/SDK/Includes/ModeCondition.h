#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ModeCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModeCondition"));
	}

	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ModeCondition*))(Il2CppBase() + 0x41F6134))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(ModeCondition*))(Il2CppBase() + 0x41F61CC))(this);
	}

};

}
