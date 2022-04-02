#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBoomSplitProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBoomSplitProcessor"));
	}

	template <typename T = void*> static T& componentCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& newBulletShowInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bulletBoom() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T NewBulletOnSplit(uintptr_t original, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(BulletBoomSplitProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x45A9BEC))(this, original, index, splitConfig);
	}
	template <typename T = void> T OriginalBulletOnSplit(uintptr_t splitConfig) {
		return ((T (*)(BulletBoomSplitProcessor*, uintptr_t))(Il2CppBase() + 0x45AA250))(this, splitConfig);
	}
	template <typename T = void> T SetPosition() {
		return ((T (*)(BulletBoomSplitProcessor*))(Il2CppBase() + 0x45A9FE4))(this);
	}
	template <typename T = void> T SetDamageWithFactor(float factor) {
		return ((T (*)(BulletBoomSplitProcessor*, float))(Il2CppBase() + 0x45AA180))(this, factor);
	}
	template <typename T = void> T NewBulletOnSplitb__5_2() {
		return ((T (*)(BulletBoomSplitProcessor*))(Il2CppBase() + 0x45AA404))(this);
	}

};

}
