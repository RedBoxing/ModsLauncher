#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnePunchKillBossFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnePunchKillBossFlag"));
	}

	template <typename T = Il2CppString*> T& weapon_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
