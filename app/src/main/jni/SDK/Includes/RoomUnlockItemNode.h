#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomUnlockItemNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomUnlockItemNode"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& roadIdx() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& levelIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
