#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteTextureOffsetUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteTextureOffsetUtil"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& offset_speed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& tex_offest() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& total_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SpriteTextureOffsetUtil*))(Il2CppBase() + 0x4298CFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpriteTextureOffsetUtil*))(Il2CppBase() + 0x4298E4C))(this);
	}

};

}
