#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteSetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteSetter"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& defaultSprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T SetSprite(Il2CppString* key) {
		return ((T (*)(SpriteSetter*, Il2CppString*))(Il2CppBase() + 0x4298BE4))(this, key);
	}

};

}
