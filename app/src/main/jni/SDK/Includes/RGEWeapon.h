#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEWeapon"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& activate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& deviation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& need_lock() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = int32_t> T& facing() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& fx_play_alone() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& atkAddition() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& bullet2DmgType() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_finalAtk() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x2235D84))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x2235DEC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x2235EC4))(this);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(RGEWeapon*, bool))(Il2CppBase() + 0x2235FEC))(this, value1);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x2236118))(this);
	}
	template <typename T = float> T get_fixedAngle() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x2236220))(this);
	}
	template <typename T = uintptr_t> T GetBulletInfo() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x223631C))(this);
	}
	template <typename T = uintptr_t> T GetDamageInfo() {
		return ((T (*)(RGEWeapon*))(Il2CppBase() + 0x223667C))(this);
	}
	template <typename T = void> T AdjustBulletAngle(uintptr_t bulletInfo) {
		return ((T (*)(RGEWeapon*, uintptr_t))(Il2CppBase() + 0x2236784))(this, bulletInfo);
	}
	template <typename T = bool> T HasDamageType(uintptr_t bullet, uintptr_t damageType) {
		return ((T (*)(RGEWeapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2236930))(this, bullet, damageType);
	}

};

}
