#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSpearBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSpearBullet"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSpearBullet*, bool, bool))(Il2CppBase() + 0x217A204))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSpearBullet*))(Il2CppBase() + 0x217A334))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunSpearBullet*))(Il2CppBase() + 0x217A928))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunSpearBullet*))(Il2CppBase() + 0x217A754))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSpearBullet*, bool, bool))(Il2CppBase() + 0x217A9E4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunSpearBullet*))(Il2CppBase() + 0x217A9F4))(this);
	}

};

}
