#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChannelDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelDecorator"));
	}

	template <typename T = uintptr_t> T& skin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& channel() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ChannelDecorator*))(Il2CppBase() + 0x1874C18))(this);
	}
	template <typename T = bool> T ChannelValid() {
		return ((T (*)(ChannelDecorator*))(Il2CppBase() + 0x1874E04))(this);
	}

};

}
