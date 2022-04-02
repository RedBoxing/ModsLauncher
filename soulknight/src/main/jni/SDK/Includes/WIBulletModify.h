#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModify"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = void> T MakeEffect(bool isSetup) {
		return ((T (*)(WIBulletModify*, bool))(Il2CppBase() + 0x435E890))(this, isSetup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WIBulletModify*))(Il2CppBase() + 0x435EC24))(this);
	}
	template <typename T = void> T BulletEffect(uintptr_t bullet) {
		return ((T (*)(WIBulletModify*, uintptr_t))(Il2CppBase() + 0x435EE9C))(this, bullet);
	}
	template <typename T = bool> T CanMakeBulletEffect() {
		return ((T (*)(WIBulletModify*))(Il2CppBase() + 0x435EF30))(this);
	}
	template <typename T = void> T MakeBulletEffect(uintptr_t bullet) {
		return ((T (*)(WIBulletModify*, uintptr_t))(Il2CppBase() + 0x435EFCC))(this, bullet);
	}
	template <typename T = void> T BulletMod(uintptr_t bullet) {
		return ((T (*)(WIBulletModify*, uintptr_t))(Il2CppBase() + 0x435F108))(this, bullet);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WIBulletModify*, bool))(Il2CppBase() + 0x435F1E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WIBulletModify*))(Il2CppBase() + 0x435F1F4))(this);
	}

};

}
