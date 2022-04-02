#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponIntroduce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponIntroduce"));
	}

	template <typename T = Il2CppString*> T& info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
