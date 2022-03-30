#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxColor"));
	}

	template <typename T = int32_t> T& colorIndex() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_colors() {
		return ((T (*)(GunBoxColor*))(Il2CppBase() + 0x2583D40))(this);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(GunBoxColor*))(Il2CppBase() + 0x2583DB4))(this);
	}
	template <typename T = void> T OnBoxPlayced(uintptr_t box) {
		return ((T (*)(GunBoxColor*, uintptr_t))(Il2CppBase() + 0x2583EAC))(this, box);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunBoxColor*, bool))(Il2CppBase() + 0x2584000))(this, isDown);
	}
	template <typename T = void> T RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxColor*))(Il2CppBase() + 0x25840DC))(this);
	}
	template <typename T = void> T SetColor(uintptr_t color) {
		return ((T (*)(GunBoxColor*, uintptr_t))(Il2CppBase() + 0x25843BC))(this, color);
	}
	template <typename T = void> T FlushIcon(bool leave) {
		return ((T (*)(GunBoxColor*, bool))(Il2CppBase() + 0x2584544))(this, leave);
	}
	template <typename T = void> T iFixBaseProxy_OnBoxPlayced(uintptr_t P0) {
		return ((T (*)(GunBoxColor*, uintptr_t))(Il2CppBase() + 0x25847EC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_WeaponSpecial(bool P0) {
		return ((T (*)(GunBoxColor*, bool))(Il2CppBase() + 0x25847F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RefreshSpriteAndIcon() {
		return ((T (*)(GunBoxColor*))(Il2CppBase() + 0x25847F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FlushIcon(bool P0) {
		return ((T (*)(GunBoxColor*, bool))(Il2CppBase() + 0x25847FC))(this, P0);
	}

};

}
