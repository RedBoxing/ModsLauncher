#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinSpriteChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinSpriteChanger"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& defaultSprite() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(SkinSpriteChanger*, int32_t))(Il2CppBase() + 0x183749C))(this, skinIndex);
	}

};

}
