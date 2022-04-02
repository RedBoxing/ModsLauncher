#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunParallel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunParallel"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& space() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunParallel*))(Il2CppBase() + 0x216B7AC))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i, float devia) {
		return ((T (*)(GunParallel*, int32_t, float))(Il2CppBase() + 0x216B968))(this, i, devia);
	}

};

}
