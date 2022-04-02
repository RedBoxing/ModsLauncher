#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiPlayerView"));
	}

	template <typename T = uintptr_t> T& hero_bg_obj() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& hero_sp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ready_sp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rank_sp() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowReady(bool ready, uintptr_t sp) {
		return ((T (*)(MultiPlayerView*, bool, uintptr_t))(Il2CppBase() + 0x16F27A4))(this, ready, sp);
	}
	template <typename T = void> T SetRank(uintptr_t rankSp) {
		return ((T (*)(MultiPlayerView*, uintptr_t))(Il2CppBase() + 0x16F27B0))(this, rankSp);
	}

};

}
