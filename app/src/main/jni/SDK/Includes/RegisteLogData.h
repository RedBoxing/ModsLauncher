#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RegisteLogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegisteLogData"));
	}

	template <typename T = Il2CppString*> T& mac() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& uid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& channelUid() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
