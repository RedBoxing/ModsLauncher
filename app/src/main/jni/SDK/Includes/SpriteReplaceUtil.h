#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteReplaceUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteReplaceUtil"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T ReplaceSprite(Il2CppString* key) {
		return ((T (*)(SpriteReplaceUtil*, Il2CppString*))(Il2CppBase() + 0x4298A40))(this, key);
	}

};

}
