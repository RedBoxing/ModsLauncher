#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IMountSpecialAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpecialAttack"));
	}


	template <typename T = void> T SpecialDown() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SpecialUp() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsSpecialAttacking() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_OnAttackStart() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_OnAttackStart(uintptr_t value) {
		return ((T (*)(IMountSpecialAttack*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_OnAttackEnd() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_OnAttackEnd(uintptr_t value) {
		return ((T (*)(IMountSpecialAttack*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_ShouldHideWeapon() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SpecialHand() {
		return ((T (*)(IMountSpecialAttack*))(Il2CppBase() + 0x0))(this);
	}

};

}
