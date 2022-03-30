#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetHandAutoSetup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetHandAutoSetup"));
	}

	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weaponChanger() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PetHandAutoSetup*))(Il2CppBase() + 0x438BF88))(this);
	}

};

}
