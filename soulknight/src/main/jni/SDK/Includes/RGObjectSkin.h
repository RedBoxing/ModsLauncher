#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGObjectSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGObjectSkin"));
	}

	template <typename T = int32_t> T& obj_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGObjectSkin*))(Il2CppBase() + 0x1B7BBE0))(this);
	}

};

}
