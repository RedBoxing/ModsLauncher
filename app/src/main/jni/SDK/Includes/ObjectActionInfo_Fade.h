#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfoFade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo_Fade"));
	}

	template <typename T = float> T& targetAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& set() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
