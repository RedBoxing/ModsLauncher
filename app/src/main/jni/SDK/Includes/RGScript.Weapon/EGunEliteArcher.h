#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class EGunEliteArcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "EGunEliteArcher"));
	}

	template <typename T = uintptr_t> T& aimTemplate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& aimTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _aim() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(EGunEliteArcher*, bool))(Il2CppBase() + 0x43CF320))(this, value1);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(EGunEliteArcher*))(Il2CppBase() + 0x43CF6A4))(this);
	}
	template <typename T = void> T ResumeAim() {
		return ((T (*)(EGunEliteArcher*))(Il2CppBase() + 0x43CF630))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGunEliteArcher*))(Il2CppBase() + 0x43CF714))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0) {
		return ((T (*)(EGunEliteArcher*, bool))(Il2CppBase() + 0x43CF834))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(EGunEliteArcher*))(Il2CppBase() + 0x43CF840))(this);
	}

};

}
