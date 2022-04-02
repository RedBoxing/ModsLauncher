#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TeamInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamInfoView"));
	}

	template <typename T = uintptr_t> T& hpImg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mpImg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& headImg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& missRoot() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TeamInfoView*))(Il2CppBase() + 0x43BE1D8))(this);
	}
	template <typename T = void> T UpdateHpValue(float percentage, bool forceRefresh) {
		return ((T (*)(TeamInfoView*, float, bool))(Il2CppBase() + 0x43BE434))(this, percentage, forceRefresh);
	}
	template <typename T = void> T UpdateMpValue(float percentage, bool forceRefresh) {
		return ((T (*)(TeamInfoView*, float, bool))(Il2CppBase() + 0x43BE5E8))(this, percentage, forceRefresh);
	}
	template <typename T = void> T UpdateHeadImg(int32_t playerIdx, int32_t skinIdx) {
		return ((T (*)(TeamInfoView*, int32_t, int32_t))(Il2CppBase() + 0x43BE79C))(this, playerIdx, skinIdx);
	}
	template <typename T = void> T UpdateHeadImageColor(bool isDead) {
		return ((T (*)(TeamInfoView*, bool))(Il2CppBase() + 0x43BE8A8))(this, isDead);
	}

};

}
