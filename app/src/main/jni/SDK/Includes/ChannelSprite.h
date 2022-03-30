#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChannelSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelSprite"));
	}

	template <typename T = uintptr_t> T& channelConfig() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& parentSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& IconColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
