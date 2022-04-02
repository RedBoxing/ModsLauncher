#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RewardPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardPanel"));
	}

	template <typename T = uintptr_t> T& itemProto() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rewardTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RewardPanel*))(Il2CppBase() + 0x204B7C4))(this);
	}
	template <typename T = void> T Refresh(uintptr_t package, bool isRewarded) {
		return ((T (*)(RewardPanel*, uintptr_t, bool))(Il2CppBase() + 0x204B83C))(this, package, isRewarded);
	}
	template <typename T = void> T AddItem(uintptr_t rewardable, bool isGray) {
		return ((T (*)(RewardPanel*, uintptr_t, bool))(Il2CppBase() + 0x204BA04))(this, rewardable, isGray);
	}
	template <typename T = void> T ChangeIconColor(bool isGray) {
		return ((T (*)(RewardPanel*, bool))(Il2CppBase() + 0x204BB7C))(this, isGray);
	}

};

}
