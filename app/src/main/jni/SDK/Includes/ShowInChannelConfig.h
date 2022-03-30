#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowInChannelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowInChannelConfig"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ShowInChannelConfig*))(Il2CppBase() + 0x182E024))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(ShowInChannelConfig*))(Il2CppBase() + 0x182E5E8))(this);
	}
	template <typename T = bool> static T ConfigValid(uintptr_t config, bool inverse) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x182E0C0))(0, config, inverse);
	}

};

}
