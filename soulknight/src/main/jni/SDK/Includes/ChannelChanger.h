#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChannelChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelChanger"));
	}

	template <typename T = uintptr_t> T& channel_text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ChannelChanger*))(Il2CppBase() + 0x18736EC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ChannelChanger*))(Il2CppBase() + 0x187376C))(this);
	}
	template <typename T = void> T FlashChannelText() {
		return ((T (*)(ChannelChanger*))(Il2CppBase() + 0x1873844))(this);
	}
	template <typename T = void> T ClickSwitchBtn() {
		return ((T (*)(ChannelChanger*))(Il2CppBase() + 0x1873958))(this);
	}

};

}
