#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitTaskParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaitTaskParam"));
	}

	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_Duration() {
		return ((T (*)(WaitTaskParam*))(Il2CppBase() + 0x4365044))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(WaitTaskParam*, float))(Il2CppBase() + 0x43650E4))(this, value);
	}

};

}
