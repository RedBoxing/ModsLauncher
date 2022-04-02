#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomItemUnlockCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomItemUnlockCondition"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(RoomItemUnlockCondition*))(Il2CppBase() + 0x1BF7388))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(RoomItemUnlockCondition*))(Il2CppBase() + 0x1BF7584))(this);
	}

};

}
