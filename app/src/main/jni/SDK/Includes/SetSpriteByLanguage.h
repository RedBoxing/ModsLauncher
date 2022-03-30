#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SetSpriteByLanguage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetSpriteByLanguage"));
	}

	template <typename T = uintptr_t> T& defaultSpite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spriteSettings() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SetSpriteByLanguage*))(Il2CppBase() + 0x182619C))(this);
	}

};

}
