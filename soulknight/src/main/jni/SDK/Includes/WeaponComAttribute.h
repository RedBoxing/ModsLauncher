#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComAttribute"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& attributes() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _valueMode() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _log() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x20192FC))(this);
	}
	template <typename T = void> T AddAttribute() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x2019488))(this);
	}
	template <typename T = void> T RevertAttribute() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x2019E3C))(this);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201A7B8))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201A9F8))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201AB74))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201AC70))(this);
	}
	template <typename T = void> T Awakeb__5_0(uintptr_t arg) {
		return ((T (*)(WeaponComAttribute*, uintptr_t))(Il2CppBase() + 0x201AEB4))(this, arg);
	}
	template <typename T = void> T Awakeb__5_1() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201AFA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201B094))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201B09C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201B0A4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComAttribute*))(Il2CppBase() + 0x201B0AC))(this);
	}

};

}
