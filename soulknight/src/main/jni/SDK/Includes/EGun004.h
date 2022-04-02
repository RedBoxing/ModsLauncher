#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun004
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun004"));
	}

	template <typename T = uintptr_t> T& s_ide() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& s_atk() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& the_bullets() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun004*))(Il2CppBase() + 0x22A4528))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun004*))(Il2CppBase() + 0x22A46D8))(this);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(EGun004*, bool))(Il2CppBase() + 0x22A47C0))(this, value1);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun004*))(Il2CppBase() + 0x22A4E20))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0) {
		return ((T (*)(EGun004*, bool))(Il2CppBase() + 0x22A5164))(this, P0);
	}

};

}
