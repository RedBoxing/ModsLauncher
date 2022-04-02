#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossDeadEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDeadEvent"));
	}

	template <typename T = Il2CppString*> T& enemeyId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
