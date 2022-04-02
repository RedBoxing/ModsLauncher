#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GoogleIconChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleIconChanger"));
	}

	template <typename T = uintptr_t> T& loginSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& logoutSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GoogleIconChanger*))(Il2CppBase() + 0x443DC74))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GoogleIconChanger*))(Il2CppBase() + 0x443DD0C))(this);
	}

};

}
