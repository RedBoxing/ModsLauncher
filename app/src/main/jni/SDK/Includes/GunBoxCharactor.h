#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxCharactor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxCharactor"));
	}

	template <typename T = int32_t> T& charactorIndex() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& previewCharactor() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunBoxCharactor*))(Il2CppBase() + 0x25832A4))(this);
	}
	template <typename T = void> T OnBoxPlayced(uintptr_t box) {
		return ((T (*)(GunBoxCharactor*, uintptr_t))(Il2CppBase() + 0x25833D0))(this, box);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunBoxCharactor*, bool))(Il2CppBase() + 0x2583620))(this, isDown);
	}
	template <typename T = void> T RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxCharactor*))(Il2CppBase() + 0x25836C8))(this);
	}
	template <typename T = uintptr_t> T RefreshingIcon() {
		return ((T (*)(GunBoxCharactor*))(Il2CppBase() + 0x2583884))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunBoxCharactor*))(Il2CppBase() + 0x2583968))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBoxPlayced(uintptr_t P0) {
		return ((T (*)(GunBoxCharactor*, uintptr_t))(Il2CppBase() + 0x258396C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_WeaponSpecial(bool P0) {
		return ((T (*)(GunBoxCharactor*, bool))(Il2CppBase() + 0x2583970))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxCharactor*))(Il2CppBase() + 0x2583978))(this);
	}

};

}
