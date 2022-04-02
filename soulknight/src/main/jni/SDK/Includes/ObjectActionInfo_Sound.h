#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfoSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo_Sound"));
	}

	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
