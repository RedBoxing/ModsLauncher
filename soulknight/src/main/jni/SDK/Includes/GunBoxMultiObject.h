#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxMultiObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxMultiObject"));
	}

	template <typename T = int32_t> T& objIndex() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppString*> T& boxSpriteName() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = uintptr_t> T get_bullet() {
		return ((T (*)(GunBoxMultiObject*))(Il2CppBase() + 0x2584808))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunBoxMultiObject*, bool))(Il2CppBase() + 0x25848C4))(this, isDown);
	}
	template <typename T = void> T RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxMultiObject*))(Il2CppBase() + 0x258499C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_bullet() {
		return ((T (*)(GunBoxMultiObject*))(Il2CppBase() + 0x2584C98))(this);
	}
	template <typename T = void> T iFixBaseProxy_WeaponSpecial(bool P0) {
		return ((T (*)(GunBoxMultiObject*, bool))(Il2CppBase() + 0x2584CA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxMultiObject*))(Il2CppBase() + 0x2584CA8))(this);
	}

};

}
