#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FestivalSkinSpriteChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FestivalSkinSpriteChanger"));
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
	template <typename T = uintptr_t> T& festivalDecorateConfig() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& festivalSprites() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(FestivalSkinSpriteChanger*, int32_t))(Il2CppBase() + 0x44776B8))(this, skinIndex);
	}

};

}
