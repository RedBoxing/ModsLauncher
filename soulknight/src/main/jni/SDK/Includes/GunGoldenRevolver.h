#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGoldenRevolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGoldenRevolver"));
	}

	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& maxConsume() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& prepareTime() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> T& shootCountAnimName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& expBullet() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& addTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& weaponContainer() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& hasExpShoot() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& validCount() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249BC70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249BE00))(this);
	}
	template <typename T = int32_t> T get_shootCount() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C120))(this);
	}
	template <typename T = void> T set_shootCount(int32_t value) {
		return ((T (*)(GunGoldenRevolver*, int32_t))(Il2CppBase() + 0x249C19C))(this, value);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C230))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunGoldenRevolver*, bool))(Il2CppBase() + 0x249C294))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C360))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C7D4))(this);
	}
	template <typename T = void> T CreateBullet(float speed, float angle) {
		return ((T (*)(GunGoldenRevolver*, float, float))(Il2CppBase() + 0x249C50C))(this, speed, angle);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C840))(this);
	}
	template <typename T = void> T ResetConsume() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249BE74))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249C904))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249CC54))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249CC5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249CC64))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunGoldenRevolver*, bool))(Il2CppBase() + 0x249CC6C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunGoldenRevolver*))(Il2CppBase() + 0x249CC78))(this);
	}

};

}
