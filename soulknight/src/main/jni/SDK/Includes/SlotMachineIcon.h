#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SlotMachineIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotMachineIcon"));
	}

	template <typename T = uintptr_t> T& awardType() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
