#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTeammate2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTeammate2"));
	}

	template <typename T = uintptr_t> T& sprite_ready() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& sprite_cd() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& is_ready() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunTeammate2*))(Il2CppBase() + 0x2181DF0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunTeammate2*))(Il2CppBase() + 0x2181F28))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunTeammate2*, bool, bool))(Il2CppBase() + 0x2181F8C))(this, value1, setHandAttack);
	}
	template <typename T = void> T TurnReady() {
		return ((T (*)(GunTeammate2*))(Il2CppBase() + 0x21824E4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTeammate2*))(Il2CppBase() + 0x2182574))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunTeammate2*))(Il2CppBase() + 0x21825E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunTeammate2*, bool, bool))(Il2CppBase() + 0x21825E8))(this, P0, P1);
	}

};

}
