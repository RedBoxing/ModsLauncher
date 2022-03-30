#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGCharGray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGCharGray"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGCharGray*))(Il2CppBase() + 0x19DB3A0))(this);
	}
	template <typename T = void> T UnLockChar() {
		return ((T (*)(RGCharGray*))(Il2CppBase() + 0x19DB668))(this);
	}

};

}
