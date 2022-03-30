#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowEmoticonEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowEmoticonEvent"));
	}

	template <typename T = int32_t> T& emoticonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& seed() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
