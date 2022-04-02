#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun006
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun006"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& atk2_bullets() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& atk3_bullet() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun006*))(Il2CppBase() + 0x22A5AAC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun006*))(Il2CppBase() + 0x22A5C08))(this);
	}
	template <typename T = void> T SetAttackTrigger() {
		return ((T (*)(EGun006*))(Il2CppBase() + 0x22A5CF0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun006*))(Il2CppBase() + 0x22A5DA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttackTrigger() {
		return ((T (*)(EGun006*))(Il2CppBase() + 0x22A6890))(this);
	}

};

}
