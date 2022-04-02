#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitTaoist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitTaoist"));
	}

	template <typename T = uintptr_t> T& modeClip() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hitsCache() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x227703C))(this);
	}
	template <typename T = bool> T get_petAtkAudio() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x227709C))(this);
	}
	template <typename T = int32_t> T get_modeIndex() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x2277108))(this);
	}
	template <typename T = void> T set_modeIndex(int32_t value) {
		return ((T (*)(GunInitTaoist*, int32_t))(Il2CppBase() + 0x22771AC))(this, value);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x227731C))(this);
	}
	template <typename T = void> T ThunderAttack() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x22773B0))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunInitTaoist*, bool))(Il2CppBase() + 0x2277E20))(this, isDown);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x2277ED0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_petAtkAudio() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x227827C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x2278284))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunInitTaoist*))(Il2CppBase() + 0x227828C))(this);
	}

};

}
