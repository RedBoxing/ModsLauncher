#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DecorateFollower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecorateFollower"));
	}

	template <typename T = uintptr_t> T& followTarget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& followerObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isArrive() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& followerPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DecorateFollower*))(Il2CppBase() + 0x42E15B4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DecorateFollower*))(Il2CppBase() + 0x42E1664))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DecorateFollower*))(Il2CppBase() + 0x42E1A8C))(this);
	}
	template <typename T = void> T OnChangeDir(float dir) {
		return ((T (*)(DecorateFollower*, float))(Il2CppBase() + 0x42E1DA8))(this, dir);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(DecorateFollower*, int32_t))(Il2CppBase() + 0x42E1774))(this, skinIndex);
	}

};

}
