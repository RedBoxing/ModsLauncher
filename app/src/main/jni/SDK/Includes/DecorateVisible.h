#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateVisible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateVisible"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& validSkins() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& img() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DecorateVisible*))(Il2CppBase() + 0x42E26BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DecorateVisible*))(Il2CppBase() + 0x42E27A8))(this);
	}
	template <typename T = void> T RefreshDecoration(int32_t skinIndex) {
		return ((T (*)(DecorateVisible*, int32_t))(Il2CppBase() + 0x42E2828))(this, skinIndex);
	}
	template <typename T = uintptr_t> T GetDecorateInfo(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(DecorateVisible*, uintptr_t, int32_t))(Il2CppBase() + 0x42E2AD8))(this, hero, skinIndex);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(DecorateVisible*, int32_t))(Il2CppBase() + 0x42E2C78))(this, skinIndex);
	}

};

}
