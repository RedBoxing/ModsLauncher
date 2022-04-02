#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InitWeaponInitialization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InitWeaponInitialization"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& update_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& update_weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& updateSprites() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_should_update() {
		return ((T (*)(InitWeaponInitialization*))(Il2CppBase() + 0x1A42570))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InitWeaponInitialization*))(Il2CppBase() + 0x1A42714))(this);
	}

};

}
