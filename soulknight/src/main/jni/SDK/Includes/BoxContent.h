#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BoxContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxContent"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(BoxContent*))(Il2CppBase() + 0x1DD08A8))(this);
	}

};

}
