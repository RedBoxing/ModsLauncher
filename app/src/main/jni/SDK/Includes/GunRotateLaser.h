#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRotateLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRotateLaser"));
	}

	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& w() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppVector3> T& maskSize() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& blade() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = bool> T get_atk_b() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21731A8))(this);
	}
	template <typename T = void> T set_atk_b(bool value) {
		return ((T (*)(GunRotateLaser*, bool))(Il2CppBase() + 0x217320C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173288))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21733A0))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173534))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x217359C))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173688))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21738C4))(this);
	}
	template <typename T = uintptr_t> T Attacking() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173810))(this);
	}
	template <typename T = void> T CreateLaser() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173CAC))(this);
	}
	template <typename T = void> T AttackEnd() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173E48))(this);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2173F40))(this);
	}
	template <typename T = void> T SetMaskPercentage(float percentage) {
		return ((T (*)(GunRotateLaser*, float))(Il2CppBase() + 0x2173418))(this, percentage);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21740B0))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x217411C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x217417C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_atk_b() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174564))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_atk_b(bool P0) {
		return ((T (*)(GunRotateLaser*, bool))(Il2CppBase() + 0x217456C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174578))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174580))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174588))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174590))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAtk() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x2174598))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21745A0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21745A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunRotateLaser*))(Il2CppBase() + 0x21745B0))(this);
	}

};

}
