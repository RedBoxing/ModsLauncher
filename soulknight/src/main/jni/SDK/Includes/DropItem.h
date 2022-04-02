#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DropItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropItem"));
	}

	template <typename T = uintptr_t> T& proto() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
