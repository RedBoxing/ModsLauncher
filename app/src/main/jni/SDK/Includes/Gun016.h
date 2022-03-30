#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun016
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun016"));
	}

	template <typename T = float> T& shoot_max_time() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& shoot_time() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& max_anim_speed() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& max_deviation() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& max_consume() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571B28))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571B88))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571C2C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571C90))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571DA4))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(Gun016*, bool, bool))(Il2CppBase() + 0x2571E74))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2571F00))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x25723F8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2572D08))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2572D10))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnWeaponSpeedChanged() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2572D18))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun016*, bool, bool))(Il2CppBase() + 0x2572D20))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(Gun016*))(Il2CppBase() + 0x2572D30))(this);
	}

};

}
