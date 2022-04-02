#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DefaultWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefaultWeaponBulletSpliter"));
	}

	template <typename T = void*> T& splitConfigGetter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& multiCache() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> T get_splitConfigGetter() {
		return ((T (*)(DefaultWeaponBulletSpliter*))(Il2CppBase() + 0x42E2FE0))(this);
	}
	template <typename T = void> T set_splitConfigGetter(void* value) {
		return ((T (*)(DefaultWeaponBulletSpliter*, void*))(Il2CppBase() + 0x42E2FE8))(this, value);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(DefaultWeaponBulletSpliter*))(Il2CppBase() + 0x42E2FF0))(this);
	}
	template <typename T = void> T set_weapon(uintptr_t value) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t))(Il2CppBase() + 0x42E2FF8))(this, value);
	}
	template <typename T = void> T StartSplit(uintptr_t weapon, void* splitConfigGetter) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t, void*))(Il2CppBase() + 0x42E3074))(this, weapon, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(DefaultWeaponBulletSpliter*))(Il2CppBase() + 0x42E3160))(this);
	}
	template <typename T = void> T SplitBullet(uintptr_t bullet) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t))(Il2CppBase() + 0x42E3244))(this, bullet);
	}
	template <typename T = uintptr_t> static T CopyBullet(uintptr_t bullet, Il2CppQuaternion bulletRotation) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x42E3668))(0, bullet, bulletRotation);
	}
	template <typename T = uintptr_t> static T DefaultCopy(uintptr_t bullet, Il2CppQuaternion bulletRotation) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x42E43E4))(0, bullet, bulletRotation);
	}
	template <typename T = void> T CopyDamageCarrier(uintptr_t from, uintptr_t to) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E3ACC))(this, from, to);
	}
	template <typename T = void> T DefaultOriginalBulletOnSplit(uintptr_t bulletGO, uintptr_t splitConfig) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42E3CA0))(this, bulletGO, splitConfig);
	}
	template <typename T = void> T DefaultNewBulletOnSplit(uintptr_t original, uintptr_t bulletGO, int32_t index, uintptr_t splitConfig) {
		return ((T (*)(DefaultWeaponBulletSpliter*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42E3FA0))(this, original, bulletGO, index, splitConfig);
	}

};

}
