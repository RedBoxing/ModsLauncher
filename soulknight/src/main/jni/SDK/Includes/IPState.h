#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IPState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPState"));
	}

	template <typename T = Il2CppString*> T& ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint16_t> T& port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& lastPingTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& lastPingResult() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsUsed() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
