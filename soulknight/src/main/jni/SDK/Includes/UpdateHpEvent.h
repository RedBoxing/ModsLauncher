#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateHpEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateHpEvent"));
	}

	template <typename T = int32_t> T& playerIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& percentage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& currentHp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& prevHp() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
