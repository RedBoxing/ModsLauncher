#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinObjectActiveChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinObjectActiveChanger"));
	}

	template <typename T = void*> T& activeIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(SkinObjectActiveChanger*, int32_t))(Il2CppBase() + 0x1836E04))(this, skinIndex);
	}

};

}
