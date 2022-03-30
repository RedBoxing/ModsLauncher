#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceEvent"));
	}

	template <typename T = uintptr_t> T& relicEntranceMessage() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
