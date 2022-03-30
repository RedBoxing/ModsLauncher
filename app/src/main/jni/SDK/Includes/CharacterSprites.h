#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterSprites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterSprites"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& characterSpriteModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ExclusiveSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BeheadedIdle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BeheadedRun() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _characterSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetSpriteModel(int32_t characterIndex, int32_t skinIndex) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1877D48))(0, characterIndex, skinIndex);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x1878078))(0);
	}
	template <typename T = uintptr_t> static T GetBeheadedModel(uintptr_t beheaded) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1877F2C))(0, beheaded);
	}

};

}
