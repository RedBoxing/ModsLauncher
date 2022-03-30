#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RemoteLogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoteLogData"));
	}

	template <typename T = Il2CppString*> T& location() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& isp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
