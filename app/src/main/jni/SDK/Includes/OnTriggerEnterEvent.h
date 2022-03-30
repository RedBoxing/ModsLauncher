#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnTriggerEnterEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnTriggerEnterEvent"));
	}

	template <typename T = uintptr_t> T& triggerItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& objName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
