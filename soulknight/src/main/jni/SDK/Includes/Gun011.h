#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun011
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun011"));
	}

	template <typename T = uintptr_t> T& clip_end_shoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& shoot_end() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& shoot_end_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E114))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E174))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E22C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E464))(this);
	}
	template <typename T = void> T CreateEndShootBullet() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E2F4))(this);
	}
	template <typename T = void> T TurnEndShoot() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E668))(this);
	}
	template <typename T = void> T AutoCreateEndBullet() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E74C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E830))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256E890))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256EB90))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256EB98))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256EBA0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256EBA8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(Gun011*))(Il2CppBase() + 0x256EBB0))(this);
	}

};

}
