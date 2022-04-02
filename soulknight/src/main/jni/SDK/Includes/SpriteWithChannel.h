#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpriteWithChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpriteWithChannel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& channelSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SpriteWithChannel*))(Il2CppBase() + 0x4298FF8))(this);
	}

};

}
