#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroRewarInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroRewarInfo"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetCount() {
		return ((T (*)(HeroRewarInfo*))(Il2CppBase() + 0x1A33BC4))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(HeroRewarInfo*))(Il2CppBase() + 0x1A33C24))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(HeroRewarInfo*))(Il2CppBase() + 0x1A33C84))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(HeroRewarInfo*))(Il2CppBase() + 0x1A33D60))(this);
	}
	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(HeroRewarInfo*, bool))(Il2CppBase() + 0x1A33E28))(this, showUi);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(HeroRewarInfo*))(Il2CppBase() + 0x1A33EDC))(this);
	}

};

}
