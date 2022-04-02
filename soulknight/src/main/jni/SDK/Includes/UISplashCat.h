#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISplashCat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISplashCat"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& animatorControllers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& animatorParent() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UISplashCat*))(Il2CppBase() + 0x42425CC))(this);
	}
	template <typename T = uintptr_t> T Run() {
		return ((T (*)(UISplashCat*))(Il2CppBase() + 0x424272C))(this);
	}

};

}
