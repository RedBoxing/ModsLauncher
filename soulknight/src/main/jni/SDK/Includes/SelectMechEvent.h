#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectMechEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectMechEvent"));
	}

	template <typename T = Il2CppString*> T& mech() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
