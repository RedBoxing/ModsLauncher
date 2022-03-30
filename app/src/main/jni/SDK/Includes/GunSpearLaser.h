#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSpearLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSpearLaser"));
	}

	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& bullet2_count() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunSpearLaser*, bool, bool))(Il2CppBase() + 0x217A9FC))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunSpearLaser*))(Il2CppBase() + 0x217AB2C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunSpearLaser*))(Il2CppBase() + 0x217B130))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunSpearLaser*))(Il2CppBase() + 0x217AF8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunSpearLaser*, bool, bool))(Il2CppBase() + 0x217B1EC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunSpearLaser*))(Il2CppBase() + 0x217B1FC))(this);
	}

};

}
