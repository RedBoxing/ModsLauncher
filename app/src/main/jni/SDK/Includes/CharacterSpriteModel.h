#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterSpriteModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterSpriteModel"));
	}

	template <typename T = int32_t> T& characterIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& idleSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& runSprites() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& deadSprites() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
