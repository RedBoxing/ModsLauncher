#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DirtModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DirtModel"));
	}

	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& spriteAnimation() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
