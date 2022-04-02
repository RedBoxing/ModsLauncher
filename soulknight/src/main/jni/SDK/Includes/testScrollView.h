#pragma once
#include "Il2Cpp/Il2Cpp.h"

class testScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "testScrollView"));
	}

	template <typename T = uintptr_t> T& goPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Add() {
		return ((T (*)(testScrollView*))(Il2CppBase() + 0x4607748))(this);
	}

};

}
