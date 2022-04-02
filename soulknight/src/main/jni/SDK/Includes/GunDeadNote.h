#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDeadNote
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDeadNote"));
	}

	template <typename T = uintptr_t> T& note() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& pan() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2493CE4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2493E1C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494518))(this);
	}
	template <typename T = void> T PlayAudio() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494658))(this);
	}
	template <typename T = Il2CppString*> T GetDescAttack() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x249471C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x24947A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494A3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494A44))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetDescAttack() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494A4C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunDeadNote*))(Il2CppBase() + 0x2494A54))(this);
	}

};

}
