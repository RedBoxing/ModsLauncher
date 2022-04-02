#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponDropRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponDropRow"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
