#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTRebound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTRebound"));
	}

	template <typename T = int32_t> T& max_rebound_count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& rebound_count() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBTRebound*))(Il2CppBase() + 0x1BB385C))(this);
	}

};

}
