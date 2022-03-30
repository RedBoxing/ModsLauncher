#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTeammate1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTeammate1"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& bullet_img() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2180448))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x21805B4))(this);
	}
	template <typename T = void> T ShowCollider() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2180AF0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x21814C0))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunTeammate1*, bool, bool))(Il2CppBase() + 0x2181698))(this, value1, setHandAttack);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2181B50))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2181D60))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2181DD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunTeammate1*, bool, bool))(Il2CppBase() + 0x2181DD8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunTeammate1*))(Il2CppBase() + 0x2181DE8))(this);
	}

};

}
