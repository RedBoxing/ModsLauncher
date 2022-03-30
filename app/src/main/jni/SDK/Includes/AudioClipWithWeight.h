#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AudioClipWithWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioClipWithWeight"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(AudioClipWithWeight*))(Il2CppBase() + 0x1DCEB28))(this);
	}

};

}
