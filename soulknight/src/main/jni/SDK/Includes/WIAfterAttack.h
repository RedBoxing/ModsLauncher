#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIAfterAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIAfterAttack"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = void> T MakeEffect(bool isSeup) {
		return ((T (*)(WIAfterAttack*, bool))(Il2CppBase() + 0x435CECC))(this, isSeup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WIAfterAttack*))(Il2CppBase() + 0x435CFB8))(this);
	}
	template <typename T = void> T AdditionalAttack() {
		return ((T (*)(WIAfterAttack*))(Il2CppBase() + 0x435D08C))(this);
	}
	template <typename T = void> T AttackEffect() {
		return ((T (*)(WIAfterAttack*))(Il2CppBase() + 0x435D144))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WIAfterAttack*, bool))(Il2CppBase() + 0x435D210))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WIAfterAttack*))(Il2CppBase() + 0x435D21C))(this);
	}

};

}
