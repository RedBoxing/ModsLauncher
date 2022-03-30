#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossCreatorBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossCreatorBR"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& distributions() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossCreatorBR*))(Il2CppBase() + 0x1DE9458))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(BossCreatorBR*, int32_t))(Il2CppBase() + 0x1DE94B4))(this, seed);
	}
	template <typename T = uintptr_t> T CreateBoss(uintptr_t bossProto, bool increaseCount) {
		return ((T (*)(BossCreatorBR*, uintptr_t, bool))(Il2CppBase() + 0x1DE95A0))(this, bossProto, increaseCount);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(BossCreatorBR*, int32_t))(Il2CppBase() + 0x1DE9958))(this, P0);
	}

};

}
