#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateSpriteChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateSpriteChanger"));
	}

	template <typename T = uintptr_t> T& dest_sprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skins() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T GetSkinSprite(int32_t skinIndex) {
		return ((T (*)(DecorateSpriteChanger*, int32_t))(Il2CppBase() + 0x42E248C))(this, skinIndex);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(DecorateSpriteChanger*, int32_t))(Il2CppBase() + 0x42E257C))(this, skinIndex);
	}

};

}
