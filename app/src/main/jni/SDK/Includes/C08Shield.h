#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C08Shield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C08Shield"));
	}

	template <typename T = uintptr_t> T& attribute() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& restoreEnergy() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(C08Shield*))(Il2CppBase() + 0x1EF1D3C))(this);
	}
	template <typename T = void> T RestoreEnergy() {
		return ((T (*)(C08Shield*))(Il2CppBase() + 0x1EF1E64))(this);
	}
	template <typename T = bool> T IsLocalPlayer() {
		return ((T (*)(C08Shield*))(Il2CppBase() + 0x1EF1F00))(this);
	}

};

}
