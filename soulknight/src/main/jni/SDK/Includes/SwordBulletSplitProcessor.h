#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwordBulletSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwordBulletSplitProcessor"));
	}

	template <typename T = float> T& exactAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timeInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_isFaceRight() {
		return ((T (*)(SwordBulletSplitProcessor*))(Il2CppBase() + 0x18C0D4C))(this);
	}
	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(SwordBulletSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x18C0DD4))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(SwordBulletSplitProcessor*, uintptr_t))(Il2CppBase() + 0x18C13C0))(this, splitConfig);
	}
	template <typename T = void> T DelayedActive(int32_t index, int32_t count) {
		return ((T (*)(SwordBulletSplitProcessor*, int32_t, int32_t))(Il2CppBase() + 0x18C112C))(this, index, count);
	}
	template <typename T = void> T SplitProcess(uintptr_t splitConfig, int32_t index) {
		return ((T (*)(SwordBulletSplitProcessor*, uintptr_t, int32_t))(Il2CppBase() + 0x18C0F84))(this, splitConfig, index);
	}
	template <typename T = void> T DelayedActiveb__6_2() {
		return ((T (*)(SwordBulletSplitProcessor*))(Il2CppBase() + 0x18C1468))(this);
	}

};

}
