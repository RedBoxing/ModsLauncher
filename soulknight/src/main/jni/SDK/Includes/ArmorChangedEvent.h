#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArmorChangedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmorChangedEvent"));
	}

	template <typename T = uintptr_t> T& rgController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& oldArmor() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
