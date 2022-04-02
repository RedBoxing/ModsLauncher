#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateOtherPlayerInfoEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateOtherPlayerInfoEvent"));
	}

	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
