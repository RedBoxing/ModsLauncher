#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayReward"));
	}

	template <typename T = uintptr_t> T& items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& messageId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& gameUserId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ktUserId() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
