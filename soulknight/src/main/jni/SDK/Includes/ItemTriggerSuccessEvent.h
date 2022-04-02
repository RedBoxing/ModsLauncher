#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTriggerSuccessEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTriggerSuccessEvent"));
	}

	template <typename T = uintptr_t> T& triggerItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& objName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
