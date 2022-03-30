#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CounterItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CounterItem"));
	}

	template <typename T = uintptr_t> T& pointerSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
