#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnterTransferGateEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterTransferGateEvent"));
	}

	template <typename T = uintptr_t> T& gotoNextSceneFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
