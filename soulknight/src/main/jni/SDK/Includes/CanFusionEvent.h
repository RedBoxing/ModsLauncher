#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CanFusionEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanFusionEvent"));
	}

	template <typename T = Il2CppString*> T& wp1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& wp2() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
