#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroSkillRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroSkillRewardInfo"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T GetCount() {
		return ((T (*)(HeroSkillRewardInfo*))(Il2CppBase() + 0x1A347D8))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(HeroSkillRewardInfo*))(Il2CppBase() + 0x1A34838))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(HeroSkillRewardInfo*))(Il2CppBase() + 0x1A34898))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(HeroSkillRewardInfo*))(Il2CppBase() + 0x1A34950))(this);
	}
	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(HeroSkillRewardInfo*, bool))(Il2CppBase() + 0x1A34C30))(this, showUi);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(HeroSkillRewardInfo*))(Il2CppBase() + 0x1A34D60))(this);
	}

};

}
