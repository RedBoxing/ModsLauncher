#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroLevelRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroLevelRewardInfo"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T GetCount() {
		return ((T (*)(HeroLevelRewardInfo*))(Il2CppBase() + 0x1A3368C))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(HeroLevelRewardInfo*))(Il2CppBase() + 0x1A336EC))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(HeroLevelRewardInfo*))(Il2CppBase() + 0x1A3374C))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(HeroLevelRewardInfo*))(Il2CppBase() + 0x1A339BC))(this);
	}
	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(HeroLevelRewardInfo*, bool))(Il2CppBase() + 0x1A33A1C))(this, showUi);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(HeroLevelRewardInfo*))(Il2CppBase() + 0x1A33AE4))(this);
	}

};

}
