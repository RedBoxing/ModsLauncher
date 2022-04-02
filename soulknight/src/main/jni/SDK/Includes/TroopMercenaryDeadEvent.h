#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopMercenaryDeadEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopMercenaryDeadEvent"));
	}

	template <typename T = uintptr_t> T& troopMercenary() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
