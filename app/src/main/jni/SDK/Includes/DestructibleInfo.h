#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DestructibleInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestructibleInfo"));
	}

	template <typename T = bool> T& PlayerGoToMultiRoomUpdate() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
