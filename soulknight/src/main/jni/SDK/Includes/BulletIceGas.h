#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletIceGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletIceGas"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& isGas() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x237FD30))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x237FDE0))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletIceGas*, uintptr_t))(Il2CppBase() + 0x237FE94))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x2380168))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletIceGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23801C8))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x23802D0))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x2380000))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(BulletIceGas*))(Il2CppBase() + 0x2380A9C))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BulletIceGas*, float))(Il2CppBase() + 0x23800A0))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BulletIceGas*, float))(Il2CppBase() + 0x2380B88))(this, totalTime);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletIceGas*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2380D04))(this, P0, P1);
	}

};

}
