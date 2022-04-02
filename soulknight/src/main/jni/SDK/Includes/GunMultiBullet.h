#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMultiBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMultiBullet"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& random_weight() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& allAtOnce() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& byOrder() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunMultiBullet*))(Il2CppBase() + 0x228966C))(this);
	}
	template <typename T = uintptr_t> T CreateAllBullet() {
		return ((T (*)(GunMultiBullet*))(Il2CppBase() + 0x2289954))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(GunMultiBullet*, int32_t))(Il2CppBase() + 0x2289A08))(this, i);
	}

};

}
