#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerAvatar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerAvatar"));
	}

	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayerAvatar*))(Il2CppBase() + 0x439A48C))(this);
	}

};

}
