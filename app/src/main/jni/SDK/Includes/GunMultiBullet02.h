#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMultiBullet02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMultiBullet02"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = void> T Attack() {
		return ((T (*)(GunMultiBullet02*))(Il2CppBase() + 0x21667A0))(this);
	}
	template <typename T = void> T CreateBullet(uintptr_t bulletPrefab, int32_t i) {
		return ((T (*)(GunMultiBullet02*, uintptr_t, int32_t))(Il2CppBase() + 0x216691C))(this, bulletPrefab, i);
	}

};

}
