#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteRandomSetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteRandomSetter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& spriteRenderers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _includedSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& _orderList() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(SpriteRandomSetter*))(Il2CppBase() + 0x42983FC))(this);
	}

};

}
