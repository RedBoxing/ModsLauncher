#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponModifier"));
	}

	template <typename T = bool> T& modified() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(WeaponModifier*))(Il2CppBase() + 0x45FB238))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponModifier*))(Il2CppBase() + 0x45FB2C8))(this);
	}
	template <typename T = void> T BuffModify() {
		return ((T (*)(WeaponModifier*))(Il2CppBase() + 0x45FB330))(this);
	}

};

}
