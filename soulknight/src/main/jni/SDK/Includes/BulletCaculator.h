#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletCaculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletCaculator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& number_sps() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletCaculator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45AB800))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletCaculator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45AB9F8))(this, P0, P1);
	}

};

}
