#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletAdditionalColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletAdditionalColor"));
	}

	template <typename T = float> T& bullet_scale() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& light_sword_sprite() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& bullet_color() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& is_light_sword() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& originLightSwordSprite() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T MakeEffect(bool isSeup) {
		return ((T (*)(WIBulletAdditionalColor*, bool))(Il2CppBase() + 0x435D874))(this, isSeup);
	}
	template <typename T = void> T AttackEffect() {
		return ((T (*)(WIBulletAdditionalColor*))(Il2CppBase() + 0x435DB68))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(float fixed_angle) {
		return ((T (*)(WIBulletAdditionalColor*, float))(Il2CppBase() + 0x435DD88))(this, fixed_angle);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WIBulletAdditionalColor*))(Il2CppBase() + 0x435E05C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WIBulletAdditionalColor*, bool))(Il2CppBase() + 0x435E210))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackEffect() {
		return ((T (*)(WIBulletAdditionalColor*))(Il2CppBase() + 0x435E218))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateBullet(float P0) {
		return ((T (*)(WIBulletAdditionalColor*, float))(Il2CppBase() + 0x435E21C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WIBulletAdditionalColor*))(Il2CppBase() + 0x435E220))(this);
	}

};

}
