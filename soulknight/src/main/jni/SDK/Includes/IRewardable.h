#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IRewardable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRewardable"));
	}


	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(IRewardable*, bool))(Il2CppBase() + 0x0))(this, showUi);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(IRewardable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(IRewardable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(IRewardable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(IRewardable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(IRewardable*))(Il2CppBase() + 0x0))(this);
	}

};

}
