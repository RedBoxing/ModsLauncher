#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletInitElf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletInitElf"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletInitElf*))(Il2CppBase() + 0x2382A04))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletInitElf*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2382AD4))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletInitElf*))(Il2CppBase() + 0x2382C4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletInitElf*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2382C54))(this, P0, P1);
	}

};

}
