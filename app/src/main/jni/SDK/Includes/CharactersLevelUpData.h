#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharactersLevelUpData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharactersLevelUpData"));
	}

	template <typename T = int32_t> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LevelUpGems() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MaxLevelReward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MaxLevelRewardTips() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& CharBuff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& IsHeroChar() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RelationHeroChar() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
