#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateSelectHeroCDTimeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateSelectHeroCDTimeEvent"));
	}

	template <typename T = int32_t> T& restTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
