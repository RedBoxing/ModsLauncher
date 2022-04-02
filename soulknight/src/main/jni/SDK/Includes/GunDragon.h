#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDragon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDragon"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& audio_clip_mode2() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& change_mode() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494A5C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494ABC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunDragon*, bool, bool))(Il2CppBase() + 0x2494B20))(this, value1, setHandAttack);
	}
	template <typename T = void> T ChangeMode() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494BA8))(this);
	}
	template <typename T = void> T TurnChangeModeBack() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494CCC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494D2C))(this);
	}
	template <typename T = void> T Attack1() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494EA4))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2494F98))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x249516C))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunDragon*, bool))(Il2CppBase() + 0x24952F0))(this, isDown);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2495378))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(GunDragon*, uintptr_t))(Il2CppBase() + 0x2495460))(this, proto);
	}
	template <typename T = void> T ChangeModeb__9_0() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2495570))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x2495604))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunDragon*, bool, bool))(Il2CppBase() + 0x249560C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunDragon*))(Il2CppBase() + 0x249561C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(GunDragon*, uintptr_t))(Il2CppBase() + 0x2495624))(this, P0);
	}

};

}
