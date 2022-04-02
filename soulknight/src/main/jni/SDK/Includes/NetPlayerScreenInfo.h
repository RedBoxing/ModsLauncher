#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetPlayerScreenInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetPlayerScreenInfo"));
	}

	template <typename T = bool> T& valid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& hero_index() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& skin_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& skill_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ready() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
